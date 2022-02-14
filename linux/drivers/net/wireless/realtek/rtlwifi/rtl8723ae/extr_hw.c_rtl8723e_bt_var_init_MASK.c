
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ bt_ant_num; scalar_t__ eeprom_bt_ant_num; int bt_coexist_type; int eeprom_bt_type; int bt_busy_traffic; int bt_traffic_mode_set; int bt_non_traffic_mode_set; int cur_bt_disabled; int pre_bt_disabled; scalar_t__ bt_active_zero_cnt; scalar_t__ bt_radio_shared_type; scalar_t__ bt_ant_isolation; scalar_t__ previous_state; scalar_t__ cstate; scalar_t__ bt_coexistence; scalar_t__ eeprom_bt_radio_shared; scalar_t__ eeprom_bt_ant_isol; scalar_t__ eeprom_bt_coexist; } ;
struct rtl_priv {TYPE_1__ btcoexist; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;






 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_1(VAR_4);

 VAR_5->btcoexist.bt_coexistence =
  VAR_5->btcoexist.eeprom_bt_coexist;
 VAR_5->btcoexist.bt_ant_num =
  VAR_5->btcoexist.eeprom_bt_ant_num;
 VAR_5->btcoexist.bt_coexist_type =
  VAR_5->btcoexist.eeprom_bt_type;

 VAR_5->btcoexist.bt_ant_isolation =
  VAR_5->btcoexist.eeprom_bt_ant_isol;

 VAR_5->btcoexist.bt_radio_shared_type =
  VAR_5->btcoexist.eeprom_bt_radio_shared;

 FUNC_0(VAR_5, VAR_2, VAR_3,
   "BT Coexistence = 0x%x\n",
   VAR_5->btcoexist.bt_coexistence);

 if (VAR_5->btcoexist.bt_coexistence) {
  VAR_5->btcoexist.bt_busy_traffic = 0;
  VAR_5->btcoexist.bt_traffic_mode_set = 0;
  VAR_5->btcoexist.bt_non_traffic_mode_set = 0;

  VAR_5->btcoexist.cstate = 0;
  VAR_5->btcoexist.previous_state = 0;

  if (VAR_5->btcoexist.bt_ant_num == VAR_1) {
   FUNC_0(VAR_5, VAR_2, VAR_3,
     "BlueTooth BT_Ant_Num = Antx2\n");
  } else if (VAR_5->btcoexist.bt_ant_num == VAR_0) {
   FUNC_0(VAR_5, VAR_2, VAR_3,
     "BlueTooth BT_Ant_Num = Antx1\n");
  }
  switch (VAR_5->btcoexist.bt_coexist_type) {
  case 133:
   FUNC_0(VAR_5, VAR_2, VAR_3,
     "BlueTooth BT_CoexistType = BT_2Wire\n");
   break;
  case 129:
   FUNC_0(VAR_5, VAR_2, VAR_3,
     "BlueTooth BT_CoexistType = BT_ISSC_3Wire\n");
   break;
  case 132:
   FUNC_0(VAR_5, VAR_2, VAR_3,
     "BlueTooth BT_CoexistType = BT_ACCEL\n");
   break;
  case 131:
   FUNC_0(VAR_5, VAR_2, VAR_3,
     "BlueTooth BT_CoexistType = BT_CSR_BC4\n");
   break;
  case 130:
   FUNC_0(VAR_5, VAR_2, VAR_3,
     "BlueTooth BT_CoexistType = BT_CSR_BC8\n");
   break;
  case 128:
   FUNC_0(VAR_5, VAR_2, VAR_3,
     "BlueTooth BT_CoexistType = BT_RTL8756\n");
   break;
  default:
   FUNC_0(VAR_5, VAR_2, VAR_3,
     "BlueTooth BT_CoexistType = Unknown\n");
   break;
  }
  FUNC_0(VAR_5, VAR_2, VAR_3,
    "BlueTooth BT_Ant_isolation = %d\n",
    VAR_5->btcoexist.bt_ant_isolation);
  FUNC_0(VAR_5, VAR_2, VAR_3,
    "BT_RadioSharedType = 0x%x\n",
    VAR_5->btcoexist.bt_radio_shared_type);
  VAR_5->btcoexist.bt_active_zero_cnt = 0;
  VAR_5->btcoexist.cur_bt_disabled = 0;
  VAR_5->btcoexist.pre_bt_disabled = 0;
 }
}
