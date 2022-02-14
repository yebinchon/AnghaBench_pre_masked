
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct sk_buff {scalar_t__ data; } ;
struct iwl_mvm_vif {int ap_sta_id; } ;
struct iwl_mvm {int * fw_id_to_mac_id; int status; } ;
struct TYPE_3__ {TYPE_2__* vif; } ;
struct ieee80211_tx_info {int flags; TYPE_1__ control; } ;
struct ieee80211_tx_control {struct ieee80211_sta* sta; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
struct ieee80211_hdr {int frame_control; } ;
struct TYPE_4__ {scalar_t__ type; } ;


 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct ieee80211_sta*) ;
 int FUNC_2 (struct iwl_mvm*,char*) ;
 struct iwl_mvm* FUNC_3 (struct ieee80211_hw*) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t FUNC_4 (int ) ;
 int FUNC_5 (struct ieee80211_hw*,struct sk_buff*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct iwl_mvm*) ;
 scalar_t__ FUNC_9 (struct iwl_mvm*,struct sk_buff*,struct ieee80211_sta*) ;
 scalar_t__ FUNC_10 (struct iwl_mvm*,struct sk_buff*) ;
 struct iwl_mvm_vif* FUNC_11 (TYPE_2__*) ;
 struct ieee80211_sta* FUNC_12 (int ) ;
 int FUNC_13 (int ,int *) ;

__attribute__((used)) static void FUNC_14(struct ieee80211_hw *VAR_7,
      struct ieee80211_tx_control *VAR_8,
      struct sk_buff *VAR_9)
{
 struct iwl_mvm *VAR_10 = FUNC_3(VAR_7);
 struct ieee80211_sta *VAR_11 = VAR_8->sta;
 struct ieee80211_tx_info *VAR_12 = FUNC_0(VAR_9);
 struct ieee80211_hdr *VAR_13 = (void *)VAR_9->data;
 bool VAR_14 = FUNC_0(VAR_9)->flags &
  VAR_0;

 if (FUNC_8(VAR_10)) {
  FUNC_2(VAR_10, "Dropping - RF/CT KILL\n");
  goto drop;
 }

 if (VAR_14 &&
     !FUNC_13(VAR_3, &VAR_10->status) &&
     !FUNC_13(VAR_2, &VAR_10->status))
  goto drop;


 if ((VAR_12->control.vif->type == VAR_5 ||
      VAR_12->control.vif->type == VAR_4) &&
     FUNC_7(VAR_13->frame_control) &&
     !FUNC_6(VAR_13->frame_control))
  VAR_11 = ((void*)0);


 if (!VAR_11 && VAR_12->control.vif->type == VAR_6 &&
     !VAR_14) {
  struct iwl_mvm_vif *VAR_15 =
   FUNC_11(VAR_12->control.vif);
  u8 VAR_16 = FUNC_4(VAR_15->ap_sta_id);

  if (VAR_16 < VAR_1) {

   VAR_11 = FUNC_12(VAR_10->fw_id_to_mac_id[VAR_16]);
   if (FUNC_1(VAR_11))
    goto drop;
  }
 }

 if (VAR_11) {
  if (FUNC_9(VAR_10, VAR_9, VAR_11))
   goto drop;
  return;
 }

 if (FUNC_10(VAR_10, VAR_9))
  goto drop;
 return;
 drop:
 FUNC_5(VAR_7, VAR_9);
}
