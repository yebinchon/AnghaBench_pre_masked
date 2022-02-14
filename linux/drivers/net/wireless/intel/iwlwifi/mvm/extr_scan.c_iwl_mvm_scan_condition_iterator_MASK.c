
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct iwl_mvm_vif {TYPE_1__* phy_ctxt; } ;
struct ieee80211_vif {scalar_t__ type; } ;
struct TYPE_2__ {scalar_t__ id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct iwl_mvm_vif* FUNC_0 (struct ieee80211_vif*) ;

__attribute__((used)) static void FUNC_1(void *VAR_2, u8 *VAR_3,
         struct ieee80211_vif *VAR_4)
{
 struct iwl_mvm_vif *VAR_5 = FUNC_0(VAR_4);
 int *VAR_6 = VAR_2;

 if (VAR_4->type != VAR_0 && VAR_5->phy_ctxt &&
     VAR_5->phy_ctxt->id < VAR_1)
  *VAR_6 += 1;
}
