
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iwl_trans_pcie {int cmd_hold_nic_awake; int reg_lock; } ;
struct iwl_trans {TYPE_2__* trans_cfg; } ;
struct TYPE_6__ {int flag_mac_access_req; } ;
struct TYPE_5__ {TYPE_3__* csr; TYPE_1__* base_params; } ;
struct TYPE_4__ {int apmg_wake_up_wa; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct iwl_trans_pcie* FUNC_1 (struct iwl_trans*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct iwl_trans*,int ,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct iwl_trans *VAR_1)
{
 struct iwl_trans_pcie *VAR_2 = FUNC_1(VAR_1);

 FUNC_4(&VAR_2->reg_lock);

 if (!VAR_1->trans_cfg->base_params->apmg_wake_up_wa)
  return;
 if (FUNC_2(!VAR_2->cmd_hold_nic_awake))
  return;

 VAR_2->cmd_hold_nic_awake = 0;
 FUNC_3(VAR_1, VAR_0,
       FUNC_0(VAR_1->trans_cfg->csr->flag_mac_access_req));
}
