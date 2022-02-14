
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_mvm_vif {int color; int id; } ;
struct iwl_mvm_phy_ctxt {int dummy; } ;
struct iwl_mvm_iface_iterator_data {size_t idx; int * colors; int * ids; struct iwl_mvm_phy_ctxt* phyctxt; struct ieee80211_vif* ignore_vif; } ;
struct iwl_mvm {int hw; int mutex; } ;
struct ieee80211_vif {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,struct iwl_mvm_iface_iterator_data*) ;
 int FUNC_2 (struct iwl_mvm*,int ,struct iwl_mvm_iface_iterator_data*) ;
 int VAR_6 ;
 struct iwl_mvm_vif* FUNC_3 (struct ieee80211_vif*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct iwl_mvm *VAR_7,
      struct ieee80211_vif *VAR_8,
      struct iwl_mvm_phy_ctxt *VAR_9,
      bool VAR_10)
{
 struct iwl_mvm_vif *VAR_11 = FUNC_3(VAR_8);
 struct iwl_mvm_iface_iterator_data VAR_12 = {
  .ignore_vif = VAR_8,
  .phyctxt = VAR_9,
 };
 u32 VAR_13 = VAR_2;

 FUNC_4(&VAR_7->mutex);

 FUNC_1(VAR_7->hw,
         VAR_4,
         VAR_6,
         &VAR_12);





 if (VAR_12.idx == 0) {
  if (VAR_10)
   VAR_13 = VAR_1;
  else
   VAR_13 = VAR_3;
 }

 if (VAR_10) {
  if (FUNC_0(VAR_12.idx >= VAR_5))
   return -VAR_0;

  VAR_12.ids[VAR_12.idx] = VAR_11->id;
  VAR_12.colors[VAR_12.idx] = VAR_11->color;
  VAR_12.idx++;
 }

 return FUNC_2(VAR_7, VAR_13, &VAR_12);
}
