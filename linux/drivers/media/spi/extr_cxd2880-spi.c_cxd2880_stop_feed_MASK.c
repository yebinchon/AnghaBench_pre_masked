
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_demux_feed {int pid; struct dvb_demux* demux; } ;
struct dvb_demux {struct cxd2880_dvb_spi* priv; } ;
struct cxd2880_pid_filter_config {TYPE_1__* pid_config; } ;
struct cxd2880_dvb_spi {scalar_t__ all_pid_feed_count; int feed_count; int * ts_buf; int cxd2880_ts_read_thread; struct cxd2880_pid_filter_config filter_config; } ;
struct TYPE_2__ {scalar_t__ pid; scalar_t__ is_enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cxd2880_dvb_spi*,struct cxd2880_pid_filter_config*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,scalar_t__,...) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static int FUNC_5(struct dvb_demux_feed *VAR_2)
{
 int VAR_3 = 0;
 int VAR_4;
 struct dvb_demux *VAR_5 = ((void*)0);
 struct cxd2880_dvb_spi *VAR_6 = ((void*)0);

 if (!VAR_2) {
  FUNC_4("invalid arg\n");
  return -VAR_1;
 }

 VAR_5 = VAR_2->demux;
 if (!VAR_5) {
  FUNC_4("feed->demux is NULL\n");
  return -VAR_1;
 }
 VAR_6 = VAR_5->priv;

 if (!VAR_6->feed_count) {
  FUNC_4("no feed is started\n");
  return -VAR_1;
 }

 if (VAR_2->pid == 0x2000) {





  if (VAR_6->all_pid_feed_count <= 0) {
   FUNC_4("PID %d not found.\n", VAR_2->pid);
   return -VAR_1;
  }
  VAR_6->all_pid_feed_count--;
 } else {
  struct cxd2880_pid_filter_config VAR_7;

  VAR_7 = VAR_6->filter_config;

  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
   if (VAR_2->pid == VAR_7.pid_config[VAR_3].pid &&
       VAR_7.pid_config[VAR_3].is_enable != 0) {
    VAR_7.pid_config[VAR_3].is_enable = 0;
    VAR_7.pid_config[VAR_3].pid = 0;
    FUNC_3("removed PID %d from #%d\n",
      VAR_2->pid, VAR_3);
    break;
   }
  }
  VAR_6->filter_config = VAR_7;

  if (VAR_3 == VAR_0) {
   FUNC_4("PID %d not found\n", VAR_2->pid);
   return -VAR_1;
  }
 }

 VAR_4 = FUNC_0(VAR_6,
     &VAR_6->filter_config,
     VAR_6->all_pid_feed_count > 0);
 VAR_6->feed_count--;

 if (VAR_6->feed_count == 0) {
  int VAR_8 = 0;

  VAR_8 = FUNC_2(VAR_6->cxd2880_ts_read_thread);
  if (VAR_8) {
   FUNC_4("'kthread_stop failed. (%d)\n", VAR_8);
   VAR_4 = VAR_8;
  }
  FUNC_1(VAR_6->ts_buf);
  VAR_6->ts_buf = ((void*)0);
 }

 FUNC_3("stop feed ok.(count %d)\n", VAR_6->feed_count);

 return VAR_4;
}
