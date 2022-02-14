
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {scalar_t__ len; int cb; scalar_t__ data; } ;
struct TYPE_9__ {int sta_id; } ;
struct TYPE_8__ {int sta_id; } ;
struct iwl_mvm_vif {TYPE_2__ mcast_sta; TYPE_1__ bcast_sta; } ;
struct TYPE_12__ {int sta_id; } ;
struct TYPE_10__ {int sta_id; } ;
struct iwl_mvm {int snif_queue; int aux_queue; int trans; TYPE_5__ aux_sta; TYPE_3__ snif_sta; } ;
struct iwl_device_cmd {int dummy; } ;
struct TYPE_11__ {TYPE_6__* vif; } ;
struct ieee80211_tx_info {int flags; TYPE_4__ control; } ;
struct ieee80211_hdr {int frame_control; } ;
typedef int info ;
typedef int __le16 ;
struct TYPE_14__ {int flags; } ;
struct TYPE_13__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 TYPE_7__* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct iwl_mvm*,char*,int ,int) ;
 int FUNC_2 (struct iwl_mvm*,char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct iwl_mvm*,struct ieee80211_tx_info*,struct ieee80211_hdr*) ;
 int FUNC_8 (struct iwl_mvm*,struct sk_buff*) ;
 struct iwl_device_cmd* FUNC_9 (struct iwl_mvm*,struct sk_buff*,struct ieee80211_tx_info*,int,int *,int ) ;
 int FUNC_10 (struct sk_buff*,struct iwl_device_cmd*) ;
 struct iwl_mvm_vif* FUNC_11 (TYPE_6__*) ;
 int FUNC_12 (int ,struct iwl_device_cmd*) ;
 scalar_t__ FUNC_13 (int ,struct sk_buff*,struct iwl_device_cmd*,int) ;
 int FUNC_14 (struct ieee80211_tx_info*,int ,int) ;
 scalar_t__ FUNC_15 (scalar_t__) ;

int FUNC_16(struct iwl_mvm *VAR_9, struct sk_buff *VAR_10)
{
 struct ieee80211_hdr *VAR_11 = (struct ieee80211_hdr *)VAR_10->data;
 struct ieee80211_tx_info VAR_12;
 struct iwl_device_cmd *VAR_13;
 u8 VAR_14;
 int VAR_15 = FUNC_4(VAR_11->frame_control);
 __le16 VAR_16 = VAR_11->frame_control;
 bool VAR_17 = FUNC_0(VAR_10)->flags &
  VAR_2;
 int VAR_18 = -1;

 if (VAR_3 && FUNC_6(VAR_16))
  return -1;

 FUNC_14(&VAR_12, VAR_10->cb, sizeof(VAR_12));

 if (FUNC_3(VAR_10->len > VAR_0 + VAR_15))
  return -1;

 if (FUNC_3(VAR_12.flags & VAR_1))
  return -1;

 if (VAR_12.control.vif) {
  struct iwl_mvm_vif *VAR_19 =
   FUNC_11(VAR_12.control.vif);

  if (VAR_12.control.vif->type == VAR_7 ||
      VAR_12.control.vif->type == VAR_5 ||
      VAR_12.control.vif->type == VAR_4) {
   if (!FUNC_5(VAR_11->frame_control))
    VAR_14 = VAR_19->bcast_sta.sta_id;
   else
    VAR_14 = VAR_19->mcast_sta.sta_id;

   VAR_18 = FUNC_7(VAR_9, &VAR_12, VAR_11);
  } else if (VAR_12.control.vif->type == VAR_6) {
   VAR_18 = VAR_9->snif_queue;
   VAR_14 = VAR_9->snif_sta.sta_id;
  } else if (VAR_12.control.vif->type == VAR_8 &&
      VAR_17) {
   VAR_14 = VAR_9->aux_sta.sta_id;
   VAR_18 = VAR_9->aux_queue;
  }
 }

 if (VAR_18 < 0) {
  FUNC_2(VAR_9, "No queue was found. Dropping TX\n");
  return -1;
 }

 if (FUNC_15(FUNC_6(VAR_16)))
  FUNC_8(VAR_9, VAR_10);

 FUNC_1(VAR_9, "station Id %d, queue=%d\n", VAR_14, VAR_18);

 VAR_13 = FUNC_9(VAR_9, VAR_10, &VAR_12, VAR_15, ((void*)0), VAR_14);
 if (!VAR_13)
  return -1;


 FUNC_10(VAR_10, VAR_13);

 if (FUNC_13(VAR_9->trans, VAR_10, VAR_13, VAR_18)) {
  FUNC_12(VAR_9->trans, VAR_13);
  return -1;
 }

 return 0;
}
