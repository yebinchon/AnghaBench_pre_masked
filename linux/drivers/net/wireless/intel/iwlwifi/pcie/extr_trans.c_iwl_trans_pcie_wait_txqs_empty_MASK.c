
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct iwl_trans_pcie {int cmd_queue; int queue_used; } ;
struct iwl_trans {TYPE_2__* trans_cfg; } ;
struct TYPE_4__ {TYPE_1__* base_params; } ;
struct TYPE_3__ {int num_of_queues; } ;


 int FUNC_0 (int) ;
 struct iwl_trans_pcie* FUNC_1 (struct iwl_trans*) ;
 int FUNC_2 (struct iwl_trans*,int) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct iwl_trans *VAR_0, u32 VAR_1)
{
 struct iwl_trans_pcie *VAR_2 = FUNC_1(VAR_0);
 int VAR_3;
 int VAR_4 = 0;


 for (VAR_3 = 0;
      VAR_3 < VAR_0->trans_cfg->base_params->num_of_queues;
      VAR_3++) {

  if (VAR_3 == VAR_2->cmd_queue)
   continue;
  if (!FUNC_3(VAR_3, VAR_2->queue_used))
   continue;
  if (!(FUNC_0(VAR_3) & VAR_1))
   continue;

  VAR_4 = FUNC_2(VAR_0, VAR_3);
  if (VAR_4)
   break;
 }

 return VAR_4;
}
