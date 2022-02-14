
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct iwl_trans_pcie {int wait_command_queue; TYPE_4__** txq; } ;
struct iwl_trans {int status; TYPE_3__* trans_cfg; int op_mode; TYPE_1__* cfg; } ;
struct TYPE_8__ {int stuck_timer; } ;
struct TYPE_7__ {TYPE_2__* base_params; } ;
struct TYPE_6__ {int num_of_queues; } ;
struct TYPE_5__ {int apmg_not_supported; scalar_t__ internal_wimax_coex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct iwl_trans_pcie* FUNC_0 (struct iwl_trans*) ;
 int VAR_4 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct iwl_trans*,int ) ;
 int FUNC_5 (struct iwl_trans*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct iwl_trans *VAR_5)
{
 struct iwl_trans_pcie *VAR_6 = FUNC_0(VAR_5);
 int VAR_7;


 if (VAR_5->cfg->internal_wimax_coex &&
     !VAR_5->cfg->apmg_not_supported &&
     (!(FUNC_4(VAR_5, VAR_0) &
        VAR_3) ||
      (FUNC_4(VAR_5, VAR_1) &
       VAR_2))) {
  FUNC_1(VAR_4, &VAR_5->status);
  FUNC_3(VAR_5->op_mode);
  FUNC_6(&VAR_6->wait_command_queue);
  return;
 }

 for (VAR_7 = 0; VAR_7 < VAR_5->trans_cfg->base_params->num_of_queues; VAR_7++) {
  if (!VAR_6->txq[VAR_7])
   continue;
  FUNC_2(&VAR_6->txq[VAR_7]->stuck_timer);
 }



 FUNC_5(VAR_5);

 FUNC_1(VAR_4, &VAR_5->status);
 FUNC_6(&VAR_6->wait_command_queue);
}
