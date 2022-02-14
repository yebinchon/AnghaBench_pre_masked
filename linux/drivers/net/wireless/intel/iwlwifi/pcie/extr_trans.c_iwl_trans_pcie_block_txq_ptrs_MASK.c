
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_txq {int write_ptr; int lock; int block; } ;
struct iwl_trans_pcie {int cmd_queue; struct iwl_txq** txq; } ;
struct iwl_trans {TYPE_2__* trans_cfg; } ;
struct TYPE_4__ {TYPE_1__* base_params; } ;
struct TYPE_3__ {int num_of_queues; } ;


 int VAR_0 ;
 struct iwl_trans_pcie* FUNC_0 (struct iwl_trans*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct iwl_trans*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct iwl_trans *VAR_1, bool VAR_2)
{
 struct iwl_trans_pcie *VAR_3 = FUNC_0(VAR_1);
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->trans_cfg->base_params->num_of_queues; VAR_4++) {
  struct iwl_txq *VAR_5 = VAR_3->txq[VAR_4];

  if (VAR_4 == VAR_3->cmd_queue)
   continue;

  FUNC_3(&VAR_5->lock);

  if (!VAR_2 && !(FUNC_1(!VAR_5->block))) {
   VAR_5->block--;
   if (!VAR_5->block) {
    FUNC_2(VAR_1, VAR_0,
         VAR_5->write_ptr | (VAR_4 << 8));
   }
  } else if (VAR_2) {
   VAR_5->block++;
  }

  FUNC_4(&VAR_5->lock);
 }
}
