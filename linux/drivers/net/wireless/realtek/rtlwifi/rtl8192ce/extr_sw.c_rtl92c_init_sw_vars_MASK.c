
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_12__ {int * pfirmware; int macphymode; void* bandset; void* current_bandtype; } ;
struct TYPE_11__ {int dev; } ;
struct TYPE_10__ {int reg_fwctrl_lps; int reg_max_lps_awakeintvl; int fwctrl_psmode; int fwctrl_lps; int inactiveps; int swctrl_lps; } ;
struct TYPE_7__ {int dm_initialgain_enable; int disable_framebursting; scalar_t__ thermalvalue; scalar_t__ dm_flag; } ;
struct rtl_priv {int max_fw_size; TYPE_6__ rtlhal; TYPE_5__ io; TYPE_4__ psc; TYPE_3__* cfg; TYPE_1__ dm; } ;
struct rtl_pci {int transmit_config; int receive_config; void** irq_mask; } ;
struct rtl_hal {int version; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_9__ {TYPE_2__* mod_params; } ;
struct TYPE_8__ {int fwctrl_lps; int swctrl_lps; int inactiveps; } ;


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
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
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
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int ,int,char*,int ,int ,struct ieee80211_hw*,int ) ;
 int FUNC_7 (struct ieee80211_hw*) ;
 int FUNC_8 (struct ieee80211_hw*) ;
 int VAR_32 ;
 struct rtl_hal* FUNC_9 (struct rtl_priv*) ;
 struct rtl_pci* FUNC_10 (int ) ;
 int FUNC_11 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_12 (struct ieee80211_hw*) ;
 int FUNC_13 (int *) ;
 int * FUNC_14 (int) ;

int FUNC_15(struct ieee80211_hw *VAR_33)
{
 int VAR_34;
 struct rtl_priv *VAR_35 = FUNC_12(VAR_33);
 struct rtl_pci *VAR_36 = FUNC_10(FUNC_11(VAR_33));
 struct rtl_hal *VAR_37 = FUNC_9(FUNC_12(VAR_33));
 char *VAR_38;

 FUNC_7(VAR_33);

 VAR_35->dm.dm_initialgain_enable = 1;
 VAR_35->dm.dm_flag = 0;
 VAR_35->dm.disable_framebursting = 0;
 VAR_35->dm.thermalvalue = 0;
 VAR_36->transmit_config = VAR_1 | FUNC_0(12) | FUNC_0(13);


 VAR_35->rtlhal.current_bandtype = VAR_0;
 VAR_35->rtlhal.bandset = VAR_0;
 VAR_35->rtlhal.macphymode = VAR_30;

 VAR_36->receive_config = (VAR_25 |
      VAR_23 |
      VAR_20 |
      VAR_27 |
      VAR_26 |
      VAR_21 |
      VAR_19 |
      VAR_18 |
      VAR_22 |
      VAR_24 |
      VAR_28 | VAR_29 | 0);

 VAR_36->irq_mask[0] =
     (u32) (VAR_14 |
     VAR_17 |
     VAR_16 |
     VAR_7 |
     VAR_8 |
     VAR_12 |
     VAR_11 | VAR_6 | VAR_13 | VAR_15 | 0);

 VAR_36->irq_mask[1] = (u32) (VAR_10 | VAR_9 | 0);


 VAR_35->psc.inactiveps = VAR_35->cfg->mod_params->inactiveps;
 VAR_35->psc.swctrl_lps = VAR_35->cfg->mod_params->swctrl_lps;
 VAR_35->psc.fwctrl_lps = VAR_35->cfg->mod_params->fwctrl_lps;
 if (!VAR_35->psc.inactiveps)
  FUNC_5("rtl8192ce: Power Save off (module option)\n");
 if (!VAR_35->psc.fwctrl_lps)
  FUNC_5("rtl8192ce: FW Power Save off (module option)\n");
 VAR_35->psc.reg_fwctrl_lps = 3;
 VAR_35->psc.reg_max_lps_awakeintvl = 5;


 FUNC_8(VAR_33);

 if (VAR_35->psc.reg_fwctrl_lps == 1)
  VAR_35->psc.fwctrl_psmode = VAR_4;
 else if (VAR_35->psc.reg_fwctrl_lps == 2)
  VAR_35->psc.fwctrl_psmode = VAR_3;
 else if (VAR_35->psc.reg_fwctrl_lps == 3)
  VAR_35->psc.fwctrl_psmode = VAR_2;


 VAR_35->rtlhal.pfirmware = FUNC_14(0x4000);
 if (!VAR_35->rtlhal.pfirmware) {
  FUNC_4("Can't alloc buffer for fw\n");
  return 1;
 }


 if (FUNC_3(VAR_37->version) &&
     !FUNC_2(VAR_37->version))
  VAR_38 = "rtlwifi/rtl8192cfwU.bin";
 else if (FUNC_1(VAR_37->version))
  VAR_38 = "rtlwifi/rtl8192cfwU_B.bin";
 else
  VAR_38 = "rtlwifi/rtl8192cfw.bin";

 VAR_35->max_fw_size = 0x4000;
 FUNC_5("Using firmware %s\n", VAR_38);
 VAR_34 = FUNC_6(VAR_31, 1, VAR_38,
          VAR_35->io.dev, VAR_5, VAR_33,
          VAR_32);
 if (VAR_34) {
  FUNC_4("Failed to request firmware!\n");
  FUNC_13(VAR_35->rtlhal.pfirmware);
  VAR_35->rtlhal.pfirmware = ((void*)0);
  return 1;
 }

 return 0;
}
