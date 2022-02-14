
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u16 ;
struct iwl_mvm_vif {size_t id; int uapsd_nonagg_detected_wk; int ap_sta_id; } ;
struct iwl_mvm_tcm_mac {int opened_rx_ba_sessions; } ;
struct TYPE_5__ {struct iwl_mvm_tcm_mac* data; } ;
struct iwl_mvm {int mutex; TYPE_2__ tcm; TYPE_1__* nvm_data; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int addr; } ;
struct ieee80211_hw {int dummy; } ;
struct ieee80211_ampdu_params {int action; size_t tid; size_t ssn; size_t buf_size; int amsdu; size_t timeout; struct ieee80211_sta* sta; } ;
typedef enum ieee80211_ampdu_mlme_action { ____Placeholder_ieee80211_ampdu_mlme_action } ieee80211_ampdu_mlme_action ;
struct TYPE_6__ {int sta_id; } ;
struct TYPE_4__ {int sku_cap_11n_enable; } ;


 int VAR_0 ;
 int VAR_1 ;







 int FUNC_0 (struct iwl_mvm*,char*,int ,size_t,int) ;
 struct iwl_mvm* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct iwl_mvm*,struct ieee80211_vif*,struct ieee80211_sta*,size_t,size_t,int) ;
 TYPE_3__* FUNC_7 (struct ieee80211_sta*) ;
 int FUNC_8 (struct iwl_mvm*,struct ieee80211_sta*,size_t,size_t,int,size_t,size_t) ;
 int FUNC_9 (struct iwl_mvm*,struct ieee80211_vif*,struct ieee80211_sta*,size_t) ;
 int FUNC_10 (struct iwl_mvm*,struct ieee80211_vif*,struct ieee80211_sta*,size_t,size_t,int) ;
 int FUNC_11 (struct iwl_mvm*,struct ieee80211_vif*,struct ieee80211_sta*,size_t,size_t*) ;
 int FUNC_12 (struct iwl_mvm*,struct ieee80211_vif*,struct ieee80211_sta*,size_t) ;
 struct iwl_mvm_vif* FUNC_13 (struct ieee80211_vif*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(struct ieee80211_hw *VAR_2,
        struct ieee80211_vif *VAR_3,
        struct ieee80211_ampdu_params *VAR_4)
{
 struct iwl_mvm *VAR_5 = FUNC_1(VAR_2);
 int VAR_6;
 struct ieee80211_sta *VAR_7 = VAR_4->sta;
 enum ieee80211_ampdu_mlme_action VAR_8 = VAR_4->action;
 u16 VAR_9 = VAR_4->tid;
 u16 *VAR_10 = &VAR_4->ssn;
 u16 VAR_11 = VAR_4->buf_size;
 bool VAR_12 = VAR_4->amsdu;
 u16 VAR_13 = VAR_4->timeout;

 FUNC_0(VAR_5, "A-MPDU action on addr %pM tid %d: action %d\n",
       VAR_7->addr, VAR_9, VAR_8);

 if (!(VAR_5->nvm_data->sku_cap_11n_enable))
  return -VAR_0;

 FUNC_14(&VAR_5->mutex);

 switch (VAR_8) {
 case 134:
  if (FUNC_13(VAR_3)->ap_sta_id ==
    FUNC_7(VAR_7)->sta_id) {
   struct iwl_mvm_vif *VAR_14;
   u16 VAR_15 = FUNC_13(VAR_3)->id;
   struct iwl_mvm_tcm_mac *VAR_16 = &VAR_5->tcm.data[VAR_15];

   VAR_16->opened_rx_ba_sessions = 1;
   VAR_14 = FUNC_13(VAR_3);
   FUNC_3(&VAR_14->uapsd_nonagg_detected_wk);
  }
  if (!FUNC_4()) {
   VAR_6 = -VAR_1;
   break;
  }
  VAR_6 = FUNC_8(VAR_5, VAR_7, VAR_9, *VAR_10, 1, VAR_11,
      VAR_13);
  break;
 case 133:
  VAR_6 = FUNC_8(VAR_5, VAR_7, VAR_9, 0, 0, VAR_11,
      VAR_13);
  break;
 case 131:
  if (!FUNC_5()) {
   VAR_6 = -VAR_1;
   break;
  }
  VAR_6 = FUNC_11(VAR_5, VAR_3, VAR_7, VAR_9, VAR_10);
  break;
 case 130:
  VAR_6 = FUNC_12(VAR_5, VAR_3, VAR_7, VAR_9);
  break;
 case 129:
 case 128:
  VAR_6 = FUNC_9(VAR_5, VAR_3, VAR_7, VAR_9);
  break;
 case 132:
  VAR_6 = FUNC_10(VAR_5, VAR_3, VAR_7, VAR_9,
           VAR_11, VAR_12);
  break;
 default:
  FUNC_2(1);
  VAR_6 = -VAR_1;
  break;
 }

 if (!VAR_6) {
  u16 VAR_17 = 0;

  if (VAR_8 == 134)
   VAR_17 = *VAR_10;

  FUNC_6(VAR_5, VAR_3, VAR_7, VAR_9,
         VAR_17, VAR_8);
 }
 FUNC_15(&VAR_5->mutex);

 return VAR_6;
}
