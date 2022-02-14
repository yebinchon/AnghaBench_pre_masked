
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int undec_sm_pwdb; } ;
struct TYPE_3__ {scalar_t__ link_state; scalar_t__ opmode; scalar_t__ act_scanning; } ;
struct dig_t {scalar_t__ cur_sta_cstate; scalar_t__ dig_twoport_algorithm; scalar_t__ pre_sta_cstate; int rssi_val; } ;
struct rtl_priv {TYPE_2__ dm; TYPE_1__ mac80211; struct dig_t dm_digtable; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*,int ) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_7)
{
 struct rtl_priv *VAR_8 = FUNC_3(VAR_7);
 struct dig_t *VAR_9 = &VAR_8->dm_digtable;

 if (VAR_8->mac80211.act_scanning)
  return;


 if (VAR_8->mac80211.link_state >= VAR_5 ||
     VAR_8->mac80211.opmode == VAR_6)
  VAR_9->cur_sta_cstate = VAR_0;
 else
  VAR_9->cur_sta_cstate = VAR_1;

 VAR_9->rssi_val = VAR_8->dm.undec_sm_pwdb;


 if (VAR_9->cur_sta_cstate != VAR_1) {
  if (VAR_9->dig_twoport_algorithm ==
      VAR_2) {
   VAR_9->dig_twoport_algorithm = VAR_3;
   FUNC_2(VAR_7, VAR_4);
  }
 }

 FUNC_0(VAR_7);
 FUNC_1(VAR_7);

 VAR_9->pre_sta_cstate = VAR_9->cur_sta_cstate;
}
