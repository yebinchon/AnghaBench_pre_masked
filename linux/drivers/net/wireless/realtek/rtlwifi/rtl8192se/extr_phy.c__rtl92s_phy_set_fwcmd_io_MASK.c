
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int assoc_id; } ;
struct TYPE_3__ {int dm_flag; int dynamic_txpower_enable; } ;
struct rtl_phy {int current_channel; } ;
struct rtl_priv {TYPE_2__ mac80211; TYPE_1__ dm; struct rtl_phy phy; } ;
struct rtl_hal {int current_fwcmd_io; int set_fwcmd_inprogress; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
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
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int VAR_21 ;
 int FUNC_1 (struct rtl_priv*) ;
 scalar_t__ FUNC_2 (struct rtl_hal*) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct ieee80211_hw*,int ) ;
 struct rtl_hal* FUNC_5 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_6 (struct ieee80211_hw*) ;
 int FUNC_7 (struct ieee80211_hw*,int ,int ,int) ;
 int FUNC_8 (struct rtl_priv*,int ,int) ;

__attribute__((used)) static void FUNC_9(struct ieee80211_hw *VAR_22)
{
 struct rtl_priv *VAR_23 = FUNC_6(VAR_22);
 struct rtl_hal *VAR_24 = FUNC_5(FUNC_6(VAR_22));
 struct rtl_phy *VAR_25 = &(VAR_23->phy);
 u32 VAR_26, VAR_27 = 0;

 if (FUNC_2(VAR_24))
  return;

 if (FUNC_1(VAR_23) < 0x34)
  goto skip;


 switch (VAR_24->current_fwcmd_io) {
 case 131:
  VAR_24->current_fwcmd_io = 130;
  break;
 case 133:
  VAR_24->current_fwcmd_io = 132;
  break;
 default:
  break;
 }

skip:
 switch (VAR_24->current_fwcmd_io) {
 case 129:
  FUNC_0(VAR_23, VAR_0, VAR_1, "FW_CMD_RA_RESET\n");
  FUNC_8(VAR_23, VAR_21, VAR_14);
  FUNC_3(VAR_22);
  break;
 case 134:
  FUNC_0(VAR_23, VAR_0, VAR_1, "FW_CMD_RA_ACTIVE\n");
  FUNC_8(VAR_23, VAR_21, VAR_8);
  FUNC_3(VAR_22);
  break;
 case 131:
  FUNC_0(VAR_23, VAR_0, VAR_1, "FW_CMD_RA_REFRESH_N\n");
  VAR_26 = VAR_13;
  FUNC_8(VAR_23, VAR_21, VAR_26);
  FUNC_3(VAR_22);
  FUNC_8(VAR_23, VAR_21, VAR_10);
  FUNC_3(VAR_22);
  break;
 case 133:
  FUNC_0(VAR_23, VAR_0, VAR_1,
    "FW_CMD_RA_REFRESH_BG\n");
  FUNC_8(VAR_23, VAR_21, VAR_13);
  FUNC_3(VAR_22);
  FUNC_8(VAR_23, VAR_21, VAR_9);
  FUNC_3(VAR_22);
  break;
 case 130:
  FUNC_0(VAR_23, VAR_0, VAR_1,
    "FW_CMD_RA_REFRESH_N_COMB\n");
  VAR_26 = VAR_12;
  FUNC_8(VAR_23, VAR_21, VAR_26);
  FUNC_3(VAR_22);
  break;
 case 132:
  FUNC_0(VAR_23, VAR_0, VAR_1,
    "FW_CMD_RA_REFRESH_BG_COMB\n");
  VAR_26 = VAR_11;
  FUNC_8(VAR_23, VAR_21, VAR_26);
  FUNC_3(VAR_22);
  break;
 case 138:
  FUNC_0(VAR_23, VAR_0, VAR_1, "FW_CMD_IQK_ENABLE\n");
  FUNC_8(VAR_23, VAR_21, VAR_5);
  FUNC_3(VAR_22);
  break;
 case 135:

  FUNC_7(VAR_22, VAR_19, VAR_16, 0x17);
  FUNC_7(VAR_22, VAR_20, VAR_16, 0x17);

  FUNC_7(VAR_22, VAR_18, VAR_17, 0x40);
  break;
 case 128:

  FUNC_7(VAR_22, VAR_18, VAR_17, 0xcd);
  FUNC_4(VAR_22, VAR_25->current_channel);
  break;
 case 140:
  if (VAR_23->dm.dm_flag & VAR_15)
   break;


  FUNC_7(VAR_22, VAR_19, VAR_16, 0x17);
  FUNC_7(VAR_22, VAR_20, VAR_16, 0x17);

  FUNC_7(VAR_22, VAR_18, VAR_17, 0x40);
  break;
 case 139:
  if ((VAR_23->dm.dm_flag & VAR_15) ||
   VAR_23->dm.dynamic_txpower_enable)
   break;


  FUNC_7(VAR_22, VAR_18, VAR_17, 0xcd);
  break;
 case 137:
  FUNC_0(VAR_23, VAR_0, VAR_1, "FW_CMD_LPS_ENTER\n");
  VAR_27 = VAR_23->mac80211.assoc_id;
  FUNC_8(VAR_23, VAR_21, (VAR_6 |
    ((VAR_27 | 0xc000) << 8)));
  FUNC_3(VAR_22);


  break;
 case 136:
  FUNC_0(VAR_23, VAR_0, VAR_1, "FW_CMD_LPS_LEAVE\n");
  FUNC_8(VAR_23, VAR_21, VAR_7);
  FUNC_3(VAR_22);
  break;
 case 142:
  FUNC_0(VAR_23, VAR_0, VAR_1, "FW_CMD_ADD_A2_ENTRY\n");
  FUNC_8(VAR_23, VAR_21, VAR_3);
  FUNC_3(VAR_22);
  break;
 case 141:
  FUNC_0(VAR_23, VAR_0, VAR_2,
    "FW_CMD_CTRL_DM_BY_DRIVER\n");
  FUNC_8(VAR_23, VAR_21, VAR_4);
  FUNC_3(VAR_22);
  break;

 default:
  break;
 }

 FUNC_3(VAR_22);


 VAR_24->set_fwcmd_inprogress = 0;
}
