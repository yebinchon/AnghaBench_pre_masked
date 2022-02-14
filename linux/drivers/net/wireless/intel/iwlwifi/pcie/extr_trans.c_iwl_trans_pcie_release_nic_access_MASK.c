
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_trans_pcie {int reg_lock; scalar_t__ cmd_hold_nic_awake; } ;
struct iwl_trans {TYPE_2__* trans_cfg; } ;
struct TYPE_4__ {TYPE_1__* csr; } ;
struct TYPE_3__ {int flag_mac_access_req; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct iwl_trans_pcie* FUNC_1 (struct iwl_trans*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct iwl_trans*,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct iwl_trans *VAR_1,
           unsigned long *VAR_2)
{
 struct iwl_trans_pcie *VAR_3 = FUNC_1(VAR_1);

 FUNC_4(&VAR_3->reg_lock);





 FUNC_2(&VAR_3->reg_lock);

 if (VAR_3->cmd_hold_nic_awake)
  goto out;

 FUNC_3(VAR_1, VAR_0,
       FUNC_0(VAR_1->trans_cfg->csr->flag_mac_access_req));






out:
 FUNC_5(&VAR_3->reg_lock, *VAR_2);
}
