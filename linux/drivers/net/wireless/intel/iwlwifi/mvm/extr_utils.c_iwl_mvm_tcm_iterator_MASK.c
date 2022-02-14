
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct iwl_mvm_vif {size_t id; TYPE_2__* phy_ctxt; } ;
struct ieee80211_vif {int dummy; } ;
struct TYPE_4__ {TYPE_1__* channel; } ;
struct TYPE_3__ {int band; } ;


 struct iwl_mvm_vif* FUNC_0 (struct ieee80211_vif*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, u8 *VAR_1,
     struct ieee80211_vif *VAR_2)
{
 struct iwl_mvm_vif *VAR_3 = FUNC_0(VAR_2);
 u32 *VAR_4 = VAR_0;

 if (!VAR_3->phy_ctxt)
  return;

 VAR_4[VAR_3->id] = VAR_3->phy_ctxt->channel->band;
}
