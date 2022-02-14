
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_portal_group {int session_lock; } ;
struct iscsi_session {int time2retain_timer_flags; int sid; int time2retain_timer; struct iscsi_portal_group* tpg; } ;
struct iscsi_portal_group {struct se_portal_group tpg_se_tpg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct iscsi_session *VAR_3)
{
 struct iscsi_portal_group *VAR_4 = VAR_3->tpg;
 struct se_portal_group *VAR_5 = &VAR_4->tpg_se_tpg;

 FUNC_1(&VAR_5->session_lock);

 if (VAR_3->time2retain_timer_flags & VAR_0)
  return -1;

 if (!(VAR_3->time2retain_timer_flags & VAR_1))
  return 0;

 VAR_3->time2retain_timer_flags |= VAR_2;
 FUNC_4(&VAR_5->session_lock);

 FUNC_0(&VAR_3->time2retain_timer);

 FUNC_3(&VAR_5->session_lock);
 VAR_3->time2retain_timer_flags &= ~VAR_1;
 FUNC_2("Stopped Time2Retain Timer for SID: %u\n",
   VAR_3->sid);
 return 0;
}
