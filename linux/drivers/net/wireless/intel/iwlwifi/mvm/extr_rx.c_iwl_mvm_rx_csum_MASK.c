
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int ip_summed; } ;
struct iwl_mvm_vif {int features; } ;
struct iwl_mvm_sta {int vif; } ;
struct ieee80211_sta {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct iwl_mvm_sta* FUNC_0 (struct ieee80211_sta*) ;
 struct iwl_mvm_vif* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_sta *VAR_4,
       struct sk_buff *VAR_5,
       u32 VAR_6)
{
 struct iwl_mvm_sta *VAR_7 = FUNC_0(VAR_4);
 struct iwl_mvm_vif *VAR_8 = FUNC_1(VAR_7->vif);

 if (VAR_8->features & VAR_1 &&
     VAR_6 & VAR_2 &&
     VAR_6 & VAR_3)
  VAR_5->ip_summed = VAR_0;
}
