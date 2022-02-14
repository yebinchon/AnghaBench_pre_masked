
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
struct TYPE_14__ {int earlymode_enable; int * pfirmware; int macphymode; void* bandset; void* current_bandtype; } ;
struct TYPE_13__ {int dev; } ;
struct TYPE_12__ {int reg_fwctrl_lps; int reg_max_lps_awakeintvl; int low_power_enable; int fwctrl_psmode; int fwctrl_lps; int swctrl_lps; int inactiveps; } ;
struct TYPE_9__ {int dm_initialgain_enable; scalar_t__ disable_framebursting; scalar_t__ dm_flag; } ;
struct TYPE_8__ {int btc_ops; } ;
struct rtl_priv {int max_fw_size; TYPE_7__ rtlhal; TYPE_6__ io; TYPE_5__ psc; TYPE_4__* cfg; TYPE_2__ dm; TYPE_1__ btcoexist; } ;
struct rtl_pci {int transmit_config; int receive_config; int msi_support; void** irq_mask; } ;
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
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ,int,char*,int ,int ,struct ieee80211_hw*,int ) ;
 int FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct ieee80211_hw*) ;
 int FUNC_6 () ;
 int VAR_30 ;
 struct rtl_pci* FUNC_7 (int ) ;
 int FUNC_8 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_9 (struct ieee80211_hw*) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int) ;

int FUNC_12(struct ieee80211_hw *VAR_31)
{
 struct rtl_priv *VAR_32 = FUNC_9(VAR_31);
 struct rtl_pci *VAR_33 = FUNC_7(FUNC_8(VAR_31));
 int VAR_34 = 0;
 char *VAR_35;

 FUNC_4(VAR_31);
 VAR_33->msi_support = VAR_32->cfg->mod_params->msi_support;
 VAR_32->btcoexist.btc_ops = FUNC_6();

 VAR_32->dm.dm_initialgain_enable = 1;
 VAR_32->dm.dm_flag = 0;
 VAR_32->dm.disable_framebursting = 0;
 VAR_33->transmit_config = VAR_1 | FUNC_0(15);


 VAR_32->rtlhal.current_bandtype = VAR_0;
 VAR_32->rtlhal.bandset = VAR_0;
 VAR_32->rtlhal.macphymode = VAR_28;

 VAR_33->receive_config = (VAR_23 |
      VAR_25 |
      VAR_24 |
      VAR_26 |
      VAR_27 |
      VAR_21 |
      VAR_18 |
      VAR_19 |
      VAR_17 |
      VAR_20 |
      VAR_22 |
      0);

 VAR_33->irq_mask[0] = (u32)(VAR_11 |
         VAR_8 |
         VAR_9 |
         VAR_10 |
         VAR_7 |
         VAR_6 |
         VAR_15 |
         VAR_16 |
         VAR_12 |
         VAR_13 |
         0);
 VAR_33->irq_mask[1] = (u32)(VAR_14 | 0);


 VAR_32->psc.inactiveps = VAR_32->cfg->mod_params->inactiveps;
 VAR_32->psc.swctrl_lps = VAR_32->cfg->mod_params->swctrl_lps;
 VAR_32->psc.fwctrl_lps = VAR_32->cfg->mod_params->fwctrl_lps;
 VAR_33->msi_support = VAR_32->cfg->mod_params->msi_support;
 if (VAR_32->cfg->mod_params->disable_watchdog)
  FUNC_2("watchdog disabled\n");
 VAR_32->psc.reg_fwctrl_lps = 3;
 VAR_32->psc.reg_max_lps_awakeintvl = 5;



 FUNC_5(VAR_31);

 if (VAR_32->psc.reg_fwctrl_lps == 1)
  VAR_32->psc.fwctrl_psmode = VAR_4;
 else if (VAR_32->psc.reg_fwctrl_lps == 2)
  VAR_32->psc.fwctrl_psmode = VAR_3;
 else if (VAR_32->psc.reg_fwctrl_lps == 3)
  VAR_32->psc.fwctrl_psmode = VAR_2;


 VAR_32->rtlhal.earlymode_enable = 0;


 VAR_32->psc.low_power_enable = 0;


 VAR_32->rtlhal.pfirmware = FUNC_11(0x8000);
 if (!VAR_32->rtlhal.pfirmware) {
  FUNC_1("Can't alloc buffer for fw\n");
  return 1;
 }


 VAR_35 = "rtlwifi/rtl8192eefw.bin";

 VAR_32->max_fw_size = 0x8000;
 FUNC_2("Using firmware %s\n", VAR_35);
 VAR_34 = FUNC_3(VAR_29, 1, VAR_35,
          VAR_32->io.dev, VAR_5, VAR_31,
          VAR_30);
 if (VAR_34) {
  FUNC_1("Failed to request firmware!\n");
  FUNC_10(VAR_32->rtlhal.pfirmware);
  VAR_32->rtlhal.pfirmware = ((void*)0);
  return 1;
 }

 return 0;
}
