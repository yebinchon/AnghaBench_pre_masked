
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int new_master; int state; } ;
struct dlm_ctxt {int joining_node; int recovery_map; int migration_wq; int exit_domain_map; int domain_map; int live_nodes_map; int name; TYPE_1__ reco; int spinlock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dlm_ctxt*) ;
 int FUNC_1 (struct dlm_ctxt*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (struct dlm_ctxt*,int) ;
 int FUNC_5 (struct dlm_ctxt*,int,int ) ;
 int FUNC_6 (int ,char*,int,...) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct dlm_ctxt *VAR_2, int VAR_3)
{
 FUNC_2(&VAR_2->spinlock);

 if (VAR_2->reco.new_master == VAR_3) {
  FUNC_6(0, "%s: recovery master %d just died\n",
       VAR_2->name, VAR_3);
  if (VAR_2->reco.state & VAR_1) {



   FUNC_6(0, "%s: dead master %d had reached "
        "finalize1 state, clearing\n", VAR_2->name, VAR_3);
   VAR_2->reco.state &= ~VAR_1;
   FUNC_0(VAR_2);
  }
 }


 if (VAR_2->joining_node == VAR_3) {
  FUNC_6(0, "Clearing join state for node %u\n", VAR_3);
  FUNC_1(VAR_2, VAR_0);
 }


 if (!FUNC_8(VAR_3, VAR_2->live_nodes_map)) {
  FUNC_6(0, "for domain %s, node %d is already dead. "
       "another node likely did recovery already.\n",
       VAR_2->name, VAR_3);
  return;
 }


 if (!FUNC_8(VAR_3, VAR_2->domain_map)) {


  FUNC_6(0, "node %u already removed from domain!\n", VAR_3);
  return;
 }

 FUNC_3(VAR_3, VAR_2->live_nodes_map);


 if (!FUNC_8(VAR_3, VAR_2->recovery_map))
  FUNC_4(VAR_2, VAR_3);


 FUNC_5(VAR_2, VAR_3, 0);

 FUNC_6(0, "node %u being removed from domain map!\n", VAR_3);
 FUNC_3(VAR_3, VAR_2->domain_map);
 FUNC_3(VAR_3, VAR_2->exit_domain_map);


 FUNC_9(&VAR_2->migration_wq);

 FUNC_7(VAR_3, VAR_2->recovery_map);
}
