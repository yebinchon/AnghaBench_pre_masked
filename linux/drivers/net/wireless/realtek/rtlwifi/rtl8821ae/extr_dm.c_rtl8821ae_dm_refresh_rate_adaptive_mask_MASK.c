
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_4__ {long undec_sm_pwdb; int useramask; } ;
struct rate_adaptive {int pre_ratr_state; int ratr_state; scalar_t__ high_rssi_thresh_for_ra; scalar_t__ low2high_rssi_thresh_for_ra40m; } ;
struct rtl_priv {TYPE_3__* cfg; TYPE_1__ dm; struct rate_adaptive ra; } ;
struct rtl_mac {scalar_t__ link_state; scalar_t__ opmode; int bssid; } ;
struct rtl_hal {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_6__ {TYPE_2__* ops; } ;
struct TYPE_5__ {int (* update_rate_tbl ) (struct ieee80211_hw*,struct ieee80211_sta*,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 scalar_t__ FUNC_1 (struct rtl_hal*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct ieee80211_sta* FUNC_4 (struct ieee80211_hw*,int ) ;
 struct rtl_hal* FUNC_5 (struct rtl_priv*) ;
 struct rtl_mac* FUNC_6 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_7 (struct ieee80211_hw*) ;
 int FUNC_8 (struct ieee80211_hw*,struct ieee80211_sta*,int,int) ;

__attribute__((used)) static void FUNC_9(struct ieee80211_hw *VAR_5)
{
 struct rtl_priv *VAR_6 = FUNC_7(VAR_5);
 struct rtl_hal *VAR_7 = FUNC_5(FUNC_7(VAR_5));
 struct rtl_mac *VAR_8 = FUNC_6(FUNC_7(VAR_5));
 struct rate_adaptive *VAR_9 = &VAR_6->ra;
 u32 VAR_10 = VAR_9->low2high_rssi_thresh_for_ra40m;
 u32 VAR_11 = VAR_9->high_rssi_thresh_for_ra;
 u8 VAR_12 = 5;
 struct ieee80211_sta *VAR_13 = ((void*)0);

 if (FUNC_1(VAR_7)) {
  FUNC_0(VAR_6, VAR_0, VAR_1,
    "driver is going to unload\n");
  return;
 }

 if (!VAR_6->dm.useramask) {
  FUNC_0(VAR_6, VAR_0, VAR_1,
    "driver does not control rate adaptive mask\n");
  return;
 }

 if (VAR_8->link_state == VAR_3 &&
  VAR_8->opmode == VAR_4) {
  switch (VAR_9->pre_ratr_state) {
  case 128:
   VAR_11 += VAR_12;
   break;
  case 129:
   VAR_11 += VAR_12;
   VAR_10 += VAR_12;
   break;
  default:
   break;
  }

  if (VAR_6->dm.undec_sm_pwdb >
      (long)VAR_11)
   VAR_9->ratr_state = VAR_2;
  else if (VAR_6->dm.undec_sm_pwdb >
    (long)VAR_10)
   VAR_9->ratr_state = 128;
  else
   VAR_9->ratr_state = 129;

  if (VAR_9->pre_ratr_state != VAR_9->ratr_state) {
   FUNC_0(VAR_6, VAR_0, VAR_1,
     "RSSI = %ld\n",
      VAR_6->dm.undec_sm_pwdb);
   FUNC_0(VAR_6, VAR_0, VAR_1,
     "RSSI_LEVEL = %d\n", VAR_9->ratr_state);
   FUNC_0(VAR_6, VAR_0, VAR_1,
     "PreState = %d, CurState = %d\n",
      VAR_9->pre_ratr_state, VAR_9->ratr_state);

   FUNC_2();
   VAR_13 = FUNC_4(VAR_5, VAR_8->bssid);
   if (VAR_13)
    VAR_6->cfg->ops->update_rate_tbl(VAR_5,
      VAR_13, VAR_9->ratr_state, 1);
   FUNC_3();

   VAR_9->pre_ratr_state = VAR_9->ratr_state;
  }
 }
}
