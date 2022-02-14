
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_11__ {int * pfirmware; int * wowlan_firmware; int macphymode; int bandset; int current_bandtype; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_14__ {int wo_wlan_mode; int reg_fwctrl_lps; int reg_max_lps_awakeintvl; int fwctrl_psmode; int fwctrl_lps; int swctrl_lps; int inactiveps; } ;
struct TYPE_10__ {int dm_initialgain_enable; scalar_t__ thermalvalue; scalar_t__ disable_framebursting; scalar_t__ dm_flag; } ;
struct TYPE_9__ {int btc_ops; } ;
struct rtl_priv {int max_fw_size; TYPE_4__ rtlhal; TYPE_1__ io; TYPE_7__ psc; TYPE_6__* cfg; TYPE_3__ dm; TYPE_2__ btcoexist; } ;
struct rtl_pci {int transmit_config; int receive_config; int int_clear; int msi_support; void* sys_irq_mask; void** irq_mask; } ;
struct rtl_mac {int ht_enable; scalar_t__ vht_stbc_cap; scalar_t__ vht_cur_stbc; scalar_t__ vht_ldpc_cap; scalar_t__ vht_cur_ldpc; scalar_t__ ht_stbc_cap; scalar_t__ ht_cur_stbc; } ;
struct rtl_hal {scalar_t__ hw_type; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_13__ {TYPE_5__* mod_params; } ;
struct TYPE_12__ {scalar_t__ disable_watchdog; int int_clear; int msi_support; int fwctrl_lps; int swctrl_lps; int inactiveps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
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
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ,int,char*,int ,int ,struct ieee80211_hw*,int ) ;
 int FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct ieee80211_hw*) ;
 int FUNC_6 () ;
 int VAR_42 ;
 struct rtl_hal* FUNC_7 (struct rtl_priv*) ;
 struct rtl_mac* FUNC_8 (struct rtl_priv*) ;
 struct rtl_pci* FUNC_9 (int ) ;
 int FUNC_10 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_11 (struct ieee80211_hw*) ;
 int VAR_43 ;
 int FUNC_12 (int *) ;
 void* FUNC_13 (int) ;

int FUNC_14(struct ieee80211_hw *VAR_44)
{
 int VAR_45 = 0;
 struct rtl_priv *VAR_46 = FUNC_11(VAR_44);
 struct rtl_pci *VAR_47 = FUNC_9(FUNC_10(VAR_44));
 struct rtl_mac *VAR_48 = FUNC_8(FUNC_11(VAR_44));
 struct rtl_hal *VAR_49 = FUNC_7(FUNC_11(VAR_44));
 char *VAR_50, *VAR_51;

 FUNC_4(VAR_44);
 VAR_46->btcoexist.btc_ops = FUNC_6();

 VAR_46->dm.dm_initialgain_enable = 1;
 VAR_46->dm.dm_flag = 0;
 VAR_46->dm.disable_framebursting = 0;
 VAR_46->dm.thermalvalue = 0;
 VAR_47->transmit_config = VAR_2 | FUNC_0(15) | FUNC_0(24) | FUNC_0(25);

 VAR_48->ht_enable = 1;
 VAR_48->ht_cur_stbc = 0;
 VAR_48->ht_stbc_cap = 0;
 VAR_48->vht_cur_ldpc = 0;
 VAR_48->vht_ldpc_cap = 0;
 VAR_48->vht_cur_stbc = 0;
 VAR_48->vht_stbc_cap = 0;

 VAR_46->rtlhal.current_bandtype = VAR_0;

 VAR_46->rtlhal.bandset = VAR_1;
 VAR_46->rtlhal.macphymode = VAR_38;

 VAR_47->receive_config = (VAR_32 |
    VAR_34 |
    VAR_33 |
    VAR_35 |
    VAR_37 |
    VAR_36 |
    VAR_30 |
    VAR_25 |

    VAR_27 |
    VAR_28 |
    VAR_26 |
    VAR_24 |
    VAR_29 |
    VAR_31 |
    0);

 VAR_47->irq_mask[0] =
      (u32)(VAR_17 |
    VAR_13 |
    VAR_15 |
    VAR_12 |
    VAR_14 |
    VAR_16 |
    VAR_11 |
    VAR_10 |
    VAR_22 |
    VAR_23 |
    VAR_18 |
    VAR_19 |
    0);

 VAR_47->irq_mask[1] =
   (u32)(VAR_20 |
    VAR_21 |
    0);
 VAR_47->sys_irq_mask = (u32)(VAR_8 |
          VAR_9 |
          0);

 VAR_46->psc.wo_wlan_mode = VAR_40 |
        VAR_41;


 VAR_46->psc.inactiveps = VAR_46->cfg->mod_params->inactiveps;
 VAR_46->psc.swctrl_lps = VAR_46->cfg->mod_params->swctrl_lps;
 VAR_46->psc.fwctrl_lps = VAR_46->cfg->mod_params->fwctrl_lps;
 VAR_47->msi_support = VAR_46->cfg->mod_params->msi_support;
 VAR_47->int_clear = VAR_46->cfg->mod_params->int_clear;
 if (VAR_46->cfg->mod_params->disable_watchdog)
  FUNC_2("watchdog disabled\n");
 VAR_46->psc.reg_fwctrl_lps = 2;
 VAR_46->psc.reg_max_lps_awakeintvl = 2;




 FUNC_5(VAR_44);

 if (VAR_46->psc.reg_fwctrl_lps == 1)
  VAR_46->psc.fwctrl_psmode = VAR_5;
 else if (VAR_46->psc.reg_fwctrl_lps == 2)
  VAR_46->psc.fwctrl_psmode = VAR_4;
 else if (VAR_46->psc.reg_fwctrl_lps == 3)
  VAR_46->psc.fwctrl_psmode = VAR_3;


 VAR_46->rtlhal.pfirmware = FUNC_13(0x8000);
 if (!VAR_46->rtlhal.pfirmware) {
  FUNC_1("Can't alloc buffer for fw.\n");
  return 1;
 }
 VAR_46->rtlhal.wowlan_firmware = FUNC_13(0x8000);
 if (!VAR_46->rtlhal.wowlan_firmware) {
  FUNC_1("Can't alloc buffer for wowlan fw.\n");
  FUNC_12(VAR_46->rtlhal.pfirmware);
  VAR_46->rtlhal.pfirmware = ((void*)0);
  return 1;
 }

 if (VAR_49->hw_type == VAR_7) {
  VAR_50 = "rtlwifi/rtl8812aefw.bin";
  VAR_51 = "rtlwifi/rtl8812aefw_wowlan.bin";
 } else {
  VAR_50 = "rtlwifi/rtl8821aefw_29.bin";
  VAR_51 = "rtlwifi/rtl8821aefw_wowlan.bin";
 }

 VAR_46->max_fw_size = 0x8000;

 FUNC_2("Using firmware %s\n", VAR_50);
 VAR_45 = FUNC_3(VAR_39, 1, VAR_50,
          VAR_46->io.dev, VAR_6, VAR_44,
          VAR_42);
 if (VAR_45) {
  FUNC_1("Failed to request normal firmware!\n");
  FUNC_12(VAR_46->rtlhal.wowlan_firmware);
  FUNC_12(VAR_46->rtlhal.pfirmware);
  return 1;
 }

 FUNC_2("Using firmware %s\n", VAR_51);
 VAR_45 = FUNC_3(VAR_39, 1,
          VAR_51,
          VAR_46->io.dev, VAR_6, VAR_44,
          VAR_43);
 if (VAR_45) {
  FUNC_1("Failed to request wowlan firmware!\n");
  FUNC_12(VAR_46->rtlhal.wowlan_firmware);
  FUNC_12(VAR_46->rtlhal.pfirmware);
  return 1;
 }
 return 0;
}
