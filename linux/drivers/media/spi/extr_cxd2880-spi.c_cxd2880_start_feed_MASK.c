
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_demux_feed {int pid; struct dvb_demux* demux; } ;
struct dvb_demux {struct cxd2880_dvb_spi* priv; } ;
struct cxd2880_pid_filter_config {TYPE_1__* pid_config; } ;
struct cxd2880_dvb_spi {int feed_count; scalar_t__ all_pid_feed_count; int cxd2880_ts_read_thread; struct cxd2880_pid_filter_config filter_config; int * ts_buf; } ;
struct TYPE_2__ {int is_enable; int pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (struct cxd2880_dvb_spi*,struct cxd2880_pid_filter_config*,int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int,int) ;
 int FUNC_5 (int ,struct cxd2880_dvb_spi*,char*) ;
 int FUNC_6 (struct cxd2880_pid_filter_config*,int ,int) ;
 int FUNC_7 (char*,scalar_t__,...) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int FUNC_9(struct dvb_demux_feed *VAR_7)
{
 int VAR_8 = 0;
 int VAR_9 = 0;
 struct dvb_demux *VAR_10 = ((void*)0);
 struct cxd2880_dvb_spi *VAR_11 = ((void*)0);

 if (!VAR_7) {
  FUNC_8("invalid arg\n");
  return -VAR_1;
 }

 VAR_10 = VAR_7->demux;
 if (!VAR_10) {
  FUNC_8("feed->demux is NULL\n");
  return -VAR_1;
 }
 VAR_11 = VAR_10->priv;

 if (VAR_11->feed_count == VAR_0) {
  FUNC_8("Exceeded maximum PID count (32).");
  FUNC_8("Selected PID cannot be enabled.\n");
  return -VAR_1;
 }

 if (VAR_7->pid == 0x2000) {
  if (VAR_11->all_pid_feed_count == 0) {
   VAR_8 = FUNC_2(VAR_11,
       &VAR_11->filter_config,
       1);
   if (VAR_8) {
    FUNC_8("update pid filter failed\n");
    return VAR_8;
   }
  }
  VAR_11->all_pid_feed_count++;

  FUNC_7("all PID feed (count = %d)\n",
    VAR_11->all_pid_feed_count);
 } else {
  struct cxd2880_pid_filter_config VAR_12;

  VAR_12 = VAR_11->filter_config;

  for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
   if (VAR_12.pid_config[VAR_9].is_enable == 0) {
    VAR_12.pid_config[VAR_9].is_enable = 1;
    VAR_12.pid_config[VAR_9].pid = VAR_7->pid;
    FUNC_7("store PID %d to #%d\n",
      VAR_7->pid, VAR_9);
    break;
   }
  }
  if (VAR_9 == VAR_0) {
   FUNC_8("PID filter is full.\n");
   return -VAR_1;
  }
  if (!VAR_11->all_pid_feed_count)
   VAR_8 = FUNC_2(VAR_11,
       &VAR_12,
       0);
  if (VAR_8)
   return VAR_8;

  VAR_11->filter_config = VAR_12;
 }

 if (VAR_11->feed_count == 0) {
  VAR_11->ts_buf =
   FUNC_4(VAR_5 * 188,
    VAR_4 | VAR_3);
  if (!VAR_11->ts_buf) {
   FUNC_8("ts buffer allocate failed\n");
   FUNC_6(&VAR_11->filter_config, 0,
          sizeof(VAR_11->filter_config));
   VAR_11->all_pid_feed_count = 0;
   return -VAR_2;
  }
  VAR_11->cxd2880_ts_read_thread = FUNC_5(VAR_6,
             VAR_11,
             "cxd2880_ts_read");
  if (FUNC_0(VAR_11->cxd2880_ts_read_thread)) {
   FUNC_8("kthread_run failed/\n");
   FUNC_3(VAR_11->ts_buf);
   VAR_11->ts_buf = ((void*)0);
   FUNC_6(&VAR_11->filter_config, 0,
          sizeof(VAR_11->filter_config));
   VAR_11->all_pid_feed_count = 0;
   return FUNC_1(VAR_11->cxd2880_ts_read_thread);
  }
 }

 VAR_11->feed_count++;

 FUNC_7("start feed (count %d)\n", VAR_11->feed_count);
 return 0;
}
