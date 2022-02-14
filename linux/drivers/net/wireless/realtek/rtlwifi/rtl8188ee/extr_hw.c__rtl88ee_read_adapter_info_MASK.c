
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ eeprom_bt_coexist; scalar_t__ eeprom_bt_ant_num; } ;
struct rtl_priv {TYPE_1__ btcoexist; } ;
struct rtl_hal {int board_type; scalar_t__ oem_id; } ;
struct rtl_efuse {int eeprom_oemid; int txpwr_fromeprom; int board_type; int wowlan_enable; int crystalcap; int antenna_div_cfg; int antenna_div_type; int eeprom_did; int eeprom_svid; int eeprom_smid; int autoload_failflag; int eeprom_channelplan; int channel_plan; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 size_t VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int) ;
 int FUNC_1 (struct ieee80211_hw*,int ,int*) ;
 int FUNC_2 (int*) ;
 int* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct ieee80211_hw*,int ,int*) ;
 struct rtl_efuse* FUNC_5 (struct rtl_priv*) ;
 scalar_t__ FUNC_6 (struct ieee80211_hw*,struct rtl_priv*,int ,int*,int*) ;
 struct rtl_hal* FUNC_7 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_8 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_9(struct ieee80211_hw *VAR_27)
{
 struct rtl_priv *VAR_28 = FUNC_8(VAR_27);
 struct rtl_efuse *VAR_29 = FUNC_5(FUNC_8(VAR_27));
 struct rtl_hal *VAR_30 = FUNC_7(FUNC_8(VAR_27));
 int VAR_31[] = {VAR_20, VAR_16, VAR_8,
   VAR_14, VAR_13, VAR_9,
   VAR_6, VAR_15, VAR_7,
   VAR_4};
 u8 *VAR_32;

 VAR_32 = FUNC_3(VAR_19, VAR_18);
 if (!VAR_32)
  return;

 if (FUNC_6(VAR_27, VAR_28, VAR_19, VAR_32, VAR_31))
  goto exit;

 if (VAR_29->eeprom_oemid == 0xFF)
  VAR_29->eeprom_oemid = 0;

 FUNC_0(VAR_28, VAR_3, VAR_5,
   "EEPROM Customer ID: 0x%2x\n", VAR_29->eeprom_oemid);

 VAR_29->channel_plan = VAR_29->eeprom_channelplan;

 FUNC_1(VAR_27,
          VAR_29->autoload_failflag,
          VAR_32);
 VAR_29->txpwr_fromeprom = 1;

 FUNC_4(VAR_27,
       VAR_29->autoload_failflag,
       VAR_32);


 VAR_29->board_type =
  ((VAR_32[VAR_11] & 0xE0) >> 5);
 VAR_30->board_type = VAR_29->board_type;

 VAR_29->wowlan_enable =
  ((VAR_32[VAR_12] & 0x40) >> 6);

 VAR_29->crystalcap = VAR_32[VAR_17];
 if (VAR_32[VAR_17])
  VAR_29->crystalcap = 0x20;

 VAR_29->antenna_div_cfg =
  (VAR_32[VAR_11] & 0x18) >> 3;
 if (VAR_32[VAR_11] == 0xFF)
  VAR_29->antenna_div_cfg = 0;
 if (VAR_28->btcoexist.eeprom_bt_coexist != 0 &&
     VAR_28->btcoexist.eeprom_bt_ant_num == VAR_0)
  VAR_29->antenna_div_cfg = 0;

 VAR_29->antenna_div_type = VAR_32[VAR_10];
 if (VAR_29->antenna_div_type == 0xFF)
  VAR_29->antenna_div_type = 0x01;
 if (VAR_29->antenna_div_type == VAR_2 ||
  VAR_29->antenna_div_type == VAR_1)
  VAR_29->antenna_div_cfg = 1;

 if (VAR_30->oem_id == VAR_25) {
  switch (VAR_29->eeprom_oemid) {
  case 131:
   if (VAR_29->eeprom_did == 0x8179) {
    if (VAR_29->eeprom_svid == 0x1025) {
     VAR_30->oem_id = VAR_21;
    } else if ((VAR_29->eeprom_svid == 0x10EC &&
         VAR_29->eeprom_smid == 0x0179) ||
         (VAR_29->eeprom_svid == 0x17AA &&
         VAR_29->eeprom_smid == 0x0179)) {
     VAR_30->oem_id = VAR_23;
    } else if (VAR_29->eeprom_svid == 0x103c &&
        VAR_29->eeprom_smid == 0x197d) {
     VAR_30->oem_id = VAR_22;
    } else {
     VAR_30->oem_id = VAR_25;
    }
   } else {
    VAR_30->oem_id = VAR_25;
   }
   break;
  case 129:
   VAR_30->oem_id = VAR_26;
   break;
  case 130:
   VAR_30->oem_id = VAR_24;
   break;
  case 128:
  default:
   VAR_30->oem_id = VAR_25;
   break;

  }
 }
exit:
 FUNC_2(VAR_32);
}
