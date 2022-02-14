
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct rtl_priv {int dummy; } ;
struct rtl_efuse {scalar_t__ antenna_div_type; } ;
struct fast_ant_training {scalar_t__ rx_idle_ant; } ;
struct rtl_dm {struct fast_ant_training fat_table; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,...) ;
 struct rtl_dm* FUNC_2 (struct rtl_priv*) ;
 struct rtl_efuse* FUNC_3 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct ieee80211_hw*,int ,int,int ) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_hw *VAR_12,
      u8 VAR_13)
{
 struct rtl_priv *VAR_14 = FUNC_4(VAR_12);
 struct rtl_efuse *VAR_15 = FUNC_3(FUNC_4(VAR_12));
 struct rtl_dm *VAR_16 = FUNC_2(FUNC_4(VAR_12));
 struct fast_ant_training *VAR_17 = &VAR_16->fat_table;
 u32 VAR_18, VAR_19;

 if (VAR_17->rx_idle_ant != VAR_13) {
  FUNC_1(VAR_14, VAR_4, VAR_5,
    "need to update rx idle ant\n");
  if (VAR_13 == VAR_9) {
   VAR_18 =
     (VAR_17->rx_idle_ant == VAR_3) ?
     VAR_11 : VAR_10;
   VAR_19 =
     (VAR_17->rx_idle_ant == VAR_3) ?
     VAR_1 : VAR_0;
  } else {
   VAR_18 =
      (VAR_17->rx_idle_ant == VAR_3) ?
      VAR_1 : VAR_0;
   VAR_19 =
      (VAR_17->rx_idle_ant == VAR_3) ?
      VAR_11 : VAR_10;
  }

  if (VAR_15->antenna_div_type == VAR_3) {
   FUNC_5(VAR_12, VAR_8,
          FUNC_0(5) | FUNC_0(4) | FUNC_0(3), VAR_18);
   FUNC_5(VAR_12, VAR_8,
          FUNC_0(8) | FUNC_0(7) | FUNC_0(6), VAR_19);
   FUNC_5(VAR_12, VAR_6,
          FUNC_0(14) | FUNC_0(13) | FUNC_0(12),
          VAR_18);
   FUNC_5(VAR_12, VAR_7,
          FUNC_0(6) | FUNC_0(7), VAR_18);
  } else if (VAR_15->antenna_div_type == VAR_2) {
   FUNC_5(VAR_12, VAR_8,
          FUNC_0(5) | FUNC_0(4) | FUNC_0(3), VAR_18);
   FUNC_5(VAR_12, VAR_8,
          FUNC_0(8) | FUNC_0(7) | FUNC_0(6), VAR_19);
  }
 }
 VAR_17->rx_idle_ant = VAR_13;
 FUNC_1(VAR_14, VAR_4, VAR_5, "RxIdleAnt %s\n",
   (VAR_13 == VAR_9) ? ("MAIN_ANT") : ("AUX_ANT"));
}
