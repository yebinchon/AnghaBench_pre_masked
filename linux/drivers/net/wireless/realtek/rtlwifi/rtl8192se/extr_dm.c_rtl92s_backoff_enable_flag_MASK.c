
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct false_alarm_statistics {scalar_t__ cnt_all; } ;
struct dig_t {scalar_t__ fa_highthresh; int back_val; int backoffval_range_min; scalar_t__ fa_lowthresh; int backoffval_range_max; } ;
struct rtl_priv {struct false_alarm_statistics falsealm_cnt; struct dig_t dm_digtable; } ;
struct ieee80211_hw {int dummy; } ;


 struct rtl_priv* FUNC_0 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_1(struct ieee80211_hw *VAR_0)
{
 struct rtl_priv *VAR_1 = FUNC_0(VAR_0);
 struct dig_t *VAR_2 = &VAR_1->dm_digtable;
 struct false_alarm_statistics *VAR_3 = &(VAR_1->falsealm_cnt);

 if (VAR_3->cnt_all > VAR_2->fa_highthresh) {
  if ((VAR_2->back_val - 6) <
   VAR_2->backoffval_range_min)
   VAR_2->back_val = VAR_2->backoffval_range_min;
  else
   VAR_2->back_val -= 6;
 } else if (VAR_3->cnt_all < VAR_2->fa_lowthresh) {
  if ((VAR_2->back_val + 6) >
   VAR_2->backoffval_range_max)
   VAR_2->back_val =
     VAR_2->backoffval_range_max;
  else
   VAR_2->back_val += 6;
 }
}
