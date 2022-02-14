
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iscsi_task {int last_xfer; } ;
struct iscsi_conn {TYPE_2__* session; struct iscsi_task* task; int suspend_tx; } ;
struct TYPE_4__ {int back_lock; int frwd_lock; TYPE_1__* tt; } ;
struct TYPE_3__ {int (* xmit_task ) (struct iscsi_task*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iscsi_task*) ;
 int FUNC_1 (struct iscsi_task*) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct iscsi_task*) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct iscsi_conn *VAR_3)
{
 struct iscsi_task *VAR_4 = VAR_3->task;
 int VAR_5;

 if (FUNC_7(VAR_1, &VAR_3->suspend_tx))
  return -VAR_0;

 FUNC_3(&VAR_3->session->back_lock);
 if (VAR_3->task == ((void*)0)) {
  FUNC_5(&VAR_3->session->back_lock);
  return -VAR_0;
 }
 FUNC_0(VAR_4);
 FUNC_5(&VAR_3->session->back_lock);
 FUNC_5(&VAR_3->session->frwd_lock);
 VAR_5 = VAR_3->session->tt->xmit_task(VAR_4);
 FUNC_3(&VAR_3->session->frwd_lock);
 if (!VAR_5) {

  VAR_4->last_xfer = VAR_2;
  VAR_3->task = ((void*)0);
 }

 FUNC_2(&VAR_3->session->back_lock);
 FUNC_1(VAR_4);
 FUNC_4(&VAR_3->session->back_lock);
 return VAR_5;
}
