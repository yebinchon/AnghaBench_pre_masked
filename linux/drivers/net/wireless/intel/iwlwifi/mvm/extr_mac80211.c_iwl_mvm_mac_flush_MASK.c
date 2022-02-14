
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_mvm_vif {int ap_sta_id; } ;
struct iwl_mvm_sta {int tfd_queue_msk; struct ieee80211_vif* vif; } ;
struct iwl_mvm {int trans; int mutex; int * fw_id_to_mac_id; int add_stream_wk; } ;
struct ieee80211_vif {scalar_t__ type; } ;
struct ieee80211_sta {int tdls; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct ieee80211_sta*) ;
 int FUNC_2 (struct iwl_mvm*,char*) ;
 struct iwl_mvm* FUNC_3 (struct ieee80211_hw*) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct iwl_mvm*,int ,int) ;
 scalar_t__ FUNC_7 (struct iwl_mvm*,struct iwl_mvm_sta*,int,int ) ;
 scalar_t__ FUNC_8 (struct iwl_mvm*) ;
 struct iwl_mvm_sta* FUNC_9 (struct ieee80211_sta*) ;
 struct iwl_mvm_vif* FUNC_10 (struct ieee80211_vif*) ;
 int FUNC_11 (struct iwl_mvm*,struct iwl_mvm_sta*) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 struct ieee80211_sta* FUNC_16 (int ,int ) ;

__attribute__((used)) static void FUNC_17(struct ieee80211_hw *VAR_1,
         struct ieee80211_vif *VAR_2, u32 VAR_3, bool VAR_4)
{
 struct iwl_mvm *VAR_5 = FUNC_3(VAR_1);
 struct iwl_mvm_vif *VAR_6;
 struct iwl_mvm_sta *VAR_7;
 struct ieee80211_sta *VAR_8;
 int VAR_9;
 u32 VAR_10 = 0;

 if (!VAR_2) {
  FUNC_6(VAR_5, VAR_3, VAR_4);
  return;
 }

 if (VAR_2->type != VAR_0)
  return;


 FUNC_5(&VAR_5->add_stream_wk);

 FUNC_14(&VAR_5->mutex);
 VAR_6 = FUNC_10(VAR_2);


 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_5->fw_id_to_mac_id); VAR_9++) {
  VAR_8 = FUNC_16(VAR_5->fw_id_to_mac_id[VAR_9],
      FUNC_13(&VAR_5->mutex));
  if (FUNC_1(VAR_8))
   continue;

  VAR_7 = FUNC_9(VAR_8);
  if (VAR_7->vif != VAR_2)
   continue;


  FUNC_4(VAR_9 != VAR_6->ap_sta_id && !VAR_8->tdls);

  if (VAR_4) {
   if (FUNC_7(VAR_5, VAR_7, 0, 0))
    FUNC_2(VAR_5, "flush request fail\n");
  } else {
   VAR_10 |= VAR_7->tfd_queue_msk;
   if (FUNC_8(VAR_5))
    FUNC_11(VAR_5, VAR_7);
  }
 }

 FUNC_15(&VAR_5->mutex);




 if (!VAR_4 && !FUNC_8(VAR_5))
  FUNC_12(VAR_5->trans, VAR_10);
}
