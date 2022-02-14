
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
struct ieee80211_tx_info {int dummy; } ;
struct ieee80211_sta {int dummy; } ;


 int FUNC_0 (struct iwl_mvm*,struct ieee80211_sta*,int,struct ieee80211_tx_info*,int) ;
 struct iwl_mvm_sta* FUNC_1 (struct ieee80211_sta*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct iwl_mvm *VAR_0, struct ieee80211_sta *VAR_1,
     int VAR_2, struct ieee80211_tx_info *VAR_3, bool VAR_4)
{
 struct iwl_mvm_sta *VAR_5 = FUNC_1(VAR_1);




 if (!FUNC_2(&VAR_5->lq_sta.rs_drv.pers.lock))
  return;

 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_3(&VAR_5->lq_sta.rs_drv.pers.lock);
}
