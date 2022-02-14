
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_session {struct iscsi_session* fabric_sess_ptr; } ;
struct se_portal_group {int session_lock; } ;
struct iscsi_session {int time2retain_timer_flags; int conn_lock; int session_fall_back_to_erl0; int session_reinstatement; int session_logout; TYPE_1__* tpg; } ;
struct TYPE_2__ {struct se_portal_group tpg_se_tpg; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct iscsi_session*) ;
 int FUNC_3 (struct iscsi_session*,int,int) ;
 int FUNC_4 (struct iscsi_session*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct se_session *VAR_1)
{
 struct iscsi_session *VAR_2 = VAR_1->fabric_sess_ptr;
 struct se_portal_group *VAR_3 = &VAR_2->tpg->tpg_se_tpg;

 FUNC_6(&VAR_3->session_lock);
 FUNC_5(&VAR_2->conn_lock);
 if (FUNC_0(&VAR_2->session_fall_back_to_erl0) ||
     FUNC_0(&VAR_2->session_logout) ||
     (VAR_2->time2retain_timer_flags & VAR_0)) {
  FUNC_7(&VAR_2->conn_lock);
  FUNC_8(&VAR_3->session_lock);
  return;
 }
 FUNC_1(&VAR_2->session_reinstatement, 1);
 FUNC_1(&VAR_2->session_fall_back_to_erl0, 1);
 FUNC_7(&VAR_2->conn_lock);

 FUNC_4(VAR_2);
 FUNC_8(&VAR_3->session_lock);

 FUNC_3(VAR_2, 1, 1);
 FUNC_2(VAR_2);
}
