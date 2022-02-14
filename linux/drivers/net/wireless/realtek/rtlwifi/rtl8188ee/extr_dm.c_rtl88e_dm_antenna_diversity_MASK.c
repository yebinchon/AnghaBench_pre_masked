
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl_priv {int dummy; } ;
struct rtl_mac {scalar_t__ link_state; } ;
struct rtl_efuse {scalar_t__ antenna_div_type; } ;
struct fast_ant_training {int becomelinked; } ;
struct rtl_dm {struct fast_ant_training fat_table; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 struct rtl_dm* FUNC_4 (struct rtl_priv*) ;
 struct rtl_efuse* FUNC_5 (struct rtl_priv*) ;
 struct rtl_mac* FUNC_6 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_7 (struct ieee80211_hw*) ;
 int FUNC_8 (struct ieee80211_hw*,int ,int ,int) ;

__attribute__((used)) static void FUNC_9(struct ieee80211_hw *VAR_9)
{
 struct rtl_priv *VAR_10 = FUNC_7(VAR_9);
 struct rtl_mac *VAR_11 = FUNC_6(FUNC_7(VAR_9));
 struct rtl_efuse *VAR_12 = FUNC_5(FUNC_7(VAR_9));
 struct rtl_dm *VAR_13 = FUNC_4(FUNC_7(VAR_9));
 struct fast_ant_training *VAR_14 = &VAR_13->fat_table;

 if (VAR_11->link_state < VAR_8) {
  FUNC_1(VAR_10, VAR_3, VAR_4, "No Link\n");
  if (VAR_14->becomelinked) {
   FUNC_1(VAR_10, VAR_3, VAR_4,
     "need to turn off HW AntDiv\n");
   FUNC_8(VAR_9, VAR_6, FUNC_0(7), 0);
   FUNC_8(VAR_9, VAR_5,
          FUNC_0(15), 0);
   if (VAR_12->antenna_div_type == VAR_1)
    FUNC_8(VAR_9, VAR_7,
           FUNC_0(21), 0);
   VAR_14->becomelinked =
    (VAR_11->link_state == VAR_8) ?
    1 : 0;
  }
  return;
 } else {
  if (!VAR_14->becomelinked) {
   FUNC_1(VAR_10, VAR_3, VAR_4,
     "Need to turn on HW AntDiv\n");
   FUNC_8(VAR_9, VAR_6, FUNC_0(7), 1);
   FUNC_8(VAR_9, VAR_5,
          FUNC_0(15), 1);
   if (VAR_12->antenna_div_type == VAR_1)
    FUNC_8(VAR_9, VAR_7,
           FUNC_0(21), 1);
   VAR_14->becomelinked =
    (VAR_11->link_state >= VAR_8) ?
    1 : 0;
  }
 }

 if ((VAR_12->antenna_div_type == VAR_1) ||
     (VAR_12->antenna_div_type == VAR_0))
  FUNC_3(VAR_9);
 else if (VAR_12->antenna_div_type == VAR_2)
  FUNC_2(VAR_9);
}
