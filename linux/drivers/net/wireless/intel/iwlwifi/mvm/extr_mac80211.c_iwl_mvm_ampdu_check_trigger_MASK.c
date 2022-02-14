
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct iwl_mvm_tid_data {int ssn; } ;
struct iwl_mvm_sta {struct iwl_mvm_tid_data* tid_data; } ;
struct iwl_mvm {int fwrt; } ;
struct iwl_fw_dbg_trigger_tlv {scalar_t__ data; } ;
struct iwl_fw_dbg_trigger_ba {int rx_ba_stop; int rx_ba_start; int tx_ba_stop; int tx_ba_start; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int addr; } ;
typedef enum ieee80211_ampdu_mlme_action { ____Placeholder_ieee80211_ampdu_mlme_action } ieee80211_ampdu_mlme_action ;


 int FUNC_0 (struct iwl_mvm*,struct iwl_fw_dbg_trigger_tlv*,int ,size_t,char*,int ,size_t,...) ;
 int VAR_0 ;




 int FUNC_1 (struct ieee80211_vif*) ;
 struct iwl_fw_dbg_trigger_tlv* FUNC_2 (int *,int ,int ) ;
 struct iwl_mvm_sta* FUNC_3 (struct ieee80211_sta*) ;

__attribute__((used)) static void
FUNC_4(struct iwl_mvm *VAR_1, struct ieee80211_vif *VAR_2,
       struct ieee80211_sta *VAR_3, u16 VAR_4, u16 VAR_5,
       enum ieee80211_ampdu_mlme_action VAR_6)
{
 struct iwl_fw_dbg_trigger_tlv *VAR_7;
 struct iwl_fw_dbg_trigger_ba *VAR_8;

 VAR_7 = FUNC_2(&VAR_1->fwrt, FUNC_1(VAR_2),
         VAR_0);
 if (!VAR_7)
  return;

 VAR_8 = (void *)VAR_7->data;

 switch (VAR_6) {
 case 129: {
  struct iwl_mvm_sta *VAR_9 = FUNC_3(VAR_3);
  struct iwl_mvm_tid_data *VAR_10 = &VAR_9->tid_data[VAR_4];

  FUNC_0(VAR_1, VAR_7, VAR_8->tx_ba_start, VAR_4,
     "TX AGG START: MAC %pM tid %d ssn %d\n",
     VAR_3->addr, VAR_4, VAR_10->ssn);
  break;
  }
 case 128:
  FUNC_0(VAR_1, VAR_7, VAR_8->tx_ba_stop, VAR_4,
     "TX AGG STOP: MAC %pM tid %d\n",
     VAR_3->addr, VAR_4);
  break;
 case 131:
  FUNC_0(VAR_1, VAR_7, VAR_8->rx_ba_start, VAR_4,
     "RX AGG START: MAC %pM tid %d ssn %d\n",
     VAR_3->addr, VAR_4, VAR_5);
  break;
 case 130:
  FUNC_0(VAR_1, VAR_7, VAR_8->rx_ba_stop, VAR_4,
     "RX AGG STOP: MAC %pM tid %d\n",
     VAR_3->addr, VAR_4);
  break;
 default:
  break;
 }
}
