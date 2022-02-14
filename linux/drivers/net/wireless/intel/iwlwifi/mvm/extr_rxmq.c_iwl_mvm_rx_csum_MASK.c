
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct sk_buff {int ip_summed; } ;
struct iwl_rx_mpdu_desc {int l3l4_flags; } ;
struct iwl_mvm_vif {int features; } ;
struct iwl_mvm_sta {int vif; } ;
struct ieee80211_sta {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 struct iwl_mvm_sta* FUNC_0 (struct ieee80211_sta*) ;
 struct iwl_mvm_vif* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_sta *VAR_8,
       struct sk_buff *VAR_9,
       struct iwl_rx_mpdu_desc *VAR_10)
{
 struct iwl_mvm_sta *VAR_11 = FUNC_0(VAR_8);
 struct iwl_mvm_vif *VAR_12 = FUNC_1(VAR_11->vif);
 u16 VAR_13 = FUNC_2(VAR_10->l3l4_flags);
 u8 VAR_14 = (u8)((VAR_13 & VAR_2) >>
     VAR_4);

 if (VAR_12->features & VAR_7 &&
     VAR_13 & VAR_3 &&
     (VAR_13 & VAR_1 ||
      VAR_14 == VAR_5 ||
      VAR_14 == VAR_6))
  VAR_9->ip_summed = VAR_0;
}
