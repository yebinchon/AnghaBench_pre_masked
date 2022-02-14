
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_mvm {int snif_sta; int hw; int snif_queue; } ;
struct iwl_mac_ctx_cmd {int filter_flags; } ;
struct ieee80211_vif {int type; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct iwl_mvm*,int *,int ,int ,int ) ;
 int FUNC_5 (struct iwl_mvm*,struct ieee80211_vif*,struct iwl_mac_ctx_cmd*,int *,int ) ;
 int FUNC_6 (struct iwl_mvm*,struct iwl_mac_ctx_cmd*) ;

__attribute__((used)) static int FUNC_7(struct iwl_mvm *VAR_9,
      struct ieee80211_vif *VAR_10,
      u32 VAR_11)
{
 struct iwl_mac_ctx_cmd VAR_12 = {};
 u32 VAR_13 = FUNC_0(VAR_9->snif_queue);
 int VAR_14;

 FUNC_1(VAR_10->type != VAR_7);

 FUNC_5(VAR_9, VAR_10, &VAR_12, ((void*)0), VAR_11);

 VAR_12.filter_flags = FUNC_2(VAR_6 |
           VAR_3 |
           VAR_2 |
           VAR_5 |
           VAR_4 |
           VAR_1);
 FUNC_3(VAR_9->hw, VAR_8);


 VAR_14 = FUNC_4(VAR_9, &VAR_9->snif_sta, VAR_13,
           VAR_10->type, VAR_0);
 if (VAR_14)
  return VAR_14;

 return FUNC_6(VAR_9, &VAR_12);
}
