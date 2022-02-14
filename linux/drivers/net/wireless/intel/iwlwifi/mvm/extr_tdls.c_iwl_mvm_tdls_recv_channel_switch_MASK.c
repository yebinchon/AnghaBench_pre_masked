
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ state; size_t cur_sta_id; int dwork; } ;
struct iwl_mvm {int mutex; TYPE_2__ tdls_cs; int * fw_id_to_mac_id; } ;
struct TYPE_3__ {int dtim_period; int beacon_int; } ;
struct ieee80211_vif {TYPE_1__ bss_conf; } ;
struct ieee80211_tdls_ch_sw_params {scalar_t__ action_code; int ch_sw_tm_ie; int tmpl_skb; int switch_timeout; int switch_time; int timestamp; int chandef; struct ieee80211_sta* sta; int status; } ;
struct ieee80211_sta {int tdls_initiator; int addr; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum iwl_tdls_channel_switch_type { ____Placeholder_iwl_tdls_channel_switch_type } iwl_tdls_channel_switch_type ;


 int FUNC_0 (struct iwl_mvm*,char*,char const*,int ,int ) ;
 struct iwl_mvm* FUNC_1 (struct ieee80211_hw*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (struct iwl_mvm*,struct ieee80211_vif*,int,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (struct iwl_mvm*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct ieee80211_sta* FUNC_9 (int ,int ) ;
 int VAR_7 ;

void
FUNC_10(struct ieee80211_hw *VAR_8,
     struct ieee80211_vif *VAR_9,
     struct ieee80211_tdls_ch_sw_params *VAR_10)
{
 struct iwl_mvm *VAR_11 = FUNC_1(VAR_8);
 enum iwl_tdls_channel_switch_type VAR_12;
 unsigned int VAR_13;
 const char *VAR_14 =
  VAR_10->action_code == VAR_5 ?
  "REQ" : "RESP";

 FUNC_7(&VAR_11->mutex);

 FUNC_0(VAR_11,
         "Received TDLS ch switch action %s from %pM status %d\n",
         VAR_14, VAR_10->sta->addr, VAR_10->status);





 if (VAR_10->action_code == VAR_6 &&
     VAR_10->status != 0 &&
     VAR_11->tdls_cs.state == VAR_2 &&
     VAR_11->tdls_cs.cur_sta_id != VAR_0) {
  struct ieee80211_sta *VAR_15;


  VAR_15 = FUNC_9(
    VAR_11->fw_id_to_mac_id[VAR_11->tdls_cs.cur_sta_id],
    FUNC_4(&VAR_11->mutex));
  if (VAR_15 == VAR_10->sta) {
   FUNC_3(VAR_11,
           VAR_1);
   goto retry;
  }
 }

 VAR_12 = (VAR_10->action_code == VAR_5) ?
        VAR_4 : VAR_3;

 FUNC_2(VAR_11, VAR_9, VAR_12, VAR_10->sta->addr,
        VAR_10->sta->tdls_initiator, 0,
        VAR_10->chandef, VAR_10->timestamp,
        VAR_10->switch_time,
        VAR_10->switch_timeout,
        VAR_10->tmpl_skb,
        VAR_10->ch_sw_tm_ie);

retry:

 VAR_13 = VAR_9->bss_conf.dtim_period * VAR_9->bss_conf.beacon_int *
  1024 / 1000;
 FUNC_5(VAR_7, &VAR_11->tdls_cs.dwork,
    FUNC_6(VAR_13));
 FUNC_8(&VAR_11->mutex);
}
