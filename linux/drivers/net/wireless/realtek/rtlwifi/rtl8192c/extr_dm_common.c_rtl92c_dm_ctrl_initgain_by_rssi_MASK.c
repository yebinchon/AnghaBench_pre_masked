
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int cnt_all; } ;
struct dig_t {int large_fa_hit; int forbidden_igi; int cur_igvalue; int rx_gain_max; int rx_gain_min; int recover_cnt; int fa_lowthresh; int back_val; int back_range_min; int back_range_max; int pre_igvalue; } ;
struct rtl_priv {TYPE_1__ falsealm_cnt; struct dig_t dm_digtable; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct rtl_priv*,int) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_2)
{
 struct rtl_priv *VAR_3 = FUNC_1(VAR_2);
 struct dig_t *VAR_4 = &VAR_3->dm_digtable;
 u32 VAR_5;


 if (VAR_3->falsealm_cnt.cnt_all > 10000) {
  VAR_4->large_fa_hit++;
  if (VAR_4->forbidden_igi < VAR_4->cur_igvalue) {
   VAR_4->forbidden_igi = VAR_4->cur_igvalue;
   VAR_4->large_fa_hit = 1;
  }

  if (VAR_4->large_fa_hit >= 3) {
   if ((VAR_4->forbidden_igi + 1) >
       VAR_4->rx_gain_max)
    VAR_4->rx_gain_min = VAR_4->rx_gain_max;
   else
    VAR_4->rx_gain_min = (VAR_4->forbidden_igi + 1);
   VAR_4->recover_cnt = 3600;
  }
 } else {

  if (VAR_4->recover_cnt != 0) {
   VAR_4->recover_cnt--;
  } else {
   if (VAR_4->large_fa_hit == 0) {
    if ((VAR_4->forbidden_igi-1) < VAR_1) {
     VAR_4->forbidden_igi = VAR_1;
     VAR_4->rx_gain_min = VAR_1;
    } else {
     VAR_4->forbidden_igi--;
     VAR_4->rx_gain_min = VAR_4->forbidden_igi + 1;
    }
   } else if (VAR_4->large_fa_hit == 3) {
    VAR_4->large_fa_hit = 0;
   }
  }
 }
 if (VAR_3->falsealm_cnt.cnt_all < 250) {
  VAR_5 = FUNC_2(VAR_3, 0x4fd) & 0x01;

  if (!VAR_5) {
   if (VAR_3->falsealm_cnt.cnt_all >
       VAR_4->fa_lowthresh) {
    if ((VAR_4->back_val - 2) <
       VAR_4->back_range_min)
     VAR_4->back_val = VAR_4->back_range_min;
    else
     VAR_4->back_val -= 2;
   } else if (VAR_3->falsealm_cnt.cnt_all <
       VAR_4->fa_lowthresh) {
    if ((VAR_4->back_val + 2) >
        VAR_4->back_range_max)
     VAR_4->back_val = VAR_4->back_range_max;
    else
     VAR_4->back_val += 2;
   }
  } else {
   VAR_4->back_val = VAR_0;
  }
 } else {

  if (VAR_3->falsealm_cnt.cnt_all > 1000)
   VAR_4->cur_igvalue = VAR_4->pre_igvalue + 2;
  else if (VAR_3->falsealm_cnt.cnt_all > 750)
   VAR_4->cur_igvalue = VAR_4->pre_igvalue + 1;
  else if (VAR_3->falsealm_cnt.cnt_all < 500)
   VAR_4->cur_igvalue = VAR_4->pre_igvalue - 1;
 }


 if (VAR_4->cur_igvalue > VAR_4->rx_gain_max)
  VAR_4->cur_igvalue = VAR_4->rx_gain_max;

 if (VAR_4->cur_igvalue < VAR_4->rx_gain_min)
  VAR_4->cur_igvalue = VAR_4->rx_gain_min;

 FUNC_0(VAR_2);
}
