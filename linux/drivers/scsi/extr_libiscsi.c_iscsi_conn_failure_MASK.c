
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_session {scalar_t__ state; int frwd_lock; } ;
struct iscsi_conn {scalar_t__ stop_stage; int cls_conn; int suspend_rx; int suspend_tx; struct iscsi_session* session; } ;
typedef enum iscsi_err { ____Placeholder_iscsi_err } iscsi_err ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct iscsi_conn *VAR_2, enum iscsi_err VAR_3)
{
 struct iscsi_session *VAR_4 = VAR_2->session;

 FUNC_2(&VAR_4->frwd_lock);
 if (VAR_4->state == VAR_0) {
  FUNC_3(&VAR_4->frwd_lock);
  return;
 }

 if (VAR_2->stop_stage == 0)
  VAR_4->state = VAR_0;
 FUNC_3(&VAR_4->frwd_lock);

 FUNC_1(VAR_1, &VAR_2->suspend_tx);
 FUNC_1(VAR_1, &VAR_2->suspend_rx);
 FUNC_0(VAR_2->cls_conn, VAR_3);
}
