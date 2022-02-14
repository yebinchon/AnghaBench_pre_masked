
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_trans {TYPE_1__* trans_cfg; } ;
struct iwl_nvm_data {int hw_addr; } ;
typedef int __le32 ;
struct TYPE_4__ {int mac_addr1_otp; int mac_addr0_otp; int mac_addr1_strap; int mac_addr0_strap; } ;
struct TYPE_3__ {TYPE_2__* csr; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct iwl_trans*,int ) ;

__attribute__((used)) static void FUNC_4(struct iwl_trans *VAR_0,
     struct iwl_nvm_data *VAR_1)
{
 __le32 VAR_2 =
  FUNC_0(FUNC_3(VAR_0,
           VAR_0->trans_cfg->csr->mac_addr0_strap));
 __le32 VAR_3 =
  FUNC_0(FUNC_3(VAR_0,
           VAR_0->trans_cfg->csr->mac_addr1_strap));

 FUNC_2(VAR_2, VAR_3, VAR_1->hw_addr);




 if (FUNC_1(VAR_1->hw_addr))
  return;

 VAR_2 = FUNC_0(FUNC_3(VAR_0,
     VAR_0->trans_cfg->csr->mac_addr0_otp));
 VAR_3 = FUNC_0(FUNC_3(VAR_0,
     VAR_0->trans_cfg->csr->mac_addr1_otp));

 FUNC_2(VAR_2, VAR_3, VAR_1->hw_addr);
}
