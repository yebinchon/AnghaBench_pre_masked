
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct mwifiex_wep_key {int dummy; } ;
struct TYPE_2__ {scalar_t__ encryption_mode; int authentication_mode; scalar_t__ wep_enabled; } ;
struct mwifiex_private {int media_connected; int port_open; int is_data_rate_auto; int curr_pkt_filter; int beacon_period; int wpa_is_gtk_set; int wmm_required; int wmm_enabled; int scan_block; int hs2_enabled; int check_tdls_tx; int tos_to_tid_inv; scalar_t__ del_list_idx; scalar_t__ csa_expire_time; scalar_t__ csa_chan; int roc_cfg; scalar_t__ ap_11n_enabled; scalar_t__ wps_ie_len; int * wps_ie; scalar_t__ curr_bcn_size; int * curr_bcn_buf; scalar_t__ wmm_qosinfo; int * vs_ie; scalar_t__ gen_ie_buf_len; int gen_ie_buf; int wps; scalar_t__ assoc_tlv_buf_len; int assoc_tlv_buf; scalar_t__ wpa_ie_len; int aes_key; int wpa_ie; scalar_t__ bcn_nf_last; scalar_t__ bcn_nf_avg; scalar_t__ bcn_rssi_avg; scalar_t__ bcn_rssi_last; scalar_t__ data_nf_last; scalar_t__ data_nf_avg; scalar_t__ data_rssi_avg; scalar_t__ data_rssi_last; scalar_t__ rate_bitmap; scalar_t__ rxpd_rate; scalar_t__ rxpd_htinfo; scalar_t__ tx_rate; scalar_t__ rx_ant; scalar_t__ tx_ant; scalar_t__ min_tx_power_level; scalar_t__ max_tx_power_level; scalar_t__ tx_power_level; int adhoc_state; scalar_t__ atim_window; int adhoc_channel; scalar_t__ assoc_rsp_size; int assoc_rsp_buf; int prev_bssid; int prev_ssid; int listen_interval; int curr_bss_params; int * attempted_bss_desc; scalar_t__ wep_key_curr_index; int * wep_key; TYPE_1__ sec_info; int data_avg_factor; int bcn_avg_factor; scalar_t__ data_rate; int bss_mode; scalar_t__ pkt_tx_ctrl; int usb_port; int curr_addr; } ;


 int VAR_0 ;
 size_t FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (struct mwifiex_private*) ;
 int FUNC_5 (struct mwifiex_private*) ;
 int VAR_13 ;

int FUNC_6(struct mwifiex_private *VAR_14)
{
 u32 VAR_15;

 VAR_14->media_connected = 0;
 FUNC_1(VAR_14->curr_addr);
 VAR_14->port_open = 0;
 VAR_14->usb_port = VAR_10;
 VAR_14->pkt_tx_ctrl = 0;
 VAR_14->bss_mode = VAR_12;
 VAR_14->data_rate = 0;
 VAR_14->is_data_rate_auto = 1;
 VAR_14->bcn_avg_factor = VAR_2;
 VAR_14->data_avg_factor = VAR_3;

 VAR_14->sec_info.wep_enabled = 0;
 VAR_14->sec_info.authentication_mode = VAR_11;
 VAR_14->sec_info.encryption_mode = 0;
 for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_14->wep_key); VAR_15++)
  FUNC_3(&VAR_14->wep_key[VAR_15], 0, sizeof(struct mwifiex_wep_key));
 VAR_14->wep_key_curr_index = 0;
 VAR_14->curr_pkt_filter = VAR_4 |
    VAR_6 | VAR_7 |
    VAR_5;

 VAR_14->beacon_period = 100;
 VAR_14->attempted_bss_desc = ((void*)0);
 FUNC_3(&VAR_14->curr_bss_params, 0, sizeof(VAR_14->curr_bss_params));
 VAR_14->listen_interval = VAR_9;

 FUNC_3(&VAR_14->prev_ssid, 0, sizeof(VAR_14->prev_ssid));
 FUNC_3(&VAR_14->prev_bssid, 0, sizeof(VAR_14->prev_bssid));
 FUNC_3(&VAR_14->assoc_rsp_buf, 0, sizeof(VAR_14->assoc_rsp_buf));
 VAR_14->assoc_rsp_size = 0;
 VAR_14->adhoc_channel = VAR_1;
 VAR_14->atim_window = 0;
 VAR_14->adhoc_state = VAR_0;
 VAR_14->tx_power_level = 0;
 VAR_14->max_tx_power_level = 0;
 VAR_14->min_tx_power_level = 0;
 VAR_14->tx_ant = 0;
 VAR_14->rx_ant = 0;
 VAR_14->tx_rate = 0;
 VAR_14->rxpd_htinfo = 0;
 VAR_14->rxpd_rate = 0;
 VAR_14->rate_bitmap = 0;
 VAR_14->data_rssi_last = 0;
 VAR_14->data_rssi_avg = 0;
 VAR_14->data_nf_avg = 0;
 VAR_14->data_nf_last = 0;
 VAR_14->bcn_rssi_last = 0;
 VAR_14->bcn_rssi_avg = 0;
 VAR_14->bcn_nf_avg = 0;
 VAR_14->bcn_nf_last = 0;
 FUNC_3(&VAR_14->wpa_ie, 0, sizeof(VAR_14->wpa_ie));
 FUNC_3(&VAR_14->aes_key, 0, sizeof(VAR_14->aes_key));
 VAR_14->wpa_ie_len = 0;
 VAR_14->wpa_is_gtk_set = 0;

 FUNC_3(&VAR_14->assoc_tlv_buf, 0, sizeof(VAR_14->assoc_tlv_buf));
 VAR_14->assoc_tlv_buf_len = 0;
 FUNC_3(&VAR_14->wps, 0, sizeof(VAR_14->wps));
 FUNC_3(&VAR_14->gen_ie_buf, 0, sizeof(VAR_14->gen_ie_buf));
 VAR_14->gen_ie_buf_len = 0;
 FUNC_3(VAR_14->vs_ie, 0, sizeof(VAR_14->vs_ie));

 VAR_14->wmm_required = 1;
 VAR_14->wmm_enabled = 0;
 VAR_14->wmm_qosinfo = 0;
 VAR_14->curr_bcn_buf = ((void*)0);
 VAR_14->curr_bcn_size = 0;
 VAR_14->wps_ie = ((void*)0);
 VAR_14->wps_ie_len = 0;
 VAR_14->ap_11n_enabled = 0;
 FUNC_3(&VAR_14->roc_cfg, 0, sizeof(VAR_14->roc_cfg));

 VAR_14->scan_block = 0;

 VAR_14->csa_chan = 0;
 VAR_14->csa_expire_time = 0;
 VAR_14->del_list_idx = 0;
 VAR_14->hs2_enabled = 0;
 VAR_14->check_tdls_tx = 0;
 FUNC_2(VAR_14->tos_to_tid_inv, VAR_13, VAR_8);

 FUNC_5(VAR_14);

 return FUNC_4(VAR_14);
}
