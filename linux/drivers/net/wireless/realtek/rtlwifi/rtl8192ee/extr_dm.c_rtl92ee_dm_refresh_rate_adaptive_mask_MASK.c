
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int undec_sm_pwdb; int useramask; } ;
struct rate_adaptive {int ldpc_thres; int use_ldpc; int lower_rts_rate; int ratr_state; int pre_ratr_state; } ;
struct rtl_priv {TYPE_3__* cfg; TYPE_1__ dm; struct rate_adaptive ra; } ;
struct rtl_mac {scalar_t__ link_state; scalar_t__ opmode; int bssid; } ;
struct rtl_hal {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_6__ {TYPE_2__* ops; } ;
struct TYPE_5__ {int (* update_rate_tbl ) (struct ieee80211_hw*,struct ieee80211_sta*,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 scalar_t__ FUNC_1 (struct ieee80211_hw*,int,int *) ;
 scalar_t__ FUNC_2 (struct rtl_hal*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 struct ieee80211_sta* FUNC_5 (struct ieee80211_hw*,int ) ;
 struct rtl_hal* FUNC_6 (struct rtl_priv*) ;
 struct rtl_mac* FUNC_7 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_8 (struct ieee80211_hw*) ;
 int FUNC_9 (struct ieee80211_hw*,struct ieee80211_sta*,int ,int) ;

__attribute__((used)) static void FUNC_10(struct ieee80211_hw *VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_8(VAR_4);
 struct rtl_hal *VAR_6 = FUNC_6(FUNC_8(VAR_4));
 struct rtl_mac *VAR_7 = FUNC_7(FUNC_8(VAR_4));
 struct rate_adaptive *VAR_8 = &VAR_5->ra;
 struct ieee80211_sta *VAR_9 = ((void*)0);

 if (FUNC_2(VAR_6)) {
  FUNC_0(VAR_5, VAR_0, VAR_1,
    "driver is going to unload\n");
  return;
 }

 if (!VAR_5->dm.useramask) {
  FUNC_0(VAR_5, VAR_0, VAR_1,
    "driver does not control rate adaptive mask\n");
  return;
 }

 if (VAR_7->link_state == VAR_2 &&
     VAR_7->opmode == VAR_3) {
  if (VAR_5->dm.undec_sm_pwdb < VAR_8->ldpc_thres) {
   VAR_8->use_ldpc = 1;
   VAR_8->lower_rts_rate = 1;
  } else if (VAR_5->dm.undec_sm_pwdb >
      (VAR_8->ldpc_thres - 5)) {
   VAR_8->use_ldpc = 0;
   VAR_8->lower_rts_rate = 0;
  }
  if (FUNC_1(VAR_4, VAR_5->dm.undec_sm_pwdb,
            &VAR_8->ratr_state)) {
   FUNC_3();
   VAR_9 = FUNC_5(VAR_4, VAR_7->bssid);
   if (VAR_9)
    VAR_5->cfg->ops->update_rate_tbl(VAR_4, VAR_9,
             VAR_8->ratr_state,
             1);
   FUNC_4();

   VAR_8->pre_ratr_state = VAR_8->ratr_state;
  }
 }
}
