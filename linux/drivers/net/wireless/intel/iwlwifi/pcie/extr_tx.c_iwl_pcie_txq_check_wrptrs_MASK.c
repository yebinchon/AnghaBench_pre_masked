
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_txq {int need_update; int lock; } ;
struct iwl_trans_pcie {int queue_used; struct iwl_txq** txq; } ;
struct iwl_trans {TYPE_2__* trans_cfg; } ;
struct TYPE_4__ {TYPE_1__* base_params; } ;
struct TYPE_3__ {int num_of_queues; } ;


 struct iwl_trans_pcie* FUNC_0 (struct iwl_trans*) ;
 int FUNC_1 (struct iwl_trans*,struct iwl_txq*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,int ) ;

void FUNC_5(struct iwl_trans *VAR_0)
{
 struct iwl_trans_pcie *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->trans_cfg->base_params->num_of_queues; VAR_2++) {
  struct iwl_txq *VAR_3 = VAR_1->txq[VAR_2];

  if (!FUNC_4(VAR_2, VAR_1->queue_used))
   continue;

  FUNC_2(&VAR_3->lock);
  if (VAR_3->need_update) {
   FUNC_1(VAR_0, VAR_3);
   VAR_3->need_update = 0;
  }
  FUNC_3(&VAR_3->lock);
 }
}
