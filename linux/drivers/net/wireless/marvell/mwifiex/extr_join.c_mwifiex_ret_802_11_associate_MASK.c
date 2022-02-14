
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct TYPE_14__ {scalar_t__ wpa2_enabled; scalar_t__ wpa_enabled; } ;
struct TYPE_13__ {int mac_address; int channel; } ;
struct TYPE_22__ {int wmm_enabled; int wmm_uapsd_enabled; TYPE_11__ bss_descriptor; scalar_t__ band; } ;
struct mwifiex_private {int assoc_rsp_size; int media_connected; int wmm_enabled; int ht_param_present; int wpa_is_gtk_set; int scan_block; int port_open; TYPE_1__ sec_info; int netdev; TYPE_9__ curr_bss_params; struct mwifiex_adapter* adapter; scalar_t__ rxpd_htinfo; scalar_t__ rxpd_rate; scalar_t__ bcn_nf_avg; scalar_t__ bcn_rssi_avg; scalar_t__ bcn_nf_last; scalar_t__ bcn_rssi_last; scalar_t__ data_nf_avg; scalar_t__ data_rssi_avg; scalar_t__ data_nf_last; scalar_t__ data_rssi_last; int curr_pkt_filter; int assoc_resp_ht_param; scalar_t__ wmm_required; struct mwifiex_bssdescriptor* attempted_bss_desc; TYPE_11__* assoc_rsp_buf; } ;
struct TYPE_21__ {scalar_t__ element_id; } ;
struct TYPE_12__ {int qos_info_bitmap; TYPE_8__ vend_hdr; } ;
struct TYPE_19__ {int current_chan; } ;
struct TYPE_20__ {TYPE_6__ ds_param_set; } ;
struct TYPE_18__ {int ssid; } ;
struct mwifiex_bssdescriptor {TYPE_10__ wmm_ie; scalar_t__ bcn_ht_cap; scalar_t__ bss_band; TYPE_7__ phy_param_set; TYPE_5__ ssid; } ;
struct TYPE_16__ {int status; } ;
struct TYPE_17__ {int num_cmd_assoc_success; int num_cmd_assoc_failure; } ;
struct mwifiex_adapter {int pps_uapsd_mode; int tx_lock_flag; TYPE_3__ cmd_wait_q; TYPE_2__* curr_cmd; TYPE_4__ dbg; int ps_state; int dev; } ;
struct ieee_types_header {int dummy; } ;
struct ieee_types_assoc_rsp {int ie_buffer; int a_id; int status_code; int cap_info_bitmap; } ;
struct ieee80211_ht_operation {int ht_param; } ;
struct host_cmd_ds_command {struct mwifiex_bssdescriptor params; int size; } ;
struct TYPE_15__ {scalar_t__ wait_q_enabled; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int) ;
 scalar_t__* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_11__*,struct mwifiex_bssdescriptor*,int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (struct mwifiex_adapter*,int ,char*,...) ;
 int FUNC_9 (struct mwifiex_private*,int ) ;
 int FUNC_10 (struct mwifiex_private*) ;
 int FUNC_11 (int ,struct mwifiex_adapter*) ;
 int FUNC_12 (struct mwifiex_private*) ;
 int FUNC_13 (struct mwifiex_private*,int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;

int FUNC_16(struct mwifiex_private *VAR_11,
        struct host_cmd_ds_command *VAR_12)
{
 struct mwifiex_adapter *VAR_13 = VAR_11->adapter;
 int VAR_14 = 0;
 struct ieee_types_assoc_rsp *VAR_15;
 struct mwifiex_bssdescriptor *VAR_16;
 bool VAR_17 = 1;
 u16 VAR_18, VAR_19, VAR_20;
 const u8 *VAR_21;
 struct ieee80211_ht_operation *VAR_22;

 if (!VAR_11->attempted_bss_desc) {
  FUNC_8(VAR_11->adapter, VAR_1,
       "ASSOC_RESP: failed, association terminated by host\n");
  goto done;
 }

 VAR_15 = (struct ieee_types_assoc_rsp *) &VAR_12->params;

 VAR_18 = FUNC_5(VAR_15->cap_info_bitmap);
 VAR_19 = FUNC_5(VAR_15->status_code);
 VAR_20 = FUNC_5(VAR_15->a_id);

 if ((VAR_20 & (FUNC_0(15) | FUNC_0(14))) != (FUNC_0(15) | FUNC_0(14)))
  FUNC_4(VAR_11->adapter->dev,
   "invalid AID value 0x%x; bits 15:14 not set\n",
   VAR_20);

 VAR_20 &= ~(FUNC_0(15) | FUNC_0(14));

 VAR_11->assoc_rsp_size = FUNC_7(FUNC_5(VAR_12->size) - VAR_6,
       sizeof(VAR_11->assoc_rsp_buf));

 VAR_15->a_id = FUNC_3(VAR_20);
 FUNC_6(VAR_11->assoc_rsp_buf, &VAR_12->params, VAR_11->assoc_rsp_size);

 if (VAR_19) {
  VAR_11->adapter->dbg.num_cmd_assoc_failure++;
  FUNC_8(VAR_11->adapter, VAR_1,
       "ASSOC_RESP: failed,\t"
       "status code=%d err=%#x a_id=%#x\n",
       VAR_19, VAR_18,
       FUNC_5(VAR_15->a_id));

  FUNC_8(VAR_11->adapter, VAR_1, "assoc failure: reason %s\n",
       FUNC_1(VAR_18));
  if (VAR_18 == VAR_0) {
   if (VAR_19 == VAR_4) {
    VAR_14 = VAR_9;
    FUNC_8(VAR_11->adapter, VAR_1,
         "ASSOC_RESP: AUTH timeout\n");
   } else {
    VAR_14 = VAR_10;
    FUNC_8(VAR_11->adapter, VAR_1,
         "ASSOC_RESP: UNSPECIFIED failure\n");
   }
  } else {
   VAR_14 = VAR_19;
  }

  goto done;
 }


 VAR_11->media_connected = 1;

 VAR_11->adapter->ps_state = VAR_5;
 VAR_11->adapter->pps_uapsd_mode = 0;
 VAR_11->adapter->tx_lock_flag = 0;


 VAR_16 = VAR_11->attempted_bss_desc;

 FUNC_8(VAR_11->adapter, VAR_3, "info: ASSOC_RESP: %s\n",
      VAR_16->ssid.ssid);


 FUNC_6(&VAR_11->curr_bss_params.bss_descriptor,
        VAR_16, sizeof(struct mwifiex_bssdescriptor));


 VAR_11->curr_bss_params.bss_descriptor.channel
  = VAR_16->phy_param_set.ds_param_set.current_chan;

 VAR_11->curr_bss_params.band = (u8) VAR_16->bss_band;

 if (VAR_16->wmm_ie.vend_hdr.element_id == VAR_8)
  VAR_11->curr_bss_params.wmm_enabled = 1;
 else
  VAR_11->curr_bss_params.wmm_enabled = 0;

 if ((VAR_11->wmm_required || VAR_16->bcn_ht_cap) &&
     VAR_11->curr_bss_params.wmm_enabled)
  VAR_11->wmm_enabled = 1;
 else
  VAR_11->wmm_enabled = 0;

 VAR_11->curr_bss_params.wmm_uapsd_enabled = 0;

 if (VAR_11->wmm_enabled)
  VAR_11->curr_bss_params.wmm_uapsd_enabled
   = ((VAR_16->wmm_ie.qos_info_bitmap &
    VAR_2) ? 1 : 0);


 VAR_21 = FUNC_2(VAR_7, VAR_15->ie_buffer,
      VAR_11->assoc_rsp_size
      - sizeof(struct ieee_types_assoc_rsp));
 if (VAR_21) {
  VAR_22 = (struct ieee80211_ht_operation *)(VAR_21
     + sizeof(struct ieee_types_header));
  VAR_11->assoc_resp_ht_param = VAR_22->ht_param;
  VAR_11->ht_param_present = 1;
 } else {
  VAR_11->ht_param_present = 0;
 }

 FUNC_8(VAR_11->adapter, VAR_3,
      "info: ASSOC_RESP: curr_pkt_filter is %#x\n",
      VAR_11->curr_pkt_filter);
 if (VAR_11->sec_info.wpa_enabled || VAR_11->sec_info.wpa2_enabled)
  VAR_11->wpa_is_gtk_set = 0;

 if (VAR_11->wmm_enabled) {


  VAR_17 = 0;
 } else {


  FUNC_13(VAR_11, ((void*)0));
  FUNC_12(VAR_11);
 }

 if (VAR_17)
  FUNC_8(VAR_11->adapter, VAR_3,
       "info: post association, re-enabling data flow\n");


 VAR_11->data_rssi_last = 0;
 VAR_11->data_nf_last = 0;
 VAR_11->data_rssi_avg = 0;
 VAR_11->data_nf_avg = 0;
 VAR_11->bcn_rssi_last = 0;
 VAR_11->bcn_nf_last = 0;
 VAR_11->bcn_rssi_avg = 0;
 VAR_11->bcn_nf_avg = 0;
 VAR_11->rxpd_rate = 0;
 VAR_11->rxpd_htinfo = 0;

 FUNC_10(VAR_11);

 VAR_11->adapter->dbg.num_cmd_assoc_success++;

 FUNC_8(VAR_11->adapter, VAR_3, "info: ASSOC_RESP: associated\n");



 FUNC_9(VAR_11,
      VAR_11->curr_bss_params.bss_descriptor.mac_address);

 if (!FUNC_14(VAR_11->netdev))
  FUNC_15(VAR_11->netdev);
 FUNC_11(VAR_11->netdev, VAR_13);

 if (VAR_11->sec_info.wpa_enabled || VAR_11->sec_info.wpa2_enabled)
  VAR_11->scan_block = 1;
 else
  VAR_11->port_open = 1;

done:

 if (VAR_13->curr_cmd->wait_q_enabled) {
  if (VAR_14)
   VAR_13->cmd_wait_q.status = -1;
  else
   VAR_13->cmd_wait_q.status = 0;
 }

 return VAR_14;
}
