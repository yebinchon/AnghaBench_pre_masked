
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct se_portal_group {int session_lock; } ;
struct iscsi_session {int time2retain_timer_flags; int sid; int session_reinstatement; struct iscsi_portal_group* tpg; } ;
struct iscsi_portal_group {struct se_portal_group tpg_se_tpg; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 struct iscsi_session* FUNC_1 (int ,struct timer_list*,int ) ;
 int FUNC_2 (struct iscsi_session*) ;
 int FUNC_3 (struct iscsi_session*) ;
 int FUNC_4 (char*,...) ;
 struct iscsi_session* VAR_2 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_3 ;

void FUNC_7(struct timer_list *VAR_4)
{
 struct iscsi_session *VAR_5 = FUNC_1(VAR_5, VAR_4, VAR_3);
 struct iscsi_portal_group *VAR_6 = VAR_5->tpg;
 struct se_portal_group *VAR_7 = &VAR_6->tpg_se_tpg;

 FUNC_5(&VAR_7->session_lock);
 if (VAR_5->time2retain_timer_flags & VAR_1) {
  FUNC_6(&VAR_7->session_lock);
  return;
 }
 if (FUNC_0(&VAR_5->session_reinstatement)) {
  FUNC_4("Exiting Time2Retain handler because"
    " session_reinstatement=1\n");
  FUNC_6(&VAR_7->session_lock);
  return;
 }
 VAR_5->time2retain_timer_flags |= VAR_0;

 FUNC_4("Time2Retain timer expired for SID: %u, cleaning up"
   " iSCSI session.\n", VAR_5->sid);

 FUNC_3(VAR_5);
 FUNC_6(&VAR_7->session_lock);
 FUNC_2(VAR_5);
}
