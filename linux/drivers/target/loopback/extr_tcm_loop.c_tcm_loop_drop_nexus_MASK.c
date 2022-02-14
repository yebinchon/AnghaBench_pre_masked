
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcm_loop_tpg {struct tcm_loop_nexus* tl_nexus; int tl_hba; int tl_tpg_port_count; } ;
struct tcm_loop_nexus {struct se_session* se_sess; } ;
struct se_session {TYPE_1__* se_node_acl; } ;
struct TYPE_2__ {int initiatorname; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct tcm_loop_nexus*) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (char*,scalar_t__) ;
 int FUNC_4 (struct se_session*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(
 struct tcm_loop_tpg *VAR_2)
{
 struct se_session *VAR_3;
 struct tcm_loop_nexus *VAR_4;

 VAR_4 = VAR_2->tl_nexus;
 if (!VAR_4)
  return -VAR_0;

 VAR_3 = VAR_4->se_sess;
 if (!VAR_3)
  return -VAR_0;

 if (FUNC_0(&VAR_2->tl_tpg_port_count)) {
  FUNC_3("Unable to remove TCM_Loop I_T Nexus with active TPG port count: %d\n",
         FUNC_0(&VAR_2->tl_tpg_port_count));
  return -VAR_1;
 }

 FUNC_2("TCM_Loop_ConfigFS: Removing I_T Nexus to emulated %s Initiator Port: %s\n",
   FUNC_5(VAR_2->tl_hba),
   VAR_4->se_sess->se_node_acl->initiatorname);



 FUNC_4(VAR_3);
 VAR_2->tl_nexus = ((void*)0);
 FUNC_1(VAR_4);
 return 0;
}
