
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int eeprom_bt_coexist; int eeprom_bt_ant_num; int eeprom_bt_ant_isol; int eeprom_bt_radio_shared; void* eeprom_bt_type; } ;
struct rtl_priv {TYPE_1__ btcoexist; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct rtl_priv*,int ) ;

void FUNC_4(struct ieee80211_hw *VAR_5,
          bool VAR_6, u8 *VAR_7)
{
 struct rtl_priv *VAR_8 = FUNC_2(VAR_5);
 u8 VAR_9;
 u32 VAR_10;

 if (!VAR_6) {
  VAR_10 = FUNC_3(VAR_8, VAR_3);
  if (VAR_10 & FUNC_0(18))
   VAR_8->btcoexist.eeprom_bt_coexist = 1;
  else
   VAR_8->btcoexist.eeprom_bt_coexist = 0;
  VAR_9 = VAR_7[VAR_4];
  VAR_8->btcoexist.eeprom_bt_type = VAR_2;
  VAR_8->btcoexist.eeprom_bt_ant_num = (VAR_9 & 0x1);
  VAR_8->btcoexist.eeprom_bt_ant_isol = ((VAR_9 & 0x10) >> 4);
  VAR_8->btcoexist.eeprom_bt_radio_shared =
    ((VAR_9 & 0x20) >> 5);
 } else {
  VAR_8->btcoexist.eeprom_bt_coexist = 0;
  VAR_8->btcoexist.eeprom_bt_type = VAR_2;
  VAR_8->btcoexist.eeprom_bt_ant_num = VAR_0;
  VAR_8->btcoexist.eeprom_bt_ant_isol = 0;
  VAR_8->btcoexist.eeprom_bt_radio_shared = VAR_1;
 }

 FUNC_1(VAR_5);
}
