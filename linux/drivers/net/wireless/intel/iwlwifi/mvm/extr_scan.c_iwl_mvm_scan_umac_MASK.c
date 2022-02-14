
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct iwl_ssid_ie {int dummy; } ;
struct iwl_scan_umac_chan_param {int flags; int count; } ;
struct iwl_scan_req_umac_tail_v2 {struct iwl_ssid_ie* direct_scan; int preq; void* delay; TYPE_4__* schedule; } ;
struct iwl_scan_req_umac_tail_v1 {struct iwl_ssid_ie* direct_scan; int preq; } ;
struct TYPE_7__ {int general_flags2; void** num_of_fragments; } ;
struct iwl_scan_req_umac {void* flags; int scan_start_mac_id; TYPE_3__ v8; void* general_flags; void* uid; } ;
struct iwl_scan_channel_cfg_umac {int dummy; } ;
struct iwl_mvm_vif {int id; } ;
struct iwl_mvm_scan_params {int n_scan_plans; int delay; int n_channels; int channels; int preq; struct cfg80211_sched_scan_plan* scan_plans; } ;
struct iwl_mvm {int* scan_uid_status; int mutex; TYPE_2__* fw; struct iwl_scan_req_umac* scan_cmd; } ;
struct ieee80211_vif {int dummy; } ;
struct cfg80211_sched_scan_plan {int iterations; int interval; } ;
struct TYPE_8__ {int iter_count; void* interval; } ;
struct TYPE_5__ {int n_scan_channels; } ;
struct TYPE_6__ {TYPE_1__ ucode_capa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 scalar_t__ FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 struct iwl_scan_umac_chan_param* FUNC_3 (struct iwl_mvm*) ;
 void* FUNC_4 (struct iwl_mvm*) ;
 scalar_t__ FUNC_5 (struct iwl_mvm*) ;
 int FUNC_6 (struct iwl_mvm*) ;
 scalar_t__ FUNC_7 (struct iwl_mvm*) ;
 scalar_t__ FUNC_8 (struct iwl_mvm*) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (struct iwl_mvm*,int ) ;
 int FUNC_11 (struct iwl_mvm*,struct iwl_scan_req_umac*,struct iwl_mvm_scan_params*) ;
 int FUNC_12 (struct iwl_mvm*,struct iwl_mvm_scan_params*,struct ieee80211_vif*) ;
 scalar_t__ FUNC_13 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_14 (struct iwl_mvm*,int ,int ,int ,void*) ;
 struct iwl_mvm_vif* FUNC_15 (struct ieee80211_vif*) ;
 int FUNC_16 (struct iwl_mvm_scan_params*,struct iwl_ssid_ie*,int *) ;
 int FUNC_17 (struct iwl_scan_req_umac*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (struct iwl_scan_req_umac*,int ,int ) ;

__attribute__((used)) static int FUNC_20(struct iwl_mvm *VAR_15, struct ieee80211_vif *VAR_16,
        struct iwl_mvm_scan_params *VAR_17,
        int VAR_18)
{
 struct iwl_scan_req_umac *VAR_19 = VAR_15->scan_cmd;
 struct iwl_scan_umac_chan_param *VAR_20;
 void *VAR_21 = FUNC_4(VAR_15);
 void *VAR_22 = VAR_21 + sizeof(struct iwl_scan_channel_cfg_umac) *
  VAR_15->fw->ucode_capa.n_scan_channels;
 struct iwl_scan_req_umac_tail_v2 *VAR_23 =
  (struct iwl_scan_req_umac_tail_v2 *)VAR_22;
 struct iwl_scan_req_umac_tail_v1 *VAR_24;
 struct iwl_ssid_ie *VAR_25;
 int VAR_26, VAR_27;
 u32 VAR_28 = 0;
 u8 VAR_29 = 0;
 u16 VAR_30;
 struct iwl_mvm_vif *VAR_31 = FUNC_15(VAR_16);

 VAR_20 = FUNC_3(VAR_15);

 FUNC_18(&VAR_15->mutex);

 if (FUNC_0(VAR_17->n_scan_plans > VAR_1))
  return -VAR_0;

 VAR_26 = FUNC_10(VAR_15, 0);
 if (VAR_26 < 0)
  return VAR_26;

 FUNC_19(VAR_19, 0, FUNC_17(VAR_19));

 FUNC_11(VAR_15, VAR_19, VAR_17);

 VAR_15->scan_uid_status[VAR_26] = VAR_18;

 VAR_19->uid = FUNC_2(VAR_26);
 VAR_30 = FUNC_12(VAR_15, VAR_17, VAR_16);
 VAR_19->general_flags = FUNC_1(VAR_30);
 if (FUNC_5(VAR_15)) {
  if (VAR_30 & VAR_11)
   VAR_19->v8.num_of_fragments[VAR_14] =
       VAR_8;
  if (VAR_30 & VAR_12)
   VAR_19->v8.num_of_fragments[VAR_13] =
       VAR_8;

  VAR_19->v8.general_flags2 =
   VAR_10;
 }

 VAR_19->scan_start_mac_id = VAR_31->id;

 if (VAR_18 == VAR_3 || VAR_18 == VAR_2)
  VAR_19->flags = FUNC_2(VAR_9);

 if (FUNC_13(VAR_15, VAR_16)) {
  VAR_29 = VAR_5 |
    VAR_6 |
    VAR_4;


  if (FUNC_7(VAR_15)) {
   if (VAR_30 &
       VAR_12 ||
       (!FUNC_6(VAR_15) &&
        VAR_30 & VAR_11))
    VAR_29 |= VAR_7;
  }
 }

 VAR_20->flags = VAR_29;
 VAR_20->count = VAR_17->n_channels;

 for (VAR_27 = 0; VAR_27 < VAR_17->n_scan_plans; VAR_27++) {
  struct cfg80211_sched_scan_plan *VAR_32 =
   &VAR_17->scan_plans[VAR_27];

  VAR_23->schedule[VAR_27].iter_count = VAR_32->iterations;
  VAR_23->schedule[VAR_27].interval =
   FUNC_1(VAR_32->interval);
 }







 if (!VAR_23->schedule[VAR_27 - 1].iter_count)
  VAR_23->schedule[VAR_27 - 1].iter_count = 0xff;

 VAR_23->delay = FUNC_1(VAR_17->delay);

 if (FUNC_8(VAR_15)) {
  VAR_23->preq = VAR_17->preq;
  VAR_25 = VAR_23->direct_scan;
 } else {
  VAR_24 = (struct iwl_scan_req_umac_tail_v1 *)VAR_22;
  FUNC_9(&VAR_24->preq,
        &VAR_17->preq);
  VAR_25 = VAR_24->direct_scan;
 }
 FUNC_16(VAR_17, VAR_25, &VAR_28);
 FUNC_14(VAR_15, VAR_17->channels,
           VAR_17->n_channels, VAR_28,
           VAR_21);
 return 0;
}
