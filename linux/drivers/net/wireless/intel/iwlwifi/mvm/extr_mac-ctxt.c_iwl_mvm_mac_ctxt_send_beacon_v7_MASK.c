
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int len; int data; } ;
struct iwl_mvm_vif {scalar_t__ id; } ;
struct iwl_mvm {int dummy; } ;
struct iwl_mac_beacon_cmd_v7 {void* ecsa_offset; void* csa_offset; int tim_size; int tim_idx; void* template_id; int tx; } ;
struct ieee80211_vif {scalar_t__ type; } ;
typedef int beacon_cmd ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct iwl_mvm*,struct sk_buff*,struct iwl_mac_beacon_cmd_v7*,int) ;
 int FUNC_3 (struct iwl_mvm*,int *,int *,int ,int ) ;
 int FUNC_4 (struct iwl_mvm*,struct ieee80211_vif*,struct sk_buff*,int *) ;
 struct iwl_mvm_vif* FUNC_5 (struct ieee80211_vif*) ;

__attribute__((used)) static int FUNC_6(struct iwl_mvm *VAR_3,
        struct ieee80211_vif *VAR_4,
        struct sk_buff *VAR_5)
{
 struct iwl_mvm_vif *VAR_6 = FUNC_5(VAR_4);
 struct iwl_mac_beacon_cmd_v7 VAR_7 = {};

 FUNC_4(VAR_3, VAR_4, VAR_5, &VAR_7.tx);

 VAR_7.template_id = FUNC_0((u32)VAR_6->id);

 if (VAR_4->type == VAR_0)
  FUNC_3(VAR_3, &VAR_7.tim_idx,
      &VAR_7.tim_size,
      VAR_5->data, VAR_5->len);

 VAR_7.csa_offset =
  FUNC_0(FUNC_1(VAR_5->data,
         VAR_1,
         VAR_5->len));
 VAR_7.ecsa_offset =
  FUNC_0(FUNC_1(VAR_5->data,
         VAR_2,
         VAR_5->len));

 return FUNC_2(VAR_3, VAR_5, &VAR_7,
      sizeof(VAR_7));
}
