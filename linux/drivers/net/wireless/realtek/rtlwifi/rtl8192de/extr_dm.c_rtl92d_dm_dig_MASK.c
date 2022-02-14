
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {scalar_t__ current_bandtype; scalar_t__ earlymode_enable; } ;
struct TYPE_5__ {scalar_t__ opmode; scalar_t__ link_state; } ;
struct TYPE_4__ {int dm_initialgain_enable; } ;
struct false_alarm_statistics {int cnt_all; } ;
struct dig_t {int cur_igvalue; int large_fa_hit; int forbidden_igi; int recover_cnt; int rx_gain_min; int cursta_cstate; int min_undec_pwdb_for_dm; int last_min_undec_pwdb_for_dm; } ;
struct rtl_priv {TYPE_3__ rtlhal; TYPE_2__ mac80211; TYPE_1__ dm; struct false_alarm_statistics falsealm_cnt; struct dig_t dm_digtable; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_12)
{
 struct rtl_priv *VAR_13 = FUNC_4(VAR_12);
 struct dig_t *VAR_14 = &VAR_13->dm_digtable;
 u8 VAR_15 = VAR_14->cur_igvalue;
 struct false_alarm_statistics *VAR_16 = &(VAR_13->falsealm_cnt);

 FUNC_0(VAR_13, VAR_1, VAR_2, "==>\n");
 if (VAR_13->rtlhal.earlymode_enable) {
  FUNC_3(VAR_13);
  VAR_14->last_min_undec_pwdb_for_dm =
     VAR_14->min_undec_pwdb_for_dm;
 }
 if (!VAR_13->dm.dm_initialgain_enable)
  return;
 if (VAR_13->mac80211.opmode != VAR_11)
  return;
 FUNC_0(VAR_13, VAR_1, VAR_2, "progress\n");

 if (VAR_13->mac80211.link_state >= VAR_10)
  VAR_14->cursta_cstate = VAR_3;
 else
  VAR_14->cursta_cstate = VAR_4;


 if (VAR_16->cnt_all < VAR_6)
  VAR_15--;
 else if (VAR_16->cnt_all < VAR_7)
  VAR_15 += 0;
 else if (VAR_16->cnt_all < VAR_8)
  VAR_15++;
 else if (VAR_16->cnt_all >= VAR_8)
  VAR_15 += 2;
 FUNC_0(VAR_13, VAR_1, VAR_2,
   "dm_DIG() Before: large_fa_hit=%d, forbidden_igi=%x\n",
   VAR_14->large_fa_hit, VAR_14->forbidden_igi);
 FUNC_0(VAR_13, VAR_1, VAR_2,
   "dm_DIG() Before: Recover_cnt=%d, rx_gain_min=%x\n",
   VAR_14->recover_cnt, VAR_14->rx_gain_min);


 if (VAR_16->cnt_all > 10000) {
  FUNC_0(VAR_13, VAR_1, VAR_2,
    "dm_DIG(): Abnormally false alarm case\n");

  VAR_14->large_fa_hit++;
  if (VAR_14->forbidden_igi < VAR_14->cur_igvalue) {
   VAR_14->forbidden_igi = VAR_14->cur_igvalue;
   VAR_14->large_fa_hit = 1;
  }
  if (VAR_14->large_fa_hit >= 3) {
   if ((VAR_14->forbidden_igi + 1) > VAR_9)
    VAR_14->rx_gain_min = VAR_9;
   else
    VAR_14->rx_gain_min =
        (VAR_14->forbidden_igi + 1);
   VAR_14->recover_cnt = 3600;
  }
 } else {

  if (VAR_14->recover_cnt != 0) {
   VAR_14->recover_cnt--;
  } else {
   if (VAR_14->large_fa_hit == 0) {
    if ((VAR_14->forbidden_igi - 1) <
        VAR_5) {
     VAR_14->forbidden_igi =
        VAR_5;
     VAR_14->rx_gain_min =
        VAR_5;

    } else {
     VAR_14->forbidden_igi--;
     VAR_14->rx_gain_min =
         (VAR_14->forbidden_igi + 1);
    }
   } else if (VAR_14->large_fa_hit == 3) {
    VAR_14->large_fa_hit = 0;
   }
  }
 }
 FUNC_0(VAR_13, VAR_1, VAR_2,
   "dm_DIG() After: large_fa_hit=%d, forbidden_igi=%x\n",
   VAR_14->large_fa_hit, VAR_14->forbidden_igi);
 FUNC_0(VAR_13, VAR_1, VAR_2,
   "dm_DIG() After: recover_cnt=%d, rx_gain_min=%x\n",
   VAR_14->recover_cnt, VAR_14->rx_gain_min);

 if (VAR_15 > VAR_9)
  VAR_15 = VAR_9;
 else if (VAR_15 < VAR_14->rx_gain_min)
  VAR_15 = VAR_14->rx_gain_min;
 VAR_14->cur_igvalue = VAR_15;
 FUNC_2(VAR_12);
 if (VAR_13->rtlhal.current_bandtype != VAR_0)
  FUNC_1(VAR_12);
 FUNC_0(VAR_13, VAR_1, VAR_2, "<<==\n");
}
