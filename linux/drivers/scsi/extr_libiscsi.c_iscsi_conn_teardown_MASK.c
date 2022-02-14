
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int queue; } ;
struct iscsi_session {int eh_mutex; int frwd_lock; struct iscsi_conn* leadconn; int back_lock; TYPE_1__ cmdpool; int state; } ;
struct iscsi_conn {int login_task; int local_ipaddr; int persistent_address; scalar_t__ data; int ehwait; int c_stage; int transport_timer; struct iscsi_session* session; } ;
struct iscsi_cls_conn {struct iscsi_conn* dd_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct iscsi_cls_conn*) ;
 int FUNC_4 (struct iscsi_conn*) ;
 int FUNC_5 (int *,void*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

void FUNC_12(struct iscsi_cls_conn *VAR_3)
{
 struct iscsi_conn *VAR_4 = VAR_3->dd_data;
 struct iscsi_session *VAR_5 = VAR_4->session;

 FUNC_0(&VAR_4->transport_timer);

 FUNC_7(&VAR_5->eh_mutex);
 FUNC_9(&VAR_5->frwd_lock);
 VAR_4->c_stage = VAR_0;
 if (VAR_5->leadconn == VAR_4) {



  VAR_5->state = VAR_2;
  FUNC_11(&VAR_4->ehwait);
 }
 FUNC_10(&VAR_5->frwd_lock);


 FUNC_4(VAR_4);

 FUNC_9(&VAR_5->frwd_lock);
 FUNC_1((unsigned long) VAR_4->data,
     FUNC_2(VAR_1));
 FUNC_6(VAR_4->persistent_address);
 FUNC_6(VAR_4->local_ipaddr);

 FUNC_9(&VAR_5->back_lock);
 FUNC_5(&VAR_5->cmdpool.queue, (void*)&VAR_4->login_task,
      sizeof(void*));
 FUNC_10(&VAR_5->back_lock);
 if (VAR_5->leadconn == VAR_4)
  VAR_5->leadconn = ((void*)0);
 FUNC_10(&VAR_5->frwd_lock);
 FUNC_8(&VAR_5->eh_mutex);

 FUNC_3(VAR_3);
}
