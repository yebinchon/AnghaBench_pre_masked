
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct sk_buff {scalar_t__ len; int data; } ;
struct iwl_mvm_vif {scalar_t__ id; } ;
struct iwl_mvm {int beacon_inject_active; int mutex; TYPE_2__* hw; TYPE_1__* fw; } ;
struct iwl_mac_beacon_cmd {int tim_size; int tim_idx; int template_id; void* byte_cnt; void* flags; } ;
struct ieee80211_vif {scalar_t__ type; } ;
struct ieee80211_tx_info {int dummy; } ;
typedef int beacon_cmd ;
struct TYPE_4__ {int extra_beacon_tailroom; } ;
struct TYPE_3__ {int ucode_capa; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int ,char*,int) ;
 struct sk_buff* FUNC_6 (TYPE_2__*,struct ieee80211_vif*,int *) ;
 int FUNC_7 (struct iwl_mvm*) ;
 int FUNC_8 (struct iwl_mvm*) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (struct ieee80211_tx_info*,struct ieee80211_vif*) ;
 int FUNC_11 (struct iwl_mvm*,struct sk_buff*,struct iwl_mac_beacon_cmd*,int) ;
 int FUNC_12 (struct iwl_mvm*,int *,int *,int ,scalar_t__) ;
 struct ieee80211_vif* FUNC_13 (struct iwl_mvm*,int,int) ;
 struct iwl_mvm_vif* FUNC_14 (struct ieee80211_vif*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_20(struct iwl_mvm *VAR_8, char *VAR_9, int VAR_10)
{
 struct ieee80211_vif *VAR_11;
 struct iwl_mvm_vif *VAR_12;
 struct sk_buff *VAR_13;
 struct ieee80211_tx_info *VAR_14;
 struct iwl_mac_beacon_cmd VAR_15 = {};
 u8 VAR_16;
 u16 VAR_17;
 int VAR_18;

 VAR_10 /= 2;


 if (VAR_10 >= VAR_7)
  return -VAR_0;

 if (!FUNC_7(VAR_8))
  return -VAR_1;

 if (!FUNC_8(VAR_8) &&
     !FUNC_4(&VAR_8->fw->ucode_capa,
   VAR_4))
  return -VAR_0;

 FUNC_17();

 for (VAR_18 = 0; VAR_18 < VAR_6; VAR_18++) {
  VAR_11 = FUNC_13(VAR_8, VAR_18, 1);
  if (!VAR_11)
   continue;

  if (VAR_11->type == VAR_5)
   break;
 }

 if (VAR_18 == VAR_6 || !VAR_11)
  goto out_err;

 VAR_8->hw->extra_beacon_tailroom = VAR_10;

 VAR_13 = FUNC_6(VAR_8->hw, VAR_11, ((void*)0));
 if (!VAR_13)
  goto out_err;

 if (VAR_10 && FUNC_5(FUNC_19(VAR_13, VAR_10), VAR_9, VAR_10)) {
  FUNC_3(VAR_13);
  goto out_err;
 }

 VAR_8->beacon_inject_active = 1;

 VAR_12 = FUNC_14(VAR_11);
 VAR_14 = FUNC_0(VAR_13);
 VAR_16 = FUNC_10(VAR_14, VAR_11);
 VAR_17 = FUNC_9(VAR_16);

 if (VAR_16 == VAR_2)
  VAR_17 |= VAR_3;

 VAR_15.flags = FUNC_1(VAR_17);
 VAR_15.byte_cnt = FUNC_1((u16)VAR_13->len);
 VAR_15.template_id = FUNC_2((u32)VAR_12->id);

 FUNC_12(VAR_8, &VAR_15.tim_idx,
     &VAR_15.tim_size,
     VAR_13->data, VAR_13->len);

 FUNC_15(&VAR_8->mutex);
 FUNC_11(VAR_8, VAR_13, &VAR_15,
      sizeof(VAR_15));
 FUNC_16(&VAR_8->mutex);

 FUNC_3(VAR_13);

 FUNC_18();
 return 0;

out_err:
 FUNC_18();
 return -VAR_0;
}
