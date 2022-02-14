
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct iwl_mvm_vif {int ps_disabled; TYPE_1__* phy_ctxt; } ;
struct ieee80211_vif {int dummy; } ;
struct TYPE_2__ {scalar_t__ id; } ;


 scalar_t__ VAR_0 ;
 struct iwl_mvm_vif* FUNC_0 (struct ieee80211_vif*) ;

__attribute__((used)) static void FUNC_1(void *VAR_1, u8* VAR_2,
            struct ieee80211_vif *VAR_3)
{
 struct iwl_mvm_vif *VAR_4 = FUNC_0(VAR_3);
 bool *VAR_5 = VAR_1;

 if (VAR_4->phy_ctxt && VAR_4->phy_ctxt->id < VAR_0)
  *VAR_5 |= VAR_4->ps_disabled;
}
