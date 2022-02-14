
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rtl_priv {TYPE_2__* cfg; } ;
struct rtl_pci {int const_pci_aspm; int const_devicepci_aspm_setting; int const_hostpci_aspm_setting; int const_hwsw_rfoff_d3; int const_support_pciaspm; scalar_t__ const_amdpci_aspm; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_4__ {TYPE_1__* mod_params; } ;
struct TYPE_3__ {int aspm_support; } ;


 struct rtl_pci* FUNC_0 (int ) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_0)
{
 struct rtl_priv *VAR_1 = FUNC_2(VAR_0);
 struct rtl_pci *VAR_2 = FUNC_0(FUNC_1(VAR_0));


 VAR_2->const_amdpci_aspm = 0;
 VAR_2->const_pci_aspm = 2;


 VAR_2->const_devicepci_aspm_setting = 0x03;


 VAR_2->const_hostpci_aspm_setting = 0x02;
 VAR_2->const_hwsw_rfoff_d3 = 2;







 VAR_2->const_support_pciaspm = VAR_1->cfg->mod_params->aspm_support;
}
