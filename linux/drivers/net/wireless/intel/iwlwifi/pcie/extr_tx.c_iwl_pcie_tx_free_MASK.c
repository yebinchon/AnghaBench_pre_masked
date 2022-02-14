
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_trans_pcie {int scd_bc_tbls; int kw; int * txq_memory; int ** txq; int queue_used; } ;
struct iwl_trans {TYPE_2__* trans_cfg; } ;
struct TYPE_4__ {TYPE_1__* base_params; } ;
struct TYPE_3__ {int num_of_queues; } ;


 struct iwl_trans_pcie* FUNC_0 (struct iwl_trans*) ;
 int FUNC_1 (struct iwl_trans*,int *) ;
 int FUNC_2 (struct iwl_trans*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int) ;

void FUNC_5(struct iwl_trans *VAR_0)
{
 int VAR_1;
 struct iwl_trans_pcie *VAR_2 = FUNC_0(VAR_0);

 FUNC_4(VAR_2->queue_used, 0, sizeof(VAR_2->queue_used));


 if (VAR_2->txq_memory) {
  for (VAR_1 = 0;
       VAR_1 < VAR_0->trans_cfg->base_params->num_of_queues;
       VAR_1++) {
   FUNC_2(VAR_0, VAR_1);
   VAR_2->txq[VAR_1] = ((void*)0);
  }
 }

 FUNC_3(VAR_2->txq_memory);
 VAR_2->txq_memory = ((void*)0);

 FUNC_1(VAR_0, &VAR_2->kw);

 FUNC_1(VAR_0, &VAR_2->scd_bc_tbls);
}
