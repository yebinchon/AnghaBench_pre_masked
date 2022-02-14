
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ sta_id; } ;
struct iwl_mvm_vif {TYPE_2__ bcast_sta; TYPE_2__ mcast_sta; int color; int id; } ;
struct iwl_mvm_sta {scalar_t__ mac_id_n_color; } ;
struct iwl_mvm {TYPE_1__* fw; int mutex; int * fw_id_to_mac_id; } ;
struct ieee80211_sta {int dummy; } ;
struct TYPE_3__ {int ucode_capa; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct ieee80211_sta*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct iwl_mvm*,struct iwl_mvm_vif*,TYPE_2__*,int) ;
 struct iwl_mvm_sta* FUNC_5 (struct ieee80211_sta*) ;
 int FUNC_6 (struct iwl_mvm*,struct ieee80211_sta*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct ieee80211_sta* FUNC_9 (int ,int ) ;

void FUNC_10(struct iwl_mvm *VAR_2,
           struct iwl_mvm_vif *VAR_3,
           bool VAR_4)
{
 struct ieee80211_sta *VAR_5;
 struct iwl_mvm_sta *VAR_6;
 int VAR_7;

 FUNC_7(&VAR_2->mutex);


 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_2->fw_id_to_mac_id); VAR_7++) {
  VAR_5 = FUNC_9(VAR_2->fw_id_to_mac_id[VAR_7],
      FUNC_8(&VAR_2->mutex));
  if (FUNC_2(VAR_5))
   continue;

  VAR_6 = FUNC_5(VAR_5);
  if (VAR_6->mac_id_n_color !=
      FUNC_1(VAR_3->id, VAR_3->color))
   continue;

  FUNC_6(VAR_2, VAR_5, VAR_4);
 }

 if (!FUNC_3(&VAR_2->fw->ucode_capa, VAR_1))
  return;


 if (VAR_3->mcast_sta.sta_id != VAR_0)
  FUNC_4(VAR_2, VAR_3,
        &VAR_3->mcast_sta, VAR_4);





 if (!VAR_4 && VAR_3->bcast_sta.sta_id != VAR_0)
  FUNC_4(VAR_2, VAR_3,
        &VAR_3->bcast_sta, VAR_4);
}
