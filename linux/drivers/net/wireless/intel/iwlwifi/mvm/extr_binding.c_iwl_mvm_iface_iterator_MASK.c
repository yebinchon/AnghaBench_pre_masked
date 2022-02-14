
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iwl_mvm_vif {scalar_t__ phy_ctxt; int color; int id; } ;
struct iwl_mvm_iface_iterator_data {scalar_t__ phyctxt; size_t idx; int * colors; int * ids; struct ieee80211_vif* ignore_vif; } ;
struct ieee80211_vif {int dummy; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 struct iwl_mvm_vif* FUNC_1 (struct ieee80211_vif*) ;

__attribute__((used)) static void FUNC_2(void *VAR_1, u8 *VAR_2,
       struct ieee80211_vif *VAR_3)
{
 struct iwl_mvm_iface_iterator_data *VAR_4 = VAR_1;
 struct iwl_mvm_vif *VAR_5 = FUNC_1(VAR_3);

 if (VAR_3 == VAR_4->ignore_vif)
  return;

 if (VAR_5->phy_ctxt != VAR_4->phyctxt)
  return;

 if (FUNC_0(VAR_4->idx >= VAR_0))
  return;

 VAR_4->ids[VAR_4->idx] = VAR_5->id;
 VAR_4->colors[VAR_4->idx] = VAR_5->color;
 VAR_4->idx++;
}
