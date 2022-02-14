
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct iwl_mvm_vif {TYPE_1__* phy_ctxt; } ;
struct iwl_is_dcm_with_go_iterator_data {int is_dcm_with_p2p_go; struct ieee80211_vif* current_vif; } ;
struct ieee80211_vif {scalar_t__ type; scalar_t__ p2p; } ;
struct TYPE_2__ {scalar_t__ id; } ;


 scalar_t__ VAR_0 ;
 struct iwl_mvm_vif* FUNC_0 (struct ieee80211_vif*) ;

__attribute__((used)) static void FUNC_1(void *VAR_1, u8 *VAR_2,
         struct ieee80211_vif *VAR_3)
{
 struct iwl_is_dcm_with_go_iterator_data *VAR_4 = VAR_1;
 struct iwl_mvm_vif *VAR_5 = FUNC_0(VAR_3);
 struct iwl_mvm_vif *VAR_6 =
  FUNC_0(VAR_4->current_vif);


 if (VAR_3 == VAR_4->current_vif)
  return;

 if (VAR_3->type == VAR_0 && VAR_3->p2p &&
     VAR_5->phy_ctxt && VAR_6->phy_ctxt &&
     VAR_5->phy_ctxt->id != VAR_6->phy_ctxt->id)
  VAR_4->is_dcm_with_p2p_go = 1;
}
