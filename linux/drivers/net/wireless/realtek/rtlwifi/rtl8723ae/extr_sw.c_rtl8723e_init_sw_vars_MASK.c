
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
struct TYPE_14__ {int * pfirmware; int macphymode; void* bandset; void* current_bandtype; } ;
struct TYPE_13__ {int dev; } ;
struct TYPE_12__ {int reg_fwctrl_lps; int reg_max_lps_awakeintvl; int fwctrl_psmode; int fwctrl_lps; int swctrl_lps; int inactiveps; } ;
struct TYPE_9__ {int dm_initialgain_enable; scalar_t__ thermalvalue; scalar_t__ disable_framebursting; scalar_t__ dm_flag; } ;
struct TYPE_8__ {int btc_ops; } ;
struct rtl_priv {int max_fw_size; TYPE_7__ rtlhal; TYPE_6__ io; TYPE_5__ psc; TYPE_4__* cfg; TYPE_2__ dm; TYPE_1__ btcoexist; } ;
struct rtl_pci {int transmit_config; int receive_config; int msi_support; void** irq_mask; } ;
struct rtl_hal {int version; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_11__ {TYPE_3__* mod_params; } ;
struct TYPE_10__ {scalar_t__ disable_watchdog; int msi_support; int fwctrl_lps; int swctrl_lps; int inactiveps; } ;


 void* VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
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
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int ,int,char*,int ,int ,struct ieee80211_hw*,int ) ;
 int FUNC_5 (struct ieee80211_hw*) ;
 int FUNC_6 (struct ieee80211_hw*) ;
 int FUNC_7 () ;
 int VAR_34 ;
 struct rtl_hal* FUNC_8 (struct rtl_priv*) ;
 struct rtl_pci* FUNC_9 (int ) ;
 int FUNC_10 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_11 (struct ieee80211_hw*) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (int) ;

int FUNC_14(struct ieee80211_hw *VAR_35)
{
 struct rtl_priv *VAR_36 = FUNC_11(VAR_35);
 struct rtl_pci *VAR_37 = FUNC_9(FUNC_10(VAR_35));
 struct rtl_hal *VAR_38 = FUNC_8(FUNC_11(VAR_35));
 int VAR_39 = 0;
 char *VAR_40 = "rtlwifi/rtl8723fw.bin";

 FUNC_5(VAR_35);

 VAR_36->btcoexist.btc_ops = FUNC_7();

 VAR_36->dm.dm_initialgain_enable = 1;
 VAR_36->dm.dm_flag = 0;
 VAR_36->dm.disable_framebursting = 0;
 VAR_36->dm.thermalvalue = 0;
 VAR_37->transmit_config = VAR_1 | FUNC_0(12) | FUNC_0(13);


 VAR_36->rtlhal.current_bandtype = VAR_0;
 VAR_36->rtlhal.bandset = VAR_0;
 VAR_36->rtlhal.macphymode = VAR_32;

 VAR_37->receive_config = (VAR_27 |
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

 VAR_37->irq_mask[0] =
     (u32) (VAR_14 |
     VAR_13 |
     VAR_19 |
     VAR_18 |
     VAR_6 |
     VAR_7 |
     VAR_11 |
     VAR_9 |
     VAR_8 |
     VAR_10 |
     VAR_16 |
     VAR_17 |
     VAR_12 |
     0);

 VAR_37->irq_mask[1] =
   (u32)(VAR_15 |
    0);


 VAR_36->psc.inactiveps = VAR_36->cfg->mod_params->inactiveps;
 VAR_36->psc.swctrl_lps = VAR_36->cfg->mod_params->swctrl_lps;
 VAR_36->psc.fwctrl_lps = VAR_36->cfg->mod_params->fwctrl_lps;
 VAR_37->msi_support = VAR_36->cfg->mod_params->msi_support;
 if (VAR_36->cfg->mod_params->disable_watchdog)
  FUNC_3("watchdog disabled\n");
 VAR_36->psc.reg_fwctrl_lps = 3;
 VAR_36->psc.reg_max_lps_awakeintvl = 5;
 FUNC_6(VAR_35);

 if (VAR_36->psc.reg_fwctrl_lps == 1)
  VAR_36->psc.fwctrl_psmode = VAR_4;
 else if (VAR_36->psc.reg_fwctrl_lps == 2)
  VAR_36->psc.fwctrl_psmode = VAR_3;
 else if (VAR_36->psc.reg_fwctrl_lps == 3)
  VAR_36->psc.fwctrl_psmode = VAR_2;


 VAR_36->rtlhal.pfirmware = FUNC_13(0x6000);
 if (!VAR_36->rtlhal.pfirmware) {
  FUNC_2("Can't alloc buffer for fw.\n");
  return 1;
 }

 if (FUNC_1(VAR_38->version))
  VAR_40 = "rtlwifi/rtl8723fw_B.bin";

 VAR_36->max_fw_size = 0x6000;
 FUNC_3("Using firmware %s\n", VAR_40);
 VAR_39 = FUNC_4(VAR_33, 1, VAR_40,
          VAR_36->io.dev, VAR_5, VAR_35,
          VAR_34);
 if (VAR_39) {
  FUNC_2("Failed to request firmware!\n");
  FUNC_12(VAR_36->rtlhal.pfirmware);
  VAR_36->rtlhal.pfirmware = ((void*)0);
  return 1;
 }
 return 0;
}
