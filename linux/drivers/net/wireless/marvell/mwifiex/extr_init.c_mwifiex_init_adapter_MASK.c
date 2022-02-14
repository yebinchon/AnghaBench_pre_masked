
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mwifiex_opt_sleep_confirm {void* resp_ctrl; void* action; scalar_t__ result; void* size; void* command; } ;
struct TYPE_4__ {int p2p_intf; int uap_intf; int sta_intf; } ;
struct TYPE_5__ {int gap; int gpio; int conditions; } ;
struct mwifiex_adapter {int cmd_sent; scalar_t__ iface_type; int data_sent; int cmd_resp_received; int event_received; int data_received; int need_to_wakeup; int scan_probes; int multiple_dtim; int is_deep_sleep; int delay_null_pkt; int delay_to_ps; int gen_null_pkt; int pps_uapsd_mode; int pm_wakeup_card_req; int pm_wakeup_fw_try; int hs_activated; int adhoc_11n_enabled; int tx_lock_flag; int active_scan_triggered; int devdump_timer; scalar_t__ devdump_len; int wakeup_timer; TYPE_1__ iface_limit; int perm_addr; scalar_t__ key_api_minor_ver; scalar_t__ key_api_major_ver; int mfg_mode; int max_mgmt_ie_index; scalar_t__ arp_filter_size; struct mwifiex_opt_sleep_confirm arp_filter; scalar_t__ adhoc_awake_period; int bcn_miss_time_out; scalar_t__ region_code; scalar_t__ event_cause; struct mwifiex_opt_sleep_confirm upld_buf; scalar_t__ fw_cap_info; scalar_t__ fw_release_number; int * scan_channels; scalar_t__ adhoc_start_band; scalar_t__ config_bands; scalar_t__ fw_bands; scalar_t__ null_pkt_interval; struct mwifiex_opt_sleep_confirm sleep_period; struct mwifiex_opt_sleep_confirm sleep_params; TYPE_3__* sleep_cfm; int tx_hw_pending; scalar_t__ sec_chan_offset; scalar_t__ hw_dev_mcs_support; scalar_t__ hw_dot_11n_dev_cap; struct mwifiex_opt_sleep_confirm* event_body; TYPE_2__ hs_cfg; int work_flags; int curr_tx_buf_size; int enhanced_ps_mode; scalar_t__ local_listen_interval; int scan_chan_gap_time; int passive_scan_time; int active_scan_time; int specific_scan_time; int scan_mode; int ps_state; int ps_mode; int hw_status; scalar_t__ intf_hdr_len; } ;
struct TYPE_6__ {int len; scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int *) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_26 ;
 int FUNC_5 (struct mwifiex_opt_sleep_confirm*,int ,int) ;
 int VAR_27 ;
 int FUNC_6 (struct mwifiex_adapter*) ;
 int FUNC_7 (TYPE_3__*,int) ;
 int FUNC_8 (int *,int ,int ) ;
 int VAR_28 ;

