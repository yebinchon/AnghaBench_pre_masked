
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct sk_buff {scalar_t__ len; int data; } ;
struct iwl_mvm_vif {scalar_t__ id; } ;
struct iwl_mvm {int dummy; } ;
struct iwl_mac_beacon_cmd {void* ecsa_offset; void* csa_offset; int tim_size; int tim_idx; void* template_id; void* byte_cnt; void* flags; } ;
struct ieee80211_vif {scalar_t__ type; } ;
struct ieee80211_tx_info {int dummy; } ;
typedef int beacon_cmd ;


 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (struct ieee80211_tx_info*,struct ieee80211_vif*) ;
 int FUNC_6 (struct iwl_mvm*,struct sk_buff*,struct iwl_mac_beacon_cmd*,int) ;
 int FUNC_7 (struct iwl_mvm*,int *,int *,int ,scalar_t__) ;
 struct iwl_mvm_vif* FUNC_8 (struct ieee80211_vif*) ;

__attribute__((used)) static int FUNC_9(struct iwl_mvm *VAR_5,
        struct ieee80211_vif *VAR_6,
        struct sk_buff *VAR_7)
{
 struct iwl_mvm_vif *VAR_8 = FUNC_8(VAR_6);
 struct ieee80211_tx_info *VAR_9 = FUNC_0(VAR_7);
 struct iwl_mac_beacon_cmd VAR_10 = {};
 u8 VAR_11 = FUNC_5(VAR_9, VAR_6);
 u16 VAR_12;

 VAR_12 = FUNC_4(VAR_11);

 if (VAR_11 == VAR_0)
  VAR_12 |= VAR_1;

 VAR_10.flags = FUNC_1(VAR_12);
 VAR_10.byte_cnt = FUNC_1((u16)VAR_7->len);
 VAR_10.template_id = FUNC_2((u32)VAR_8->id);

 if (VAR_6->type == VAR_2)
  FUNC_7(VAR_5, &VAR_10.tim_idx,
      &VAR_10.tim_size,
      VAR_7->data, VAR_7->len);

 VAR_10.csa_offset =
  FUNC_2(FUNC_3(VAR_7->data,
         VAR_3,
         VAR_7->len));
 VAR_10.ecsa_offset =
  FUNC_2(FUNC_3(VAR_7->data,
         VAR_4,
         VAR_7->len));

 return FUNC_6(VAR_5, VAR_7, &VAR_10,
      sizeof(VAR_10));
}
