
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct rtl_stats {int rx_pwdb_all; scalar_t__ packet_matchbssid; scalar_t__ packet_toself; } ;
struct rtl_efuse {scalar_t__ antenna_div_type; } ;
struct fast_ant_training {scalar_t__ fat_state; int antsel_rx_keep_2; int antsel_rx_keep_1; int antsel_rx_keep_0; int * ant_cnt; int * ant_sum; } ;
struct rtl_dm {struct fast_ant_training fat_table; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ieee80211_hw*,size_t,int ,int ) ;
 struct rtl_dm* FUNC_1 (int ) ;
 struct rtl_efuse* FUNC_2 (int ) ;
 int FUNC_3 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_4,
 struct rtl_stats *VAR_5)
{
 struct rtl_dm *VAR_6 = FUNC_1(FUNC_3(VAR_4));
 struct rtl_efuse *VAR_7 = FUNC_2(FUNC_3(VAR_4));
 u8 VAR_8;
 struct fast_ant_training *VAR_9 = &VAR_6->fat_table;

 if (VAR_7->antenna_div_type == VAR_2) {
  if (VAR_9->fat_state == VAR_3) {
   if (VAR_5->packet_toself) {
    VAR_8 =
     (VAR_9->antsel_rx_keep_2 << 2) |
     (VAR_9->antsel_rx_keep_1 << 1) |
     VAR_9->antsel_rx_keep_0;
    VAR_9->ant_sum[VAR_8] +=
     VAR_5->rx_pwdb_all;
    VAR_9->ant_cnt[VAR_8]++;
   }
  }
 } else if ((VAR_7->antenna_div_type == VAR_1) ||
 (VAR_7->antenna_div_type == VAR_0)) {
  if (VAR_5->packet_toself || VAR_5->packet_matchbssid) {
   VAR_8 = (VAR_9->antsel_rx_keep_2 << 2) |
     (VAR_9->antsel_rx_keep_1 << 1) |
     VAR_9->antsel_rx_keep_0;
   FUNC_0(VAR_4, VAR_8, 0,
           VAR_5->rx_pwdb_all);
  }

 }
}
