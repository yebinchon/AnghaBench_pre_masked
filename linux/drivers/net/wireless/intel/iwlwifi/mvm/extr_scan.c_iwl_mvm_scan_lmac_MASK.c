
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct iwl_scan_req_lmac {TYPE_4__* channel_opt; TYPE_3__* schedule; int direct_scan; int tx_cmd; void* filter_flags; int flags; void* scan_flags; void* delay; scalar_t__ n_channels; void* iter_num; int rx_chain_select; scalar_t__ data; } ;
struct iwl_scan_probe_req_v1 {int dummy; } ;
struct iwl_scan_channel_cfg_lmac {int dummy; } ;
struct iwl_mvm_scan_params {int n_scan_plans; int delay; int preq; scalar_t__ n_channels; TYPE_5__** channels; struct cfg80211_sched_scan_plan* scan_plans; int no_cck; } ;
struct iwl_mvm {int mutex; TYPE_2__* fw; struct iwl_scan_req_lmac* scan_cmd; } ;
struct ieee80211_vif {int dummy; } ;
struct cfg80211_sched_scan_plan {int interval; int iterations; } ;
struct TYPE_10__ {int band; } ;
struct TYPE_9__ {void* non_ebs_ratio; void* flags; } ;
struct TYPE_8__ {int iterations; int full_scan_mul; void* delay; } ;
struct TYPE_6__ {int n_scan_channels; } ;
struct TYPE_7__ {TYPE_1__ ucode_capa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct iwl_mvm*,TYPE_5__**,scalar_t__,int,struct iwl_scan_req_lmac*) ;
 int FUNC_4 (struct iwl_mvm*,int ,int ) ;
 int FUNC_5 (struct iwl_mvm*,struct iwl_scan_req_lmac*,struct iwl_mvm_scan_params*) ;
 int FUNC_6 (struct iwl_mvm*,struct iwl_mvm_scan_params*,struct ieee80211_vif*) ;
 int FUNC_7 (struct iwl_mvm*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct iwl_scan_probe_req_v1*,int *) ;
 scalar_t__ FUNC_10 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_11 (struct iwl_mvm_scan_params*,int ,int*) ;
 int FUNC_12 (struct iwl_scan_req_lmac*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct iwl_scan_req_lmac*,int ,int ) ;

__attribute__((used)) static int FUNC_15(struct iwl_mvm *VAR_9, struct ieee80211_vif *VAR_10,
        struct iwl_mvm_scan_params *VAR_11)
{
 struct iwl_scan_req_lmac *VAR_12 = VAR_9->scan_cmd;
 struct iwl_scan_probe_req_v1 *VAR_13 =
  (void *)(VAR_12->data + sizeof(struct iwl_scan_channel_cfg_lmac) *
    VAR_9->fw->ucode_capa.n_scan_channels);
 u32 VAR_14 = 0;
 int VAR_15;

 FUNC_13(&VAR_9->mutex);

 FUNC_14(VAR_12, 0, FUNC_12(VAR_12));

 if (FUNC_0(VAR_11->n_scan_plans > VAR_2))
  return -VAR_0;

 FUNC_5(VAR_9, VAR_12, VAR_11);

 VAR_12->rx_chain_select = FUNC_7(VAR_9);
 VAR_12->iter_num = FUNC_2(1);
 VAR_12->n_channels = (u8)VAR_11->n_channels;

 VAR_12->delay = FUNC_2(VAR_11->delay);

 VAR_12->scan_flags = FUNC_2(FUNC_6(VAR_9, VAR_11,
             VAR_10));

 VAR_12->flags = FUNC_8(VAR_11->channels[0]->band);
 VAR_12->filter_flags = FUNC_2(VAR_7 |
     VAR_8);
 FUNC_4(VAR_9, VAR_12->tx_cmd, VAR_11->no_cck);
 FUNC_11(VAR_11, VAR_12->direct_scan, &VAR_14);


 VAR_14 <<= 1;

 for (VAR_15 = 0; VAR_15 < VAR_11->n_scan_plans; VAR_15++) {
  struct cfg80211_sched_scan_plan *VAR_16 =
   &VAR_11->scan_plans[VAR_15];

  VAR_12->schedule[VAR_15].delay =
   FUNC_1(VAR_16->interval);
  VAR_12->schedule[VAR_15].iterations = VAR_16->iterations;
  VAR_12->schedule[VAR_15].full_scan_mul = 1;
 }







 if (!VAR_12->schedule[VAR_15 - 1].iterations)
  VAR_12->schedule[VAR_15 - 1].iterations = 0xff;

 if (FUNC_10(VAR_9, VAR_10)) {
  VAR_12->channel_opt[0].flags =
   FUNC_1(VAR_4 |
        VAR_5 |
        VAR_3);
  VAR_12->channel_opt[0].non_ebs_ratio =
   FUNC_1(VAR_1);
  VAR_12->channel_opt[1].flags =
   FUNC_1(VAR_4 |
        VAR_5 |
        VAR_3);
  VAR_12->channel_opt[1].non_ebs_ratio =
   FUNC_1(VAR_6);
 }

 FUNC_3(VAR_9, VAR_11->channels,
           VAR_11->n_channels, VAR_14, VAR_12);

 FUNC_9(VAR_13, &VAR_11->preq);

 return 0;
}
