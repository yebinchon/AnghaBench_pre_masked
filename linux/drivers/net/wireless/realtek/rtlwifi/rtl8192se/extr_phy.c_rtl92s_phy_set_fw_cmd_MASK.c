
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int dm_flag; int thermalvalue; int dynamic_txpower_enable; } ;
struct dig_t {int dig_ext_port_stage; int dig_enable_flag; } ;
struct rtl_priv {TYPE_1__ dm; struct dig_t dm_digtable; } ;
struct rtl_hal {int set_fwcmd_inprogress; int current_fwcmd_io; } ;
struct rtl_efuse {int* thermalmeter; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum fwcmd_iotype { ____Placeholder_fwcmd_iotype } fwcmd_iotype ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rtl_priv*,int) ;
 int FUNC_1 (struct rtl_priv*) ;
 int FUNC_2 (struct rtl_priv*) ;
 int FUNC_3 (struct rtl_priv*,int) ;


 int FUNC_4 (struct rtl_priv*,int) ;
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
 int FUNC_5 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_6 (struct ieee80211_hw*) ;
 int FUNC_7 (struct rtl_priv*) ;
 struct rtl_efuse* FUNC_8 (struct rtl_priv*) ;
 struct rtl_hal* FUNC_9 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_10 (struct ieee80211_hw*) ;

