
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cnt_all; } ;
struct dig_t {scalar_t__ fa_highthresh; int back_val; int back_range_min; scalar_t__ fa_lowthresh; int back_range_max; int rssi_val_min; int rx_gain_max; int cur_igvalue; int rx_gain_min; } ;
struct rtl_priv {TYPE_1__ falsealm_cnt; struct dig_t dm_digtable; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int,int) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_2)
{
 struct rtl_priv *VAR_3 = FUNC_2(VAR_2);
 struct dig_t *VAR_4 = &VAR_3->dm_digtable;

 if (VAR_3->falsealm_cnt.cnt_all > VAR_4->fa_highthresh) {
  if ((VAR_4->back_val - 2) <
      VAR_4->back_range_min)
   VAR_4->back_val =
       VAR_4->back_range_min;
  else
   VAR_4->back_val -= 2;
 } else if (VAR_3->falsealm_cnt.cnt_all < VAR_4->fa_lowthresh) {
  if ((VAR_4->back_val + 2) >
      VAR_4->back_range_max)
   VAR_4->back_val =
       VAR_4->back_range_max;
  else
   VAR_4->back_val += 2;
 }

 if ((VAR_4->rssi_val_min + 10 - VAR_4->back_val) >
     VAR_4->rx_gain_max)
  VAR_4->cur_igvalue = VAR_4->rx_gain_max;
 else if ((VAR_4->rssi_val_min + 10 -
    VAR_4->back_val) < VAR_4->rx_gain_min)
  VAR_4->cur_igvalue = VAR_4->rx_gain_min;
 else
  VAR_4->cur_igvalue = VAR_4->rssi_val_min + 10 -
      VAR_4->back_val;

 FUNC_0(VAR_3, VAR_0, VAR_1,
   "rssi_val_min = %x back_val %x\n",
    VAR_4->rssi_val_min, VAR_4->back_val);

 FUNC_1(VAR_2);
}
