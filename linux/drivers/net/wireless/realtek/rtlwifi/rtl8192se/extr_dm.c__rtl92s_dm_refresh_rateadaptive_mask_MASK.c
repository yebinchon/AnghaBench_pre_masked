
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int inform_fw_driverctrldm; long undec_sm_pwdb; int useramask; } ;
struct rate_adaptive {int pre_ratr_state; int ratr_state; } ;
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
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,long,int,int,int) ;
 int FUNC_1 (struct rtl_priv*) ;
 scalar_t__ FUNC_2 (struct rtl_hal*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct ieee80211_hw*,int ) ;
 struct ieee80211_sta* FUNC_6 (struct ieee80211_hw*,int ) ;
 struct rtl_hal* FUNC_7 (struct rtl_priv*) ;
 struct rtl_mac* FUNC_8 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_9 (struct ieee80211_hw*) ;
 int FUNC_10 (struct ieee80211_hw*,struct ieee80211_sta*,int,int) ;

__attribute__((used)) static void FUNC_11(struct ieee80211_hw *VAR_5)
{
 struct rtl_priv *VAR_6 = FUNC_9(VAR_5);
 struct rtl_hal *VAR_7 = FUNC_7(FUNC_9(VAR_5));
 struct rtl_mac *VAR_8 = FUNC_8(FUNC_9(VAR_5));
 struct rate_adaptive *VAR_9 = &(VAR_6->ra);
 struct ieee80211_sta *VAR_10 = ((void*)0);
 u32 VAR_11 = 0;
 u32 VAR_12 = 0;
 u32 VAR_13 = 0;

 if (FUNC_2(VAR_7))
  return;

 if (!VAR_6->dm.useramask)
  return;

 if (FUNC_1(VAR_6) >= 61 &&
     !VAR_6->dm.inform_fw_driverctrldm) {
  FUNC_5(VAR_5, VAR_2);
  VAR_6->dm.inform_fw_driverctrldm = 1;
 }

 if ((VAR_8->link_state == VAR_3) &&
     (VAR_8->opmode == VAR_4)) {
  switch (VAR_9->pre_ratr_state) {
  case 131:
   VAR_13 = 40;
   VAR_12 = 30;
   VAR_11 = 20;
   break;
  case 129:
   VAR_13 = 44;
   VAR_12 = 30;
   VAR_11 = 20;
   break;
  case 130:
   VAR_13 = 44;
   VAR_12 = 34;
   VAR_11 = 20;
   break;
  case 128:
   VAR_13 = 44;
   VAR_12 = 34;
   VAR_11 = 24;
   break;
  default:
   VAR_13 = 44;
   VAR_12 = 34;
   VAR_11 = 24;
   break;
  }

  if (VAR_6->dm.undec_sm_pwdb > (long)VAR_13) {
   VAR_9->ratr_state = 131;
  } else if (VAR_6->dm.undec_sm_pwdb >
      (long)VAR_12) {
   VAR_9->ratr_state = 130;
  } else if (VAR_6->dm.undec_sm_pwdb >
      (long)VAR_11) {
   VAR_9->ratr_state = 130;
  } else {
   VAR_9->ratr_state = 128;
  }

  if (VAR_9->pre_ratr_state != VAR_9->ratr_state) {
   FUNC_0(VAR_6, VAR_0, VAR_1,
     "RSSI = %ld RSSI_LEVEL = %d PreState = %d, CurState = %d\n",
     VAR_6->dm.undec_sm_pwdb, VAR_9->ratr_state,
     VAR_9->pre_ratr_state, VAR_9->ratr_state);

   FUNC_3();
   VAR_10 = FUNC_6(VAR_5, VAR_8->bssid);
   if (VAR_10)
    VAR_6->cfg->ops->update_rate_tbl(VAR_5, VAR_10,
          VAR_9->ratr_state,
          1);
   FUNC_4();

   VAR_9->pre_ratr_state = VAR_9->ratr_state;
  }
 }
}
