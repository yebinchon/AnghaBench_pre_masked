
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_mvm_vif {struct iwl_mvm_phy_ctxt* phy_ctxt; } ;
struct iwl_mvm_phy_ctxt {scalar_t__ ref; struct ieee80211_channel* channel; } ;
struct iwl_mvm {int mutex; struct iwl_mvm_phy_ctxt* phy_ctxts; TYPE_1__* fw; int roc_done_wk; } ;
struct ieee80211_vif {int type; } ;
struct ieee80211_hw {int dummy; } ;
struct ieee80211_channel {int hw_value; } ;
struct cfg80211_chan_def {int dummy; } ;
typedef enum ieee80211_roc_type { ____Placeholder_ieee80211_roc_type } ieee80211_roc_type ;
struct TYPE_2__ {int ucode_capa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwl_mvm*,char*,...) ;
 int FUNC_1 (struct iwl_mvm*,char*,...) ;
 struct iwl_mvm* FUNC_2 (struct ieee80211_hw*) ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 scalar_t__ FUNC_3 (int,char*) ;
 int FUNC_4 (struct cfg80211_chan_def*,struct ieee80211_channel*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_8 (struct iwl_mvm*,struct ieee80211_vif*) ;
 struct iwl_mvm_phy_ctxt* FUNC_9 (struct iwl_mvm*) ;
 int FUNC_10 (struct iwl_mvm*,struct iwl_mvm_phy_ctxt*,struct cfg80211_chan_def*,int,int) ;
 int FUNC_11 (struct iwl_mvm*,struct iwl_mvm_phy_ctxt*) ;
 int FUNC_12 (struct iwl_mvm*,struct iwl_mvm_phy_ctxt*) ;
 int FUNC_13 (struct iwl_mvm*,struct ieee80211_channel*,struct ieee80211_vif*,int) ;
 int FUNC_14 (struct iwl_mvm*,struct ieee80211_vif*,int,int) ;
 struct iwl_mvm_vif* FUNC_15 (struct ieee80211_vif*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static int FUNC_18(struct ieee80211_hw *VAR_5,
         struct ieee80211_vif *VAR_6,
         struct ieee80211_channel *VAR_7,
         int VAR_8,
         enum ieee80211_roc_type VAR_9)
{
 struct iwl_mvm *VAR_10 = FUNC_2(VAR_5);
 struct iwl_mvm_vif *VAR_11 = FUNC_15(VAR_6);
 struct cfg80211_chan_def VAR_12;
 struct iwl_mvm_phy_ctxt *VAR_13;
 int VAR_14, VAR_15;

 FUNC_0(VAR_10, "enter (%d, %d, %d)\n", VAR_7->hw_value,
      VAR_8, VAR_9);





 FUNC_5(&VAR_10->roc_done_wk);

 FUNC_16(&VAR_10->mutex);

 switch (VAR_6->type) {
 case 128:
  if (FUNC_6(&VAR_10->fw->ucode_capa,
    VAR_2)) {

   VAR_14 = FUNC_13(VAR_10, VAR_7,
             VAR_6, VAR_8);
   goto out_unlock;
  }
  FUNC_1(VAR_10, "hotspot not supported\n");
  VAR_14 = -VAR_0;
  goto out_unlock;
 case 129:

  break;
 default:
  FUNC_1(VAR_10, "vif isn't P2P_DEVICE: %d\n", VAR_6->type);
  VAR_14 = -VAR_0;
  goto out_unlock;
 }

 for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++) {
  VAR_13 = &VAR_10->phy_ctxts[VAR_15];
  if (VAR_13->ref == 0 || VAR_11->phy_ctxt == VAR_13)
   continue;

  if (VAR_13->ref && VAR_7 == VAR_13->channel) {




   VAR_14 = FUNC_8(VAR_10, VAR_6);
   if (FUNC_3(VAR_14, "Failed unbinding P2P_DEVICE\n"))
    goto out_unlock;

   FUNC_12(VAR_10, VAR_11->phy_ctxt);


   VAR_11->phy_ctxt = VAR_13;

   VAR_14 = FUNC_7(VAR_10, VAR_6);
   if (FUNC_3(VAR_14, "Failed binding P2P_DEVICE\n"))
    goto out_unlock;

   FUNC_11(VAR_10, VAR_11->phy_ctxt);
   goto schedule_time_event;
  }
 }


 if (VAR_7 == VAR_11->phy_ctxt->channel)
  goto schedule_time_event;

 FUNC_4(&VAR_12, VAR_7, VAR_3);





 if (VAR_11->phy_ctxt->ref == 1) {
  VAR_14 = FUNC_10(VAR_10, VAR_11->phy_ctxt,
            &VAR_12, 1, 1);
  if (VAR_14)
   goto out_unlock;
 } else {





  VAR_13 = FUNC_9(VAR_10);
  if (!VAR_13) {
   VAR_14 = -VAR_1;
   goto out_unlock;
  }

  VAR_14 = FUNC_10(VAR_10, VAR_13, &VAR_12,
            1, 1);
  if (VAR_14) {
   FUNC_1(VAR_10, "Failed to change PHY context\n");
   goto out_unlock;
  }


  VAR_14 = FUNC_8(VAR_10, VAR_6);
  if (FUNC_3(VAR_14, "Failed unbinding P2P_DEVICE\n"))
   goto out_unlock;

  FUNC_12(VAR_10, VAR_11->phy_ctxt);


  VAR_11->phy_ctxt = VAR_13;

  VAR_14 = FUNC_7(VAR_10, VAR_6);
  if (FUNC_3(VAR_14, "Failed binding P2P_DEVICE\n"))
   goto out_unlock;

  FUNC_11(VAR_10, VAR_11->phy_ctxt);
 }

schedule_time_event:

 VAR_14 = FUNC_14(VAR_10, VAR_6, VAR_8, VAR_9);

out_unlock:
 FUNC_17(&VAR_10->mutex);
 FUNC_0(VAR_10, "leave\n");
 return VAR_14;
}
