
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


typedef int u8 ;
typedef void* u32 ;
struct TYPE_16__ {int fast_antenna_training_timer; int fw_clockoff_timer; } ;
struct TYPE_15__ {int reg_fwctrl_lps; int reg_max_lps_awakeintvl; int low_power_enable; int fwctrl_psmode; int fwctrl_lps; int inactiveps; int swctrl_lps; } ;
struct TYPE_14__ {int * skb_waitq; } ;
struct TYPE_13__ {int earlymode_enable; int max_earlymode_num; int * pfirmware; int macphymode; void* bandset; void* current_bandtype; } ;
struct TYPE_12__ {int dev; } ;
struct TYPE_9__ {int dm_initialgain_enable; scalar_t__ thermalvalue; scalar_t__ disable_framebursting; scalar_t__ dm_flag; } ;
struct rtl_priv {int max_fw_size; TYPE_8__ works; TYPE_7__ psc; TYPE_6__ mac80211; TYPE_5__ rtlhal; TYPE_4__ io; TYPE_3__* cfg; TYPE_1__ dm; } ;
struct rtl_pci {int transmit_config; int receive_config; int msi_support; void* sys_irq_mask; void** irq_mask; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_11__ {TYPE_2__* mod_params; } ;
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
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ,int,char*,int ,int ,struct ieee80211_hw*,int ) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 int VAR_35 ;
 int FUNC_4 (struct ieee80211_hw*) ;
 int VAR_36 ;
 int VAR_37 ;
 struct rtl_pci* FUNC_5 (int ) ;
 int FUNC_6 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_7 (struct ieee80211_hw*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int) ;

int FUNC_12(struct ieee80211_hw *VAR_38)
{
 int VAR_39 = 0;
 struct rtl_priv *VAR_40 = FUNC_7(VAR_38);
 struct rtl_pci *VAR_41 = FUNC_5(FUNC_6(VAR_38));
 u8 VAR_42;
 char *VAR_43;

 FUNC_3(VAR_38);
 VAR_40->dm.dm_initialgain_enable = 1;
 VAR_40->dm.dm_flag = 0;
 VAR_40->dm.disable_framebursting = 0;
 VAR_40->dm.thermalvalue = 0;
 VAR_41->transmit_config = VAR_1 | FUNC_0(15);


 VAR_40->rtlhal.current_bandtype = VAR_0;
 VAR_40->rtlhal.bandset = VAR_0;
 VAR_40->rtlhal.macphymode = VAR_33;

 VAR_41->receive_config = (VAR_28 |
      VAR_30 |
      VAR_29 |
      VAR_31 |
      VAR_32 |
      VAR_26 |
      VAR_21 |
      VAR_23 |
      VAR_24 |
      VAR_22 |
      VAR_20 |
      VAR_25 |
      VAR_27 |
      0);

 VAR_41->irq_mask[0] =
    (u32)(VAR_14 |
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
 VAR_41->irq_mask[1] = (u32) (VAR_17 | 0);
 VAR_41->sys_irq_mask = (u32) (VAR_6 | VAR_7);


 VAR_40->psc.inactiveps = VAR_40->cfg->mod_params->inactiveps;
 VAR_40->psc.swctrl_lps = VAR_40->cfg->mod_params->swctrl_lps;
 VAR_40->psc.fwctrl_lps = VAR_40->cfg->mod_params->fwctrl_lps;
 VAR_41->msi_support = VAR_40->cfg->mod_params->msi_support;
 if (VAR_40->cfg->mod_params->disable_watchdog)
  FUNC_1("watchdog disabled\n");
 if (!VAR_40->psc.inactiveps)
  FUNC_1("rtl8188ee: Power Save off (module option)\n");
 if (!VAR_40->psc.fwctrl_lps)
  FUNC_1("rtl8188ee: FW Power Save off (module option)\n");
 VAR_40->psc.reg_fwctrl_lps = 3;
 VAR_40->psc.reg_max_lps_awakeintvl = 5;



 FUNC_4(VAR_38);

 if (VAR_40->psc.reg_fwctrl_lps == 1)
  VAR_40->psc.fwctrl_psmode = VAR_4;
 else if (VAR_40->psc.reg_fwctrl_lps == 2)
  VAR_40->psc.fwctrl_psmode = VAR_3;
 else if (VAR_40->psc.reg_fwctrl_lps == 3)
  VAR_40->psc.fwctrl_psmode = VAR_2;


 VAR_40->rtlhal.pfirmware = FUNC_11(0x8000);
 if (!VAR_40->rtlhal.pfirmware) {
  FUNC_1("Can't alloc buffer for fw.\n");
  return 1;
 }

 VAR_43 = "rtlwifi/rtl8188efw.bin";
 VAR_40->max_fw_size = 0x8000;
 FUNC_1("Using firmware %s\n", VAR_43);
 VAR_39 = FUNC_2(VAR_34, 1, VAR_43,
          VAR_40->io.dev, VAR_5, VAR_38,
          VAR_37);
 if (VAR_39) {
  FUNC_1("Failed to request firmware!\n");
  FUNC_10(VAR_40->rtlhal.pfirmware);
  VAR_40->rtlhal.pfirmware = ((void*)0);
  return 1;
 }


 VAR_40->rtlhal.earlymode_enable = 0;
 VAR_40->rtlhal.max_earlymode_num = 10;
 for (VAR_42 = 0; VAR_42 < 8; VAR_42++)
  FUNC_8(&VAR_40->mac80211.skb_waitq[VAR_42]);


 VAR_40->psc.low_power_enable = 0;
 if (VAR_40->psc.low_power_enable) {
  FUNC_9(&VAR_40->works.fw_clockoff_timer,
       VAR_36, 0);
 }

 FUNC_9(&VAR_40->works.fast_antenna_training_timer,
      VAR_35, 0);
 return VAR_39;
}
