
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int queue; } ;
struct iscsi_session {TYPE_1__ cmdpool; int frwd_lock; } ;
struct iscsi_conn {char* data; TYPE_2__* login_task; int ehwait; int tmf_timer; int xmitwork; int taskqueuelock; int requeue; int cmdqueue; int mgmtqueue; int transport_timer; int tmf_state; scalar_t__ exp_statsn; int id; int c_stage; struct iscsi_cls_conn* cls_conn; struct iscsi_session* session; struct iscsi_conn* dd_data; } ;
struct iscsi_cls_session {struct iscsi_session* dd_data; } ;
struct iscsi_cls_conn {struct iscsi_conn* dd_data; } ;
struct TYPE_4__ {char* data; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;
 struct iscsi_cls_conn* FUNC_5 (struct iscsi_cls_session*,int,int ) ;
 int FUNC_6 (struct iscsi_cls_conn*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int *,void*,int) ;
 int FUNC_8 (int *,void*,int) ;
 int FUNC_9 (struct iscsi_conn*,int ,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int ,int ) ;

struct iscsi_cls_conn *
FUNC_14(struct iscsi_cls_session *VAR_7, int VAR_8,
   uint32_t VAR_9)
{
 struct iscsi_session *VAR_10 = VAR_7->dd_data;
 struct iscsi_conn *VAR_11;
 struct iscsi_cls_conn *VAR_12;
 char *VAR_13;

 VAR_12 = FUNC_5(VAR_7, sizeof(*VAR_11) + VAR_8,
         VAR_9);
 if (!VAR_12)
  return ((void*)0);
 VAR_11 = VAR_12->dd_data;
 FUNC_9(VAR_11, 0, sizeof(*VAR_11) + VAR_8);

 VAR_11->dd_data = VAR_12->dd_data + sizeof(*VAR_11);
 VAR_11->session = VAR_10;
 VAR_11->cls_conn = VAR_12;
 VAR_11->c_stage = VAR_1;
 VAR_11->id = VAR_9;
 VAR_11->exp_statsn = 0;
 VAR_11->tmf_state = VAR_3;

 FUNC_13(&VAR_11->transport_timer, VAR_4, 0);

 FUNC_0(&VAR_11->mgmtqueue);
 FUNC_0(&VAR_11->cmdqueue);
 FUNC_0(&VAR_11->requeue);
 FUNC_11(&VAR_11->taskqueuelock);
 FUNC_1(&VAR_11->xmitwork, VAR_6);


 FUNC_10(&VAR_10->frwd_lock);
 if (!FUNC_8(&VAR_10->cmdpool.queue,
                         (void*)&VAR_11->login_task,
    sizeof(void*))) {
  FUNC_12(&VAR_10->frwd_lock);
  goto login_task_alloc_fail;
 }
 FUNC_12(&VAR_10->frwd_lock);

 VAR_13 = (char *) FUNC_2(VAR_0,
      FUNC_3(VAR_2));
 if (!VAR_13)
  goto login_task_data_alloc_fail;
 VAR_11->login_task->data = VAR_11->data = VAR_13;

 FUNC_13(&VAR_11->tmf_timer, VAR_5, 0);
 FUNC_4(&VAR_11->ehwait);

 return VAR_12;

login_task_data_alloc_fail:
 FUNC_7(&VAR_10->cmdpool.queue, (void*)&VAR_11->login_task,
      sizeof(void*));
login_task_alloc_fail:
 FUNC_6(VAR_12);
 return ((void*)0);
}
