
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
struct TYPE_16__ {scalar_t__ current_bandtype; scalar_t__ macphymode; int disable_amsdu_8k; int earlymode_enable; int * pfirmware; } ;
struct TYPE_15__ {int dev; } ;
struct TYPE_14__ {int * skb_waitq; } ;
struct TYPE_13__ {int reg_fwctrl_lps; int reg_max_lps_awakeintvl; int fwctrl_psmode; int fwctrl_lps; int inactiveps; int swctrl_lps; } ;
struct TYPE_10__ {int current_channel; } ;
struct TYPE_9__ {int dm_initialgain_enable; int disable_framebursting; int useramask; scalar_t__ thermalvalue; scalar_t__ dm_flag; } ;
struct rtl_priv {int max_fw_size; TYPE_8__ rtlhal; TYPE_7__ io; TYPE_6__ mac80211; TYPE_5__ psc; TYPE_4__* cfg; TYPE_2__ phy; TYPE_1__ dm; } ;
struct rtl_pci {int rxbuffersize; int transmit_config; int receive_config; void** irq_mask; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_12__ {TYPE_3__* mod_params; } ;
struct TYPE_11__ {int fwctrl_lps; int swctrl_lps; int inactiveps; } ;


 scalar_t__ VAR_0 ;
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
 scalar_t__ VAR_30 ;
 int VAR_31 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ,int,char*,int ,int ,struct ieee80211_hw*,int ) ;
 int FUNC_4 (struct ieee80211_hw*) ;
 int VAR_32 ;
 struct rtl_pci* FUNC_5 (int ) ;
 int FUNC_6 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_7 (struct ieee80211_hw*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct ieee80211_hw *VAR_33)
{
 int VAR_34;
 u8 VAR_35;
 struct rtl_priv *VAR_36 = FUNC_7(VAR_33);
 struct rtl_pci *VAR_37 = FUNC_5(FUNC_6(VAR_33));
 char *VAR_38 = "rtlwifi/rtl8192defw.bin";

 VAR_36->dm.dm_initialgain_enable = 1;
 VAR_36->dm.dm_flag = 0;
 VAR_36->dm.disable_framebursting = 0;
 VAR_36->dm.thermalvalue = 0;
 VAR_36->dm.useramask = 1;


 if (VAR_36->rtlhal.current_bandtype == VAR_0)
  VAR_36->phy.current_channel = 36;
 else
  VAR_36->phy.current_channel = 1;

 if (VAR_36->rtlhal.macphymode != VAR_30) {
  VAR_36->rtlhal.disable_amsdu_8k = 1;

  VAR_37->rxbuffersize = 4096;
 }

 VAR_37->transmit_config = VAR_1 | FUNC_0(12) | FUNC_0(13);

 VAR_37->receive_config = (
   VAR_25
   | VAR_23
   | VAR_20
   | VAR_27
   | VAR_26
   | VAR_21
   | VAR_19
   | VAR_18
   | VAR_22
   | VAR_24
   | VAR_28
   | VAR_29
 );

 VAR_37->irq_mask[0] = (u32) (
   VAR_14
   | VAR_17
   | VAR_16
   | VAR_7
   | VAR_8
   | VAR_12
   | VAR_11
   | VAR_6
   | VAR_13
   | VAR_15
 );

 VAR_37->irq_mask[1] = (u32) (VAR_10 | VAR_9);


 VAR_36->psc.inactiveps = VAR_36->cfg->mod_params->inactiveps;
 VAR_36->psc.swctrl_lps = VAR_36->cfg->mod_params->swctrl_lps;
 VAR_36->psc.fwctrl_lps = VAR_36->cfg->mod_params->fwctrl_lps;
 if (!VAR_36->psc.inactiveps)
  FUNC_2("Power Save off (module option)\n");
 if (!VAR_36->psc.fwctrl_lps)
  FUNC_2("FW Power Save off (module option)\n");
 VAR_36->psc.reg_fwctrl_lps = 3;
 VAR_36->psc.reg_max_lps_awakeintvl = 5;


 FUNC_4(VAR_33);

 if (VAR_36->psc.reg_fwctrl_lps == 1)
  VAR_36->psc.fwctrl_psmode = VAR_4;
 else if (VAR_36->psc.reg_fwctrl_lps == 2)
  VAR_36->psc.fwctrl_psmode = VAR_3;
 else if (VAR_36->psc.reg_fwctrl_lps == 3)
  VAR_36->psc.fwctrl_psmode = VAR_2;


 VAR_36->rtlhal.earlymode_enable = 0;
 for (VAR_35 = 0; VAR_35 < 8; VAR_35++)
  FUNC_8(&VAR_36->mac80211.skb_waitq[VAR_35]);


 VAR_36->rtlhal.pfirmware = FUNC_10(0x8000);
 if (!VAR_36->rtlhal.pfirmware) {
  FUNC_1("Can't alloc buffer for fw\n");
  return 1;
 }

 VAR_36->max_fw_size = 0x8000;
 FUNC_2("Driver for Realtek RTL8192DE WLAN interface\n");
 FUNC_2("Loading firmware file %s\n", VAR_38);


 VAR_34 = FUNC_3(VAR_31, 1, VAR_38,
          VAR_36->io.dev, VAR_5, VAR_33,
          VAR_32);
 if (VAR_34) {
  FUNC_1("Failed to request firmware!\n");
  FUNC_9(VAR_36->rtlhal.pfirmware);
  VAR_36->rtlhal.pfirmware = ((void*)0);
  return 1;
 }

 return 0;
}
