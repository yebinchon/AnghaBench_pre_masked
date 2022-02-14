
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lock; } ;
struct TYPE_5__ {TYPE_1__ pers; } ;
struct TYPE_6__ {TYPE_2__ rs_drv; } ;
struct iwl_mvm_sta {TYPE_3__ lq_sta; } ;
struct iwl_mvm {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;


 scalar_t__ FUNC_0 (struct iwl_mvm*) ;
 struct iwl_mvm_sta* FUNC_1 (struct ieee80211_sta*) ;
 int FUNC_2 (struct iwl_mvm*,struct ieee80211_sta*,int) ;
 int FUNC_3 (struct iwl_mvm*,struct ieee80211_sta*,int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct iwl_mvm *VAR_0, struct ieee80211_sta *VAR_1,
     enum nl80211_band VAR_2, bool VAR_3)
{
 if (FUNC_0(VAR_0)) {
  FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3);
 } else {
  struct iwl_mvm_sta *VAR_4 = FUNC_1(VAR_1);

  FUNC_4(&VAR_4->lq_sta.rs_drv.pers.lock);
  FUNC_2(VAR_0, VAR_1, VAR_2);
  FUNC_5(&VAR_4->lq_sta.rs_drv.pers.lock);
 }
}
