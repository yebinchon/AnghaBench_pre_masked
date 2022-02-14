
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct ieee80211_supported_band {int n_channels; TYPE_4__* channels; } ;
struct ieee80211_hw {int queues; int max_rates; int max_rate_tries; int sta_data_size; TYPE_3__* wiphy; scalar_t__ extra_tx_headroom; struct cw1200_common* priv; } ;
struct cw1200_sta_priv {int dummy; } ;
struct TYPE_6__ {int done; int lock; } ;
struct TYPE_5__ {int timeout; int probe_work; int work; int lock; } ;
struct cw1200_common {int hw_type; int ba_rx_tid_mask; int ba_tx_tid_mask; int rts_threshold; TYPE_2__ wsm_cmd; int wsm_cmd_buf; int ps_mode_switch_done; int wsm_startup_done; int wsm_cmd_wq; int channel_switch_done; int tx_queue_stats; int * tx_queue; int mcast_timeout; int set_beacon_wakeup_period_work; int update_filtering_work; int linkid_reset_work; int link_id_gc_work; int link_id_work; int multicast_stop_work; int multicast_start_work; int set_tim_work; int set_cts_work; int ps_state_lock; int bss_loss_lock; int bss_params_work; int bss_loss_work; int event_handler; int event_queue; int event_queue_lock; int tx_policy_upload_work; int wep_key_work; int join_complete_work; int unjoin_work; int join_timeout; int clear_recent_scan_work; TYPE_1__ scan; int workqueue; int conf_mutex; int wsm_cmd_mux; int mcs_rates; int rates; int mode; struct ieee80211_hw* hw; } ;
struct TYPE_8__ {int max_power; scalar_t__ max_antenna_gain; scalar_t__ flags; } ;
struct TYPE_7__ {int interface_modes; int max_scan_ssids; scalar_t__* perm_addr; int max_scan_ie_len; struct ieee80211_supported_band** bands; int flags; int * wowlan; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_4 (struct ieee80211_hw*,int *) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_5 (char*) ;
 int VAR_22 ;
 int VAR_23 ;
 struct ieee80211_supported_band VAR_24 ;
 struct ieee80211_supported_band VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int * VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int *,int,int,int ) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,int ,int ,struct cw1200_common*) ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int * VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int FUNC_10 (scalar_t__*,int) ;
 struct ieee80211_hw* FUNC_11 (int,int *) ;
 int FUNC_12 (struct ieee80211_hw*) ;
 int FUNC_13 (struct ieee80211_hw*,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int ,int ) ;
 int FUNC_19 (struct cw1200_common*) ;
 int VAR_54 ;
 int FUNC_20 (int *) ;

