
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_session {int * fabric_sess_ptr; struct se_portal_group* se_tpg; int sess_list; } ;
struct se_portal_group {TYPE_1__* se_tpg_tfo; int session_lock; } ;
struct TYPE_2__ {int fabric_name; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct se_session*) ;

void FUNC_5(struct se_session *VAR_0)
{
 struct se_portal_group *VAR_1 = VAR_0->se_tpg;
 unsigned long VAR_2;

 if (!VAR_1) {
  FUNC_4(VAR_0);
  return;
 }

 FUNC_2(&VAR_1->session_lock, VAR_2);
 FUNC_0(&VAR_0->sess_list);
 VAR_0->se_tpg = ((void*)0);
 VAR_0->fabric_sess_ptr = ((void*)0);
 FUNC_3(&VAR_1->session_lock, VAR_2);

 FUNC_1("TARGET_CORE[%s]: Deregistered fabric_sess\n",
  VAR_1->se_tpg_tfo->fabric_name);
 FUNC_4(VAR_0);
}
