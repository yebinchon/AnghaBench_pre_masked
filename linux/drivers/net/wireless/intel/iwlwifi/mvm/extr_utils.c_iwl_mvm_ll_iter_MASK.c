
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct iwl_mvm_vif {TYPE_2__* phy_ctxt; } ;
struct iwl_mvm_low_latency_iter {int result; int* result_per_band; } ;
struct ieee80211_vif {int dummy; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_4__ {TYPE_1__* channel; } ;
struct TYPE_3__ {int band; } ;


 struct iwl_mvm_vif* FUNC_0 (struct ieee80211_vif*) ;
 scalar_t__ FUNC_1 (struct iwl_mvm_vif*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, u8 *VAR_1, struct ieee80211_vif *VAR_2)
{
 struct iwl_mvm_low_latency_iter *VAR_3 = VAR_0;
 struct iwl_mvm_vif *VAR_4 = FUNC_0(VAR_2);
 enum nl80211_band VAR_5;

 if (FUNC_1(VAR_4)) {
  VAR_3->result = 1;

  if (!VAR_4->phy_ctxt)
   return;

  VAR_5 = VAR_4->phy_ctxt->channel->band;
  VAR_3->result_per_band[VAR_5] = 1;
 }
}