__attribute__((used)) static void FUNC_9(struct mwifiex_adapter *VAR_29)
{
 struct mwifiex_opt_sleep_confirm *VAR_30 = ((void*)0);

 FUNC_7(VAR_29->sleep_cfm, sizeof(struct mwifiex_opt_sleep_confirm));

 VAR_29->cmd_sent = 0;

 if (VAR_29->iface_type == VAR_17)
  VAR_29->data_sent = 1;
 else
  VAR_29->data_sent = 0;

 if (VAR_29->iface_type == VAR_21)
  VAR_29->intf_hdr_len = 0;
 else
  VAR_29->intf_hdr_len = VAR_6;

 VAR_29->cmd_resp_received = 0;
 VAR_29->event_received = 0;
 VAR_29->data_received = 0;

 FUNC_1(VAR_19, &VAR_29->work_flags);

 VAR_29->hw_status = VAR_11;

 VAR_29->ps_mode = VAR_8;
 VAR_29->ps_state = VAR_23;
 VAR_29->need_to_wakeup = 0;

 VAR_29->scan_mode = VAR_4;
 VAR_29->specific_scan_time = VAR_18;
 VAR_29->active_scan_time = VAR_9;
 VAR_29->passive_scan_time = VAR_16;
 VAR_29->scan_chan_gap_time = VAR_10;

 VAR_29->scan_probes = 1;

 VAR_29->multiple_dtim = 1;

 VAR_29->local_listen_interval = 0;


 VAR_29->is_deep_sleep = 0;

 VAR_29->delay_null_pkt = 0;
 VAR_29->delay_to_ps = 1000;
 VAR_29->enhanced_ps_mode = VAR_22;

 VAR_29->gen_null_pkt = 0;

 VAR_29->pps_uapsd_mode = 0;

 VAR_29->pm_wakeup_card_req = 0;

 VAR_29->pm_wakeup_fw_try = 0;

 VAR_29->curr_tx_buf_size = VAR_20;

 FUNC_1(VAR_12, &VAR_29->work_flags);
 VAR_29->hs_cfg.conditions = FUNC_3(VAR_1);
 VAR_29->hs_cfg.gpio = VAR_3;
 VAR_29->hs_cfg.gap = VAR_2;
 VAR_29->hs_activated = 0;

 FUNC_5(VAR_29->event_body, 0, sizeof(VAR_29->event_body));
 VAR_29->hw_dot_11n_dev_cap = 0;
 VAR_29->hw_dev_mcs_support = 0;
 VAR_29->sec_chan_offset = 0;
 VAR_29->adhoc_11n_enabled = 0;

 FUNC_6(VAR_29);
 FUNC_0(&VAR_29->tx_hw_pending, 0);

 VAR_30 = (struct mwifiex_opt_sleep_confirm *)
     VAR_29->sleep_cfm->data;
 FUNC_5(VAR_30, 0, VAR_29->sleep_cfm->len);
 VAR_30->command = FUNC_2(VAR_5);
 VAR_30->size = FUNC_2(VAR_29->sleep_cfm->len);
 VAR_30->result = 0;
 VAR_30->action = FUNC_2(VAR_25);
 VAR_30->resp_ctrl = FUNC_2(VAR_24);

 FUNC_5(&VAR_29->sleep_params, 0, sizeof(VAR_29->sleep_params));
 FUNC_5(&VAR_29->sleep_period, 0, sizeof(VAR_29->sleep_period));
 VAR_29->tx_lock_flag = 0;
 VAR_29->null_pkt_interval = 0;
 VAR_29->fw_bands = 0;
 VAR_29->config_bands = 0;
 VAR_29->adhoc_start_band = 0;
 VAR_29->scan_channels = ((void*)0);
 VAR_29->fw_release_number = 0;
 VAR_29->fw_cap_info = 0;
 FUNC_5(&VAR_29->upld_buf, 0, sizeof(VAR_29->upld_buf));
 VAR_29->event_cause = 0;
 VAR_29->region_code = 0;
 VAR_29->bcn_miss_time_out = VAR_0;
 VAR_29->adhoc_awake_period = 0;
 FUNC_5(&VAR_29->arp_filter, 0, sizeof(VAR_29->arp_filter));
 VAR_29->arp_filter_size = 0;
 VAR_29->max_mgmt_ie_index = VAR_7;
 VAR_29->mfg_mode = VAR_27;
 VAR_29->key_api_major_ver = 0;
 VAR_29->key_api_minor_ver = 0;
 FUNC_4(VAR_29->perm_addr);
 VAR_29->iface_limit.sta_intf = VAR_14;
 VAR_29->iface_limit.uap_intf = VAR_15;
 VAR_29->iface_limit.p2p_intf = VAR_13;
 VAR_29->active_scan_triggered = 0;
 FUNC_8(&VAR_29->wakeup_timer, VAR_28, 0);
 VAR_29->devdump_len = 0;
 FUNC_8(&VAR_29->devdump_timer, VAR_26, 0);
}