bool FUNC_11(struct ieee80211_hw *VAR_20, enum fwcmd_iotype VAR_21)
{
 struct rtl_priv *VAR_22 = FUNC_10(VAR_20);
 struct dig_t *VAR_23 = &VAR_22->dm_digtable;
 struct rtl_hal *VAR_24 = FUNC_9(FUNC_10(VAR_20));
 struct rtl_efuse *VAR_25 = FUNC_8(FUNC_10(VAR_20));
 u32 VAR_26 = FUNC_1(VAR_22);
 u16 VAR_27 = FUNC_2(VAR_22);
 bool VAR_28 = 0;

 FUNC_5(VAR_22, VAR_0, VAR_1,
   "Set FW Cmd(%#x), set_fwcmd_inprogress(%d)\n",
   VAR_21, VAR_24->set_fwcmd_inprogress);

 do {


  if (FUNC_7(VAR_22) >= 0x35) {
   switch (VAR_21) {
   case 131:
    VAR_21 = 130;
    break;
   case 133:
    VAR_21 = 132;
    break;
   default:
    break;
   }
  } else {
   if ((VAR_21 == 137) ||
       (VAR_21 == 131) ||
       (VAR_21 == 133)) {
    VAR_28 = 1;
    break;
   }
  }



  if (FUNC_7(VAR_22) >= 0x3E) {
   if (VAR_21 == VAR_4)
    VAR_21 = 146;
  }




  switch (VAR_21) {
  case 134:
   FUNC_5(VAR_22, VAR_0, VAR_1, "RA init!!\n");
   VAR_27 |= VAR_14;
   FUNC_3(VAR_22, VAR_27);

   FUNC_0(VAR_22, VAR_14);
   break;
  case 145:
   FUNC_5(VAR_22, VAR_0, VAR_1,
     "Set DIG disable!!\n");
   VAR_27 &= ~VAR_5;
   FUNC_3(VAR_22, VAR_27);
   break;
  case 144:
  case 140:
   if (!(VAR_22->dm.dm_flag & VAR_18)) {
    FUNC_5(VAR_22, VAR_0, VAR_1,
      "Set DIG enable or resume!!\n");
    VAR_27 |= (VAR_5 | VAR_17);
    FUNC_3(VAR_22, VAR_27);
   }
   break;
  case 143:
   FUNC_5(VAR_22, VAR_0, VAR_1,
     "Set DIG halt!!\n");
   VAR_27 &= ~(VAR_5 | VAR_17);
   FUNC_3(VAR_22, VAR_27);
   break;
  case 128: {
   u8 VAR_29 = 0;
   VAR_27 |= VAR_11;


   VAR_26 &= VAR_12;

   VAR_29 = VAR_22->dm.thermalvalue;
   VAR_26 |= ((VAR_29 << 24) |
         (VAR_25->thermalmeter[0] << 16));

   FUNC_5(VAR_22, VAR_0, VAR_1,
     "Set TxPwr tracking!! FwCmdMap(%#x), FwParam(%#x)\n",
     VAR_27, VAR_26);

   FUNC_4(VAR_22, VAR_26);
   FUNC_3(VAR_22, VAR_27);


   FUNC_0(VAR_22, VAR_11);
   }
   break;


  case 130:
   VAR_27 |= VAR_15;


   VAR_27 &= ~(VAR_13 | VAR_14);


   VAR_26 &= VAR_16;

   FUNC_5(VAR_22, VAR_0, VAR_1,
     "[FW CMD] [New Version] Set RA/IOT Comb in n mode!! FwCmdMap(%#x), FwParam(%#x)\n",
     VAR_27, VAR_26);

   FUNC_4(VAR_22, VAR_26);
   FUNC_3(VAR_22, VAR_27);


   FUNC_0(VAR_22, VAR_15);
   break;
  case 132:
   VAR_27 |= VAR_13;


   VAR_27 &= ~(VAR_15 | VAR_14);

   VAR_26 &= VAR_16;

   FUNC_4(VAR_22, VAR_26);
   FUNC_3(VAR_22, VAR_27);


   FUNC_0(VAR_22, VAR_13);
   break;
  case 137:
   VAR_27 |= VAR_9;
   FUNC_3(VAR_22, VAR_27);

   FUNC_0(VAR_22, VAR_9);
   break;

  case 146:
   VAR_27 |= VAR_6;
   FUNC_3(VAR_22, VAR_27);
   break;

  case 129:
   VAR_27 |= (VAR_5 |
          VAR_8 |
          VAR_17);

   if (VAR_22->dm.dm_flag & VAR_18 ||
    !VAR_23->dig_enable_flag)
    VAR_27 &= ~VAR_5;

   if ((VAR_22->dm.dm_flag & VAR_19) ||
       VAR_22->dm.dynamic_txpower_enable)
    VAR_27 &= ~VAR_8;

   if ((VAR_23->dig_ext_port_stage ==
       VAR_2) ||
       (VAR_23->dig_ext_port_stage ==
       VAR_3))
    VAR_27 &= ~VAR_5;

   FUNC_3(VAR_22, VAR_27);
   VAR_28 = 1;
   break;
  case 135:
   VAR_27 &= ~(VAR_5 |
           VAR_8 |
           VAR_17);
   FUNC_3(VAR_22, VAR_27);
   VAR_28 = 1;
   break;
  case 139:
   VAR_27 &= ~VAR_8;
   FUNC_3(VAR_22, VAR_27);
   VAR_28 = 1;
   break;
  case 138:
   if (!(VAR_22->dm.dm_flag & VAR_19) &&
       !VAR_22->dm.dynamic_txpower_enable) {
    VAR_27 |= (VAR_8 |
           VAR_17);
    FUNC_3(VAR_22, VAR_27);
    VAR_28 = 1;
   }
   break;
  case 142:
   VAR_27 |= VAR_7;
   FUNC_3(VAR_22, VAR_27);
   break;
  case 141:
   VAR_27 &= ~VAR_7;
   FUNC_3(VAR_22, VAR_27);
   break;
  case 136:
   FUNC_5(VAR_22, VAR_0, VAR_1,
     "[FW CMD] Set PAPE Control\n");
   VAR_27 &= ~VAR_10;

   FUNC_3(VAR_22, VAR_27);
   break;
  default:


   VAR_28 = 1;
   break;
  }
 } while (0);




 if (VAR_28 && !VAR_24->set_fwcmd_inprogress) {
  VAR_24->set_fwcmd_inprogress = 1;

  VAR_24->current_fwcmd_io = VAR_21;
 } else {
  return 0;
 }

 FUNC_6(VAR_20);
 return 1;
}
