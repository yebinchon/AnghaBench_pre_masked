
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
typedef int u16 ;
struct TYPE_12__ {int * pfirmware; int macphymode; void* bandset; void* current_bandtype; } ;
struct TYPE_11__ {int dev; } ;
struct TYPE_10__ {int reg_fwctrl_lps; int reg_max_lps_awakeintvl; int fwctrl_psmode; int fwctrl_lps; int inactiveps; int swctrl_lps; } ;
struct TYPE_7__ {int dm_initialgain_enable; int disable_framebursting; int useramask; scalar_t__ thermalvalue; scalar_t__ dm_flag; } ;
struct rtl_priv {int max_fw_size; TYPE_6__ rtlhal; TYPE_5__ io; TYPE_4__ psc; TYPE_3__* cfg; TYPE_1__ dm; } ;
struct rtl_pci {int receive_config; int shortretry_limit; int longretry_limit; int first_init; void** irq_mask; scalar_t__ transmit_config; } ;
struct rt_firmware {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
struct fw_hdr {int dummy; } ;
struct TYPE_9__ {TYPE_2__* mod_params; } ;
struct TYPE_8__ {int fwctrl_lps; int swctrl_lps; int inactiveps; } ;


 void* VAR_0 ;
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
 int VAR_35 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ,int,char*,int ,int ,struct ieee80211_hw*,int ) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 int VAR_36 ;
 struct rtl_pci* FUNC_4 (int ) ;
 int FUNC_5 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_6 (struct ieee80211_hw*) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct ieee80211_hw *VAR_37)
{
 struct rtl_priv *VAR_38 = FUNC_6(VAR_37);
 struct rtl_pci *VAR_39 = FUNC_4(FUNC_5(VAR_37));
 int VAR_40 = 0;
 u16 VAR_41 = 7;
 char *VAR_42 = "rtlwifi/rtl8192sefw.bin";

 VAR_38->dm.dm_initialgain_enable = 1;
 VAR_38->dm.dm_flag = 0;
 VAR_38->dm.disable_framebursting = 0;
 VAR_38->dm.thermalvalue = 0;
 VAR_38->dm.useramask = 1;


 VAR_38->rtlhal.current_bandtype = VAR_0;
 VAR_38->rtlhal.bandset = VAR_0;
 VAR_38->rtlhal.macphymode = VAR_34;

 VAR_39->transmit_config = 0;

 VAR_39->receive_config =
   VAR_26 |
   VAR_31 |

   VAR_24 |
   VAR_21 |
   VAR_28 |
   VAR_27 |
   VAR_22 |

   VAR_20 |
   VAR_19 |

   VAR_23 |

   VAR_25 |


   VAR_30 |

   VAR_29 |
   (VAR_41 << VAR_32);

 VAR_39->irq_mask[0] = (u32)
   (VAR_14 |
   VAR_18 |
   VAR_17 |
   VAR_7 |
   VAR_8 |
   VAR_10 |
   VAR_12 |
   VAR_9 |
   VAR_11 |
   VAR_6 |
   VAR_15 |

   VAR_13 |
   VAR_16 |
   VAR_5


              );

 VAR_39->irq_mask[1] = (u32) 0;

 VAR_39->shortretry_limit = 0x30;
 VAR_39->longretry_limit = 0x30;

 VAR_39->first_init = 1;


 VAR_38->psc.inactiveps = VAR_38->cfg->mod_params->inactiveps;
 VAR_38->psc.swctrl_lps = VAR_38->cfg->mod_params->swctrl_lps;
 VAR_38->psc.fwctrl_lps = VAR_38->cfg->mod_params->fwctrl_lps;
 if (!VAR_38->psc.inactiveps)
  FUNC_1("Power Save off (module option)\n");
 if (!VAR_38->psc.fwctrl_lps)
  FUNC_1("FW Power Save off (module option)\n");
 VAR_38->psc.reg_fwctrl_lps = 3;
 VAR_38->psc.reg_max_lps_awakeintvl = 5;


 FUNC_3(VAR_37);

 if (VAR_38->psc.reg_fwctrl_lps == 1)
  VAR_38->psc.fwctrl_psmode = VAR_3;
 else if (VAR_38->psc.reg_fwctrl_lps == 2)
  VAR_38->psc.fwctrl_psmode = VAR_2;
 else if (VAR_38->psc.reg_fwctrl_lps == 3)
  VAR_38->psc.fwctrl_psmode = VAR_1;


 VAR_38->rtlhal.pfirmware = FUNC_8(sizeof(struct rt_firmware));
 if (!VAR_38->rtlhal.pfirmware)
  return 1;

 VAR_38->max_fw_size = VAR_33*2 +
          sizeof(struct fw_hdr);
 FUNC_1("Driver for Realtek RTL8192SE/RTL8191SE\n"
  "Loading firmware %s\n", VAR_42);

 VAR_40 = FUNC_2(VAR_35, 1, VAR_42,
          VAR_38->io.dev, VAR_4, VAR_37,
          VAR_36);
 if (VAR_40) {
  FUNC_0("Failed to request firmware!\n");
  FUNC_7(VAR_38->rtlhal.pfirmware);
  VAR_38->rtlhal.pfirmware = ((void*)0);
  return 1;
 }

 return VAR_40;
}
