
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int eeprom_bt_coexist; int eeprom_bt_type; int eeprom_bt_ant_num; int eeprom_bt_ant_isol; int eeprom_bt_radio_shared; } ;
struct rtl_priv {TYPE_1__ btcoexist; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;

void FUNC_2(struct ieee80211_hw *VAR_5,
           bool VAR_6, u8 *VAR_7)
{
 struct rtl_priv *VAR_8 = FUNC_1(VAR_5);
 u8 VAR_9;

 if (!VAR_6) {
  VAR_8->btcoexist.eeprom_bt_coexist =
     ((VAR_7[VAR_3] & 0xe0) >> 5);
  VAR_9 = VAR_7[VAR_4];
  VAR_8->btcoexist.eeprom_bt_type = ((VAR_9 & 0xe) >> 1);
  VAR_8->btcoexist.eeprom_bt_ant_num = (VAR_9 & 0x1);
  VAR_8->btcoexist.eeprom_bt_ant_isol = ((VAR_9 & 0x10) >> 4);
  VAR_8->btcoexist.eeprom_bt_radio_shared =
        ((VAR_9 & 0x20) >> 5);
 } else {
  VAR_8->btcoexist.eeprom_bt_coexist = 0;
  VAR_8->btcoexist.eeprom_bt_type = VAR_1;
  VAR_8->btcoexist.eeprom_bt_ant_num = VAR_0;
  VAR_8->btcoexist.eeprom_bt_ant_isol = 0;
  VAR_8->btcoexist.eeprom_bt_radio_shared = VAR_2;
 }

 FUNC_0(VAR_5);
}
