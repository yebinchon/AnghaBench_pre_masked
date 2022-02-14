
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reg_bt_iso; int bt_ant_isolation; int eeprom_bt_ant_isol; int reg_bt_sco; int bt_rssi_state; scalar_t__ bt_edca_dl; scalar_t__ bt_edca_ul; int bt_service; scalar_t__ bt_coexistence; int eeprom_bt_radio_shared; int bt_radio_shared_type; int eeprom_bt_type; int bt_coexist_type; int eeprom_bt_ant_num; int bt_ant_num; scalar_t__ eeprom_bt_coexist; } ;
struct rtl_priv {TYPE_1__ btcoexist; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct rtl_priv* FUNC_0 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_1(struct ieee80211_hw *VAR_5)
{
 struct rtl_priv *VAR_6 = FUNC_0(VAR_5);

 VAR_6->btcoexist.bt_coexistence =
  VAR_6->btcoexist.eeprom_bt_coexist;
 VAR_6->btcoexist.bt_ant_num = VAR_6->btcoexist.eeprom_bt_ant_num;
 VAR_6->btcoexist.bt_coexist_type = VAR_6->btcoexist.eeprom_bt_type;

 if (VAR_6->btcoexist.reg_bt_iso == 2)
  VAR_6->btcoexist.bt_ant_isolation =
    VAR_6->btcoexist.eeprom_bt_ant_isol;
 else
  VAR_6->btcoexist.bt_ant_isolation =
    VAR_6->btcoexist.reg_bt_iso;

 VAR_6->btcoexist.bt_radio_shared_type =
  VAR_6->btcoexist.eeprom_bt_radio_shared;

 if (VAR_6->btcoexist.bt_coexistence) {
  if (VAR_6->btcoexist.reg_bt_sco == 1)
   VAR_6->btcoexist.bt_service = VAR_3;
  else if (VAR_6->btcoexist.reg_bt_sco == 2)
   VAR_6->btcoexist.bt_service = VAR_4;
  else if (VAR_6->btcoexist.reg_bt_sco == 4)
   VAR_6->btcoexist.bt_service = VAR_0;
  else if (VAR_6->btcoexist.reg_bt_sco == 5)
   VAR_6->btcoexist.bt_service = VAR_2;
  else
   VAR_6->btcoexist.bt_service = VAR_1;

  VAR_6->btcoexist.bt_edca_ul = 0;
  VAR_6->btcoexist.bt_edca_dl = 0;
  VAR_6->btcoexist.bt_rssi_state = 0xff;
 }
}
