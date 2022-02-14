
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_16__ {int earlymode_enable; int * pfirmware; int macphymode; void* bandset; void* current_bandtype; } ;
struct TYPE_15__ {int dev; } ;
struct TYPE_14__ {int reg_fwctrl_lps; int reg_max_lps_awakeintvl; int low_power_enable; int fwctrl_psmode; int fwctrl_lps; int swctrl_lps; int inactiveps; } ;
struct TYPE_11__ {int lck_inprogress; } ;
struct TYPE_10__ {int dm_initialgain_enable; scalar_t__ thermalvalue; scalar_t__ disable_framebursting; scalar_t__ dm_flag; } ;
struct TYPE_9__ {int btc_ops; } ;
struct rtl_priv {int max_fw_size; TYPE_8__ rtlhal; TYPE_7__ io; TYPE_6__ psc; TYPE_5__* cfg; TYPE_3__ phy; TYPE_2__ dm; TYPE_1__ btcoexist; } ;
struct rtl_pci {int transmit_config; int receive_config; int msi_support; void* sys_irq_mask; void** irq_mask; } ;
struct rtl_mac {int ht_enable; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_13__ {TYPE_4__* mod_params; } ;
struct TYPE_12__ {scalar_t__ disable_watchdog; int msi_support; int fwctrl_lps; int swctrl_lps; int inactiveps; } ;


 void* VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ,int,char*,int ,int ,struct ieee80211_hw*,int ) ;
 int FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct ieee80211_hw*) ;
 int FUNC_6 () ;
 int VAR_34 ;
 struct rtl_mac* FUNC_7 (struct rtl_priv*) ;
 struct rtl_pci* FUNC_8 (int ) ;
 int FUNC_9 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_10 (struct ieee80211_hw*) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int) ;

int FUNC_13(struct ieee80211_hw *VAR_35)
{
 int VAR_36 = 0;
 struct rtl_priv *VAR_37 = FUNC_10(VAR_35);
 struct rtl_pci *VAR_38 = FUNC_8(FUNC_9(VAR_35));
 struct rtl_mac *VAR_39 = FUNC_7(FUNC_10(VAR_35));
 char *VAR_40 = "rtlwifi/rtl8723befw_36.bin";

 FUNC_4(VAR_35);
 VAR_37->btcoexist.btc_ops = FUNC_6();

 VAR_37->dm.dm_initialgain_enable = 1;
 VAR_37->dm.dm_flag = 0;
 VAR_37->dm.disable_framebursting = 0;
 VAR_37->dm.thermalvalue = 0;
 VAR_38->transmit_config = VAR_1 | FUNC_0(15) | FUNC_0(24) | FUNC_0(25);

 VAR_37->phy.lck_inprogress = 0;

 VAR_39->ht_enable = 1;


 VAR_37->rtlhal.current_bandtype = VAR_0;
 VAR_37->rtlhal.bandset = VAR_0;
 VAR_37->rtlhal.macphymode = VAR_32;

 VAR_38->receive_config = (VAR_27 |
      VAR_29 |
      VAR_28 |
      VAR_30 |
      VAR_31 |
      VAR_25 |
      VAR_21 |
      VAR_22 |
      VAR_23 |
      VAR_20 |
      VAR_24 |
      VAR_26 |
      0);

 VAR_38->irq_mask[0] = (u32) (VAR_14 |
         VAR_12 |
         VAR_10 |
         VAR_11 |
         VAR_13 |
         VAR_9 |
         VAR_8 |
         VAR_18 |
         VAR_19 |
         VAR_15 |
         VAR_16 |
         0);

 VAR_38->irq_mask[1] = (u32)(VAR_17 | 0);

 VAR_38->sys_irq_mask = (u32)(VAR_6 |
         VAR_7 |
         0);


 VAR_37->psc.inactiveps = VAR_37->cfg->mod_params->inactiveps;
 VAR_37->psc.swctrl_lps = VAR_37->cfg->mod_params->swctrl_lps;
 VAR_37->psc.fwctrl_lps = VAR_37->cfg->mod_params->fwctrl_lps;
 VAR_38->msi_support = VAR_37->cfg->mod_params->msi_support;
 if (VAR_37->cfg->mod_params->disable_watchdog)
  FUNC_2("watchdog disabled\n");
 VAR_37->psc.reg_fwctrl_lps = 2;
 VAR_37->psc.reg_max_lps_awakeintvl = 2;



 FUNC_5(VAR_35);

 if (VAR_37->psc.reg_fwctrl_lps == 1)
  VAR_37->psc.fwctrl_psmode = VAR_4;
 else if (VAR_37->psc.reg_fwctrl_lps == 2)
  VAR_37->psc.fwctrl_psmode = VAR_3;
 else if (VAR_37->psc.reg_fwctrl_lps == 3)
  VAR_37->psc.fwctrl_psmode = VAR_2;


 VAR_37->psc.low_power_enable = 0;

 VAR_37->rtlhal.earlymode_enable = 0;


 VAR_37->rtlhal.pfirmware = FUNC_12(0x8000);
 if (!VAR_37->rtlhal.pfirmware) {
  FUNC_1("Can't alloc buffer for fw.\n");
  return 1;
 }

 VAR_37->max_fw_size = 0x8000;
 FUNC_2("Using firmware %s\n", VAR_40);
 VAR_36 = FUNC_3(VAR_33, 1, VAR_40,
          VAR_37->io.dev, VAR_5, VAR_35,
          VAR_34);
 if (VAR_36) {
  FUNC_1("Failed to request firmware!\n");
  FUNC_11(VAR_37->rtlhal.pfirmware);
  VAR_37->rtlhal.pfirmware = ((void*)0);
  return 1;
 }
 return 0;
}
