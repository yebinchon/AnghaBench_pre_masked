
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_trans_pcie {int txq_memory; int queue_used; int queue_stopped; } ;
struct iwl_trans {TYPE_1__* trans_cfg; } ;
struct TYPE_4__ {int num_of_queues; } ;
struct TYPE_3__ {TYPE_2__* base_params; } ;


 struct iwl_trans_pcie* FUNC_0 (struct iwl_trans*) ;
 int FUNC_1 (struct iwl_trans*) ;
 int FUNC_2 (struct iwl_trans*,int) ;
 int FUNC_3 (struct iwl_trans*) ;
 int FUNC_4 (int ,int ,int) ;

int FUNC_5(struct iwl_trans *VAR_0)
{
 struct iwl_trans_pcie *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;


 FUNC_3(VAR_0);


 FUNC_1(VAR_0);






 FUNC_4(VAR_1->queue_stopped, 0, sizeof(VAR_1->queue_stopped));
 FUNC_4(VAR_1->queue_used, 0, sizeof(VAR_1->queue_used));


 if (!VAR_1->txq_memory)
  return 0;


 for (VAR_2 = 0; VAR_2 < VAR_0->trans_cfg->base_params->num_of_queues;
      VAR_2++)
  FUNC_2(VAR_0, VAR_2);

 return 0;
}
