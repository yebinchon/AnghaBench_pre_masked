
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct iwl_mvm {int mutex; int * vif_id_to_mac; } ;
struct ieee80211_vif {int dummy; } ;


 size_t FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 struct ieee80211_vif* FUNC_3 (int ) ;
 struct ieee80211_vif* FUNC_4 (int ,int ) ;

__attribute__((used)) static inline struct ieee80211_vif *
FUNC_5(struct iwl_mvm *VAR_0, u8 VAR_1, bool VAR_2)
{
 if (FUNC_1(VAR_1 >= FUNC_0(VAR_0->vif_id_to_mac)))
  return ((void*)0);

 if (VAR_2)
  return FUNC_3(VAR_0->vif_id_to_mac[VAR_1]);

 return FUNC_4(VAR_0->vif_id_to_mac[VAR_1],
      FUNC_2(&VAR_0->mutex));
}