__attribute__((used)) static struct ieee80211_hw *FUNC_21(const u8 *VAR_55,
      const bool VAR_56)
{
 int VAR_57, VAR_58;
 struct ieee80211_hw *VAR_59;
 struct cw1200_common *VAR_60;

 VAR_59 = FUNC_11(sizeof(struct cw1200_common), &VAR_40);
 if (!VAR_59)
  return ((void*)0);

 VAR_60 = VAR_59->priv;
 VAR_60->hw = VAR_59;
 VAR_60->hw_type = -1;
 VAR_60->mode = VAR_13;
 VAR_60->rates = VAR_42;
 VAR_60->mcs_rates = VAR_39;
 if (VAR_22 != -1)
  VAR_60->ba_rx_tid_mask = VAR_22;
 else
  VAR_60->ba_rx_tid_mask = 0xFF;
 if (VAR_23 != -1)
  VAR_60->ba_tx_tid_mask = VAR_23;
 else
  VAR_60->ba_tx_tid_mask = 0xff;

 FUNC_13(VAR_59, VAR_4);
 FUNC_13(VAR_59, VAR_19);
 FUNC_13(VAR_59, VAR_0);
 FUNC_13(VAR_59, VAR_1);
 FUNC_13(VAR_59, VAR_15);
 FUNC_13(VAR_59, VAR_17);
 FUNC_13(VAR_59, VAR_16);
 FUNC_13(VAR_59, VAR_18);

 VAR_59->wiphy->interface_modes = FUNC_0(VAR_12) |
       FUNC_0(VAR_7) |
       FUNC_0(VAR_8) |
       FUNC_0(VAR_9) |
       FUNC_0(VAR_10) |
       FUNC_0(VAR_11);





 VAR_59->wiphy->flags |= VAR_20;

 VAR_59->queues = 4;

 VAR_60->rts_threshold = -1;

 VAR_59->max_rates = 8;
 VAR_59->max_rate_tries = 15;
 VAR_59->extra_tx_headroom = VAR_21 +
  8;

 VAR_59->sta_data_size = sizeof(struct cw1200_sta_priv);

 VAR_59->wiphy->bands[VAR_5] = &VAR_24;
 if (VAR_56)
  VAR_59->wiphy->bands[VAR_6] = &VAR_25;


 for (VAR_58 = 0; VAR_58 < VAR_14; VAR_58++) {
  struct ieee80211_supported_band *VAR_61 = VAR_59->wiphy->bands[VAR_58];
  if (!VAR_61)
   continue;
  for (VAR_57 = 0; VAR_57 < VAR_61->n_channels; VAR_57++) {
   VAR_61->channels[VAR_57].flags = 0;
   VAR_61->channels[VAR_57].max_antenna_gain = 0;
   VAR_61->channels[VAR_57].max_power = 30;
  }
 }

 VAR_59->wiphy->max_scan_ssids = 2;
 VAR_59->wiphy->max_scan_ie_len = VAR_3;

 if (VAR_55)
  FUNC_4(VAR_59, (u8 *)VAR_55);
 else
  FUNC_4(VAR_59, VAR_35);


 if (VAR_59->wiphy->perm_addr[3] == 0 &&
     VAR_59->wiphy->perm_addr[4] == 0 &&
     VAR_59->wiphy->perm_addr[5] == 0) {
  FUNC_10(&VAR_59->wiphy->perm_addr[3], 3);
 }

 FUNC_15(&VAR_60->wsm_cmd_mux);
 FUNC_15(&VAR_60->conf_mutex);
 VAR_60->workqueue = FUNC_5("cw1200_wq");
 if (!VAR_60->workqueue) {
  FUNC_12(VAR_59);
  return ((void*)0);
 }

 FUNC_16(&VAR_60->scan.lock, 1);
 FUNC_3(&VAR_60->scan.work, VAR_44);
 FUNC_1(&VAR_60->scan.probe_work, VAR_41);
 FUNC_1(&VAR_60->scan.timeout, VAR_43);
 FUNC_1(&VAR_60->clear_recent_scan_work,
     VAR_28);
 FUNC_1(&VAR_60->join_timeout, VAR_31);
 FUNC_3(&VAR_60->unjoin_work, VAR_50);
 FUNC_3(&VAR_60->join_complete_work, VAR_30);
 FUNC_3(&VAR_60->wep_key_work, VAR_52);
 FUNC_3(&VAR_60->tx_policy_upload_work, VAR_54);
 FUNC_17(&VAR_60->event_queue_lock);
 FUNC_2(&VAR_60->event_queue);
 FUNC_3(&VAR_60->event_handler, VAR_29);
 FUNC_1(&VAR_60->bss_loss_work, VAR_26);
 FUNC_3(&VAR_60->bss_params_work, VAR_27);
 FUNC_17(&VAR_60->bss_loss_lock);
 FUNC_17(&VAR_60->ps_state_lock);
 FUNC_3(&VAR_60->set_cts_work, VAR_46);
 FUNC_3(&VAR_60->set_tim_work, VAR_47);
 FUNC_3(&VAR_60->multicast_start_work, VAR_37);
 FUNC_3(&VAR_60->multicast_stop_work, VAR_38);
 FUNC_3(&VAR_60->link_id_work, VAR_34);
 FUNC_1(&VAR_60->link_id_gc_work, VAR_32);
 FUNC_3(&VAR_60->linkid_reset_work, VAR_33);
 FUNC_3(&VAR_60->update_filtering_work, VAR_51);
 FUNC_3(&VAR_60->set_beacon_wakeup_period_work,
    VAR_45);
 FUNC_18(&VAR_60->mcast_timeout, VAR_36, 0);

 if (FUNC_9(&VAR_60->tx_queue_stats,
        VAR_2,
        VAR_48,
        VAR_60)) {
  FUNC_12(VAR_59);
  return ((void*)0);
 }

 for (VAR_57 = 0; VAR_57 < 4; ++VAR_57) {
  if (FUNC_7(&VAR_60->tx_queue[VAR_57],
          &VAR_60->tx_queue_stats, VAR_57, 16,
          VAR_49[VAR_57])) {
   for (; VAR_57 > 0; VAR_57--)
    FUNC_6(&VAR_60->tx_queue[VAR_57 - 1]);
   FUNC_8(&VAR_60->tx_queue_stats);
   FUNC_12(VAR_59);
   return ((void*)0);
  }
 }

 FUNC_14(&VAR_60->channel_switch_done);
 FUNC_14(&VAR_60->wsm_cmd_wq);
 FUNC_14(&VAR_60->wsm_startup_done);
 FUNC_14(&VAR_60->ps_mode_switch_done);
 FUNC_20(&VAR_60->wsm_cmd_buf);
 FUNC_17(&VAR_60->wsm_cmd.lock);
 VAR_60->wsm_cmd.done = 1;
 FUNC_19(VAR_60);

 return VAR_59;
}
