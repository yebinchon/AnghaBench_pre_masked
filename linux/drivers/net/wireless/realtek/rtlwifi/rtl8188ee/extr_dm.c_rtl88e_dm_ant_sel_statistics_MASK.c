
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef size_t u32 ;
struct rtl_efuse {scalar_t__ antenna_div_type; } ;
struct fast_ant_training {int * aux_ant_cnt; int * aux_ant_sum; int * main_ant_cnt; int * main_ant_sum; } ;
struct rtl_dm {struct fast_ant_training fat_table; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct rtl_dm* FUNC_0 (int ) ;
 struct rtl_efuse* FUNC_1 (int ) ;
 int FUNC_2 (struct ieee80211_hw*) ;

void FUNC_3(struct ieee80211_hw *VAR_4,
      u8 VAR_5, u32 VAR_6,
      u32 VAR_7)
{
 struct rtl_efuse *VAR_8 = FUNC_1(FUNC_2(VAR_4));
 struct rtl_dm *VAR_9 = FUNC_0(FUNC_2(VAR_4));
 struct fast_ant_training *VAR_10 = &VAR_9->fat_table;

 if (VAR_8->antenna_div_type == VAR_1) {
  if (VAR_5 == VAR_3) {
   VAR_10->main_ant_sum[VAR_6] += VAR_7;
   VAR_10->main_ant_cnt[VAR_6]++;
  } else {
   VAR_10->aux_ant_sum[VAR_6] += VAR_7;
   VAR_10->aux_ant_cnt[VAR_6]++;
  }
 } else if (VAR_8->antenna_div_type == VAR_0) {
  if (VAR_5 == VAR_2) {
   VAR_10->main_ant_sum[VAR_6] += VAR_7;
   VAR_10->main_ant_cnt[VAR_6]++;
  } else {
   VAR_10->aux_ant_sum[VAR_6] += VAR_7;
   VAR_10->aux_ant_cnt[VAR_6]++;
  }
 }
}
