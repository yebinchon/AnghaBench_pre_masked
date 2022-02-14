
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
typedef int u32 ;
typedef int u16 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct TYPE_13__ {int data; int tx_cmd; void* switch_time_offset; } ;
struct TYPE_9__ {void* max_offchan_duration; void* switch_timeout; void* switch_time; void* frame_timestamp; } ;
struct iwl_tdls_channel_switch_cmd_tail {TYPE_6__ frame; TYPE_2__ timing; } ;
struct iwl_tdls_channel_switch_cmd {int switch_type; int ci; void* peer_sta_id; int member_0; } ;
struct iwl_mvm_sta {int sta_id; } ;
struct cfg80211_chan_def {scalar_t__ chan; } ;
struct TYPE_8__ {struct cfg80211_chan_def chandef; } ;
struct TYPE_14__ {scalar_t__ state; int cur_sta_id; TYPE_1__ peer; } ;
struct iwl_mvm {TYPE_7__ tdls_cs; int mutex; } ;
struct TYPE_10__ {int dtim_period; int beacon_int; } ;
struct ieee80211_vif {TYPE_3__ bss_conf; int chanctx_conf; } ;
struct TYPE_12__ {TYPE_4__* hw_key; } ;
struct ieee80211_tx_info {TYPE_5__ control; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_hdr {int frame_control; } ;
struct ieee80211_chanctx_conf {struct cfg80211_chan_def def; } ;
typedef enum iwl_tdls_channel_switch_type { ____Placeholder_iwl_tdls_channel_switch_type } iwl_tdls_channel_switch_type ;
typedef int cmd ;
struct TYPE_11__ {scalar_t__ cipher; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct iwl_mvm*,char*,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ VAR_11 ;
 void* FUNC_5 (int) ;
 struct ieee80211_sta* FUNC_6 (struct ieee80211_vif*,int const*) ;
 struct iwl_tdls_channel_switch_cmd_tail* FUNC_7 (struct iwl_mvm*,int *) ;
 int FUNC_8 (struct iwl_mvm*) ;
 int FUNC_9 (struct iwl_mvm*,int ,int ,int,struct iwl_tdls_channel_switch_cmd*) ;
 int FUNC_10 (struct iwl_mvm*,int *,struct cfg80211_chan_def*) ;
 int FUNC_11 (struct iwl_mvm*,struct sk_buff*,int *,struct ieee80211_tx_info*,int) ;
 int FUNC_12 (struct ieee80211_tx_info*,int *) ;
 int FUNC_13 (struct iwl_mvm*,int *,struct ieee80211_tx_info*,struct ieee80211_sta*,int ) ;
 struct iwl_mvm_sta* FUNC_14 (struct ieee80211_sta*) ;
 int FUNC_15 (struct iwl_mvm*,int,int const*,int,int) ;
 int FUNC_16 (struct iwl_mvm*,scalar_t__) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int ,scalar_t__,int ) ;
 struct ieee80211_chanctx_conf* FUNC_19 (int ) ;
 int FUNC_20 () ;
 int FUNC_21 () ;

__attribute__((used)) static int
FUNC_22(struct iwl_mvm *VAR_12,
       struct ieee80211_vif *VAR_13,
       enum iwl_tdls_channel_switch_type VAR_14,
       const u8 *VAR_15, bool VAR_16,
       u8 VAR_17,
       struct cfg80211_chan_def *VAR_18,
       u32 VAR_19, u16 VAR_20,
       u16 VAR_21, struct sk_buff *VAR_22,
       u32 VAR_23)
{
 struct ieee80211_sta *VAR_24;
 struct iwl_mvm_sta *VAR_25;
 struct ieee80211_tx_info *VAR_26;
 struct ieee80211_hdr *VAR_27;
 struct iwl_tdls_channel_switch_cmd VAR_28 = {0};
 struct iwl_tdls_channel_switch_cmd_tail *VAR_29 =
  FUNC_7(VAR_12, &VAR_28.ci);
 u16 VAR_30 = sizeof(VAR_28) - FUNC_8(VAR_12);
 int VAR_31;

 FUNC_17(&VAR_12->mutex);

 VAR_31 = FUNC_15(VAR_12, VAR_14, VAR_15, VAR_16,
     VAR_19);
 if (VAR_31)
  return VAR_31;

 if (!VAR_22 || FUNC_3(VAR_22->len > VAR_7)) {
  VAR_31 = -VAR_0;
  goto out;
 }

 VAR_28.switch_type = VAR_14;
 VAR_29->timing.frame_timestamp = FUNC_5(VAR_19);
 VAR_29->timing.switch_time = FUNC_5(VAR_20);
 VAR_29->timing.switch_timeout = FUNC_5(VAR_21);

 FUNC_20();
 VAR_24 = FUNC_6(VAR_13, VAR_15);
 if (!VAR_24) {
  FUNC_21();
  VAR_31 = -VAR_1;
  goto out;
 }
 VAR_25 = FUNC_14(VAR_24);
 VAR_28.peer_sta_id = FUNC_5(VAR_25->sta_id);

 if (!VAR_18) {
  if (VAR_12->tdls_cs.state == VAR_5 &&
      VAR_12->tdls_cs.peer.chandef.chan) {

   VAR_18 = &VAR_12->tdls_cs.peer.chandef;
  } else if (VAR_12->tdls_cs.state == VAR_2 &&
      VAR_14 == VAR_9) {

   struct ieee80211_chanctx_conf *VAR_32 =
     FUNC_19(VAR_13->chanctx_conf);

   if (FUNC_4(!VAR_32)) {
    FUNC_21();
    goto out;
   }

   VAR_18 = &VAR_32->def;
  }
 }

 if (VAR_18)
  FUNC_10(VAR_12, &VAR_28.ci, VAR_18);


 VAR_29->timing.max_offchan_duration =
   FUNC_5(FUNC_2(VAR_13->bss_conf.dtim_period *
          VAR_13->bss_conf.beacon_int) / 2);


 VAR_29->frame.switch_time_offset = FUNC_5(VAR_23 + 2);

 VAR_26 = FUNC_0(VAR_22);
 VAR_27 = (void *)VAR_22->data;
 if (VAR_26->control.hw_key) {
  if (VAR_26->control.hw_key->cipher != VAR_11) {
   FUNC_21();
   VAR_31 = -VAR_0;
   goto out;
  }
  FUNC_12(VAR_26, &VAR_29->frame.tx_cmd);
 }

 FUNC_11(VAR_12, VAR_22, &VAR_29->frame.tx_cmd, VAR_26,
      VAR_25->sta_id);

 FUNC_13(VAR_12, &VAR_29->frame.tx_cmd, VAR_26, VAR_24,
    VAR_27->frame_control);
 FUNC_21();

 FUNC_18(VAR_29->frame.data, VAR_22->data, VAR_22->len);

 VAR_31 = FUNC_9(VAR_12, VAR_8, 0, VAR_30, &VAR_28);
 if (VAR_31) {
  FUNC_1(VAR_12, "Failed to send TDLS_CHANNEL_SWITCH cmd: %d\n",
   VAR_31);
  goto out;
 }


 if (VAR_14 != VAR_9) {
  VAR_12->tdls_cs.cur_sta_id = VAR_25->sta_id;
  FUNC_16(VAR_12,
          VAR_14 == VAR_10 ?
          VAR_5 :
          VAR_4);
 } else {
  FUNC_16(VAR_12, VAR_6);
 }

out:


 if (VAR_31)
  FUNC_16(VAR_12, VAR_3);

 return VAR_31;
}
