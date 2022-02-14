
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_session {scalar_t__ first_burst; scalar_t__ max_burst; int age; int cls_session; int frwd_lock; int cmdsn; int queued_cmdsn; int state; int initial_r2t_en; scalar_t__ imm_data_en; } ;
struct iscsi_conn {int ping_timeout; int recv_timeout; int stop_stage; int ehwait; int tmf_state; int transport_timer; void* last_ping; void* last_recv; int c_stage; struct iscsi_session* session; } ;
struct iscsi_cls_conn {struct iscsi_conn* dd_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 int VAR_7 ;
 int FUNC_0 (int ,struct iscsi_conn*,char*,...) ;
 int FUNC_1 (int ) ;
 void* VAR_8 ;
 int FUNC_2 (int *,void*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct iscsi_cls_conn *VAR_9)
{
 struct iscsi_conn *VAR_10 = VAR_9->dd_data;
 struct iscsi_session *VAR_11 = VAR_10->session;

 if (!VAR_11) {
  FUNC_0(VAR_5, VAR_10,
      "can't start unbound connection\n");
  return -VAR_1;
 }

 if ((VAR_11->imm_data_en || !VAR_11->initial_r2t_en) &&
      VAR_11->first_burst > VAR_11->max_burst) {
  FUNC_0(VAR_6, VAR_10, "invalid burst lengths: "
      "first_burst %d max_burst %d\n",
      VAR_11->first_burst, VAR_11->max_burst);
  return -VAR_0;
 }

 if (VAR_10->ping_timeout && !VAR_10->recv_timeout) {
  FUNC_0(VAR_5, VAR_10, "invalid recv timeout of "
      "zero. Using 5 seconds\n.");
  VAR_10->recv_timeout = 5;
 }

 if (VAR_10->recv_timeout && !VAR_10->ping_timeout) {
  FUNC_0(VAR_5, VAR_10, "invalid ping timeout of "
      "zero. Using 5 seconds.\n");
  VAR_10->ping_timeout = 5;
 }

 FUNC_3(&VAR_11->frwd_lock);
 VAR_10->c_stage = VAR_3;
 VAR_11->state = VAR_4;
 VAR_11->queued_cmdsn = VAR_11->cmdsn;

 VAR_10->last_recv = VAR_8;
 VAR_10->last_ping = VAR_8;
 if (VAR_10->recv_timeout && VAR_10->ping_timeout)
  FUNC_2(&VAR_10->transport_timer,
     VAR_8 + (VAR_10->recv_timeout * VAR_2));

 switch(VAR_10->stop_stage) {
 case 129:




  VAR_10->stop_stage = 0;
  VAR_10->tmf_state = VAR_7;
  VAR_11->age++;
  if (VAR_11->age == 16)
   VAR_11->age = 0;
  break;
 case 128:
  VAR_10->stop_stage = 0;
  break;
 default:
  break;
 }
 FUNC_4(&VAR_11->frwd_lock);

 FUNC_1(VAR_11->cls_session);
 FUNC_5(&VAR_10->ehwait);
 return 0;
}
