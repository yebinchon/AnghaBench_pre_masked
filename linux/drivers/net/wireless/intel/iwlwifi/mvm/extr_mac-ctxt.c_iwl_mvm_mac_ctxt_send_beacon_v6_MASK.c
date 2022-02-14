
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int len; int data; } ;
struct iwl_mvm_vif {scalar_t__ id; } ;
struct iwl_mvm {int dummy; } ;
struct iwl_mac_beacon_cmd_v6 {int tim_size; int tim_idx; int template_id; int tx; } ;
struct ieee80211_vif {scalar_t__ type; } ;
typedef int beacon_cmd ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct iwl_mvm*,struct sk_buff*,struct iwl_mac_beacon_cmd_v6*,int) ;
 int FUNC_2 (struct iwl_mvm*,int *,int *,int ,int ) ;
 int FUNC_3 (struct iwl_mvm*,struct ieee80211_vif*,struct sk_buff*,int *) ;
 struct iwl_mvm_vif* FUNC_4 (struct ieee80211_vif*) ;

__attribute__((used)) static int FUNC_5(struct iwl_mvm *VAR_1,
        struct ieee80211_vif *VAR_2,
        struct sk_buff *VAR_3)
{
 struct iwl_mvm_vif *VAR_4 = FUNC_4(VAR_2);
 struct iwl_mac_beacon_cmd_v6 VAR_5 = {};

 FUNC_3(VAR_1, VAR_2, VAR_3, &VAR_5.tx);

 VAR_5.template_id = FUNC_0((u32)VAR_4->id);

 if (VAR_2->type == VAR_0)
  FUNC_2(VAR_1, &VAR_5.tim_idx,
      &VAR_5.tim_size,
      VAR_3->data, VAR_3->len);

 return FUNC_1(VAR_1, VAR_3, &VAR_5,
      sizeof(VAR_5));
}
