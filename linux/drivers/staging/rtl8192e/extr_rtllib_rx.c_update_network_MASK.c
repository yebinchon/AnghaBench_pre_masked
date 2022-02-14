
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct rtllib_tim_parameters {int dummy; } ;
struct rtllib_rx_stats {int dummy; } ;
struct rtllib_qos_data {int dummy; } ;
struct TYPE_6__ {int active; int supported; scalar_t__ ac_aci_acm_aifsn; int old_param_count; int param_count; } ;
struct TYPE_5__ {int bdHTCapLen; int bdHTInfoLen; int bdRT2RTLongSlotTime; int bdHTSpecVer; TYPE_2__* bdHTInfoBuf; TYPE_2__* bdHTCapBuf; int bdRT2RTAggregation; int bdSupportHT; } ;
struct rtllib_network {int rates_len; int rates_ex_len; int ssid_len; int hidden_ssid_len; int flags; int berp_info_valid; int wpa_ie_len; int rsn_ie_len; int wzc_ie_len; int CountryIeLen; int BssCcxVerNumber; int bWithCcxVerNum; TYPE_2__* MBssid; int bMBssidValid; int MBssidMask; int bCcxRmEnable; TYPE_2__* CcxRmState; int bCkipSupported; int bWithAironetIE; TYPE_2__* CountryIeBuf; int Turbo_Enable; int RSSI; int SignalStrength; TYPE_2__* wmm_param; int wmm_info; TYPE_2__ qos_data; TYPE_2__* ssid; int last_scanned; TYPE_2__* wzc_ie; TYPE_2__* rsn_ie; TYPE_2__* wpa_ie; int unknown_cap_exist; int airgo_cap_exist; int cisco_cap_exist; int marvell_cap_exist; int realtek_cap_exit; int atheros_cap_exist; int ralink_cap_exist; int broadcom_cap_exist; TYPE_1__ bssht; TYPE_2__ tim; int last_dtim_sta_time; int dtim_data; int dtim_period; int atim_window; int listen_interval; int beacon_interval; int erp_value; int * time_stamp; int mode; TYPE_2__* hidden_ssid; TYPE_2__* rates_ex; TYPE_2__* rates; int capability; TYPE_2__ stats; } ;
struct rtllib_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (int ,char*,...) ;

__attribute__((used)) static inline void FUNC_3(struct rtllib_device *VAR_4,
      struct rtllib_network *VAR_5,
      struct rtllib_network *VAR_6)
{
 int VAR_7;
 u8 VAR_8;

 FUNC_0(&VAR_5->stats, &VAR_6->stats, sizeof(struct rtllib_rx_stats));
 VAR_5->capability = VAR_6->capability;
 FUNC_0(VAR_5->rates, VAR_6->rates, VAR_6->rates_len);
 VAR_5->rates_len = VAR_6->rates_len;
 FUNC_0(VAR_5->rates_ex, VAR_6->rates_ex, VAR_6->rates_ex_len);
 VAR_5->rates_ex_len = VAR_6->rates_ex_len;
 if (VAR_6->ssid_len > 0) {
  if (VAR_5->ssid_len == 0) {
   FUNC_1(VAR_5->hidden_ssid, 0, sizeof(VAR_5->hidden_ssid));
   VAR_5->hidden_ssid_len = VAR_6->ssid_len;
   FUNC_0(VAR_5->hidden_ssid, VAR_6->ssid, VAR_6->ssid_len);
  } else {
   FUNC_1(VAR_5->ssid, 0, VAR_5->ssid_len);
   VAR_5->ssid_len = VAR_6->ssid_len;
   FUNC_0(VAR_5->ssid, VAR_6->ssid, VAR_6->ssid_len);
  }
 }
 VAR_5->mode = VAR_6->mode;
 VAR_5->flags = VAR_6->flags;
 VAR_5->time_stamp[0] = VAR_6->time_stamp[0];
 VAR_5->time_stamp[1] = VAR_6->time_stamp[1];
 if (VAR_6->flags & VAR_0) {
  VAR_5->erp_value = VAR_6->erp_value;
  VAR_5->berp_info_valid = VAR_6->berp_info_valid = 1;
 }
 VAR_5->beacon_interval = VAR_6->beacon_interval;
 VAR_5->listen_interval = VAR_6->listen_interval;
 VAR_5->atim_window = VAR_6->atim_window;
 VAR_5->dtim_period = VAR_6->dtim_period;
 VAR_5->dtim_data = VAR_6->dtim_data;
 VAR_5->last_dtim_sta_time = VAR_6->last_dtim_sta_time;
 FUNC_0(&VAR_5->tim, &VAR_6->tim, sizeof(struct rtllib_tim_parameters));

 VAR_5->bssht.bdSupportHT = VAR_6->bssht.bdSupportHT;
 VAR_5->bssht.bdRT2RTAggregation = VAR_6->bssht.bdRT2RTAggregation;
 VAR_5->bssht.bdHTCapLen = VAR_6->bssht.bdHTCapLen;
 FUNC_0(VAR_5->bssht.bdHTCapBuf, VAR_6->bssht.bdHTCapBuf,
        VAR_6->bssht.bdHTCapLen);
 VAR_5->bssht.bdHTInfoLen = VAR_6->bssht.bdHTInfoLen;
 FUNC_0(VAR_5->bssht.bdHTInfoBuf, VAR_6->bssht.bdHTInfoBuf,
        VAR_6->bssht.bdHTInfoLen);
 VAR_5->bssht.bdHTSpecVer = VAR_6->bssht.bdHTSpecVer;
 VAR_5->bssht.bdRT2RTLongSlotTime = VAR_6->bssht.bdRT2RTLongSlotTime;
 VAR_5->broadcom_cap_exist = VAR_6->broadcom_cap_exist;
 VAR_5->ralink_cap_exist = VAR_6->ralink_cap_exist;
 VAR_5->atheros_cap_exist = VAR_6->atheros_cap_exist;
 VAR_5->realtek_cap_exit = VAR_6->realtek_cap_exit;
 VAR_5->marvell_cap_exist = VAR_6->marvell_cap_exist;
 VAR_5->cisco_cap_exist = VAR_6->cisco_cap_exist;
 VAR_5->airgo_cap_exist = VAR_6->airgo_cap_exist;
 VAR_5->unknown_cap_exist = VAR_6->unknown_cap_exist;
 FUNC_0(VAR_5->wpa_ie, VAR_6->wpa_ie, VAR_6->wpa_ie_len);
 VAR_5->wpa_ie_len = VAR_6->wpa_ie_len;
 FUNC_0(VAR_5->rsn_ie, VAR_6->rsn_ie, VAR_6->rsn_ie_len);
 VAR_5->rsn_ie_len = VAR_6->rsn_ie_len;
 FUNC_0(VAR_5->wzc_ie, VAR_6->wzc_ie, VAR_6->wzc_ie_len);
 VAR_5->wzc_ie_len = VAR_6->wzc_ie_len;

 VAR_5->last_scanned = VAR_3;

 VAR_7 = VAR_5->qos_data.active;
 VAR_8 = VAR_5->qos_data.param_count;
 VAR_5->qos_data.supported = VAR_6->qos_data.supported;
 if (VAR_5->flags & VAR_1)
  FUNC_0(&VAR_5->qos_data, &VAR_6->qos_data,
         sizeof(struct rtllib_qos_data));
 if (VAR_5->qos_data.supported == 1) {
  if (VAR_5->ssid_len)
   FUNC_2(VAR_4->dev,
       "QoS the network %s is QoS supported\n",
       VAR_5->ssid);
  else
   FUNC_2(VAR_4->dev,
       "QoS the network is QoS supported\n");
 }
 VAR_5->qos_data.active = VAR_7;
 VAR_5->qos_data.old_param_count = VAR_8;

 VAR_5->wmm_info = VAR_6->wmm_info;
 if (VAR_6->wmm_param[0].ac_aci_acm_aifsn ||
    VAR_6->wmm_param[1].ac_aci_acm_aifsn ||
    VAR_6->wmm_param[2].ac_aci_acm_aifsn ||
    VAR_6->wmm_param[3].ac_aci_acm_aifsn)
  FUNC_0(VAR_5->wmm_param, VAR_6->wmm_param, VAR_2);

 VAR_5->SignalStrength = VAR_6->SignalStrength;
 VAR_5->RSSI = VAR_6->RSSI;
 VAR_5->Turbo_Enable = VAR_6->Turbo_Enable;

 VAR_5->CountryIeLen = VAR_6->CountryIeLen;
 FUNC_0(VAR_5->CountryIeBuf, VAR_6->CountryIeBuf, VAR_6->CountryIeLen);

 VAR_5->bWithAironetIE = VAR_6->bWithAironetIE;
 VAR_5->bCkipSupported = VAR_6->bCkipSupported;
 FUNC_0(VAR_5->CcxRmState, VAR_6->CcxRmState, 2);
 VAR_5->bCcxRmEnable = VAR_6->bCcxRmEnable;
 VAR_5->MBssidMask = VAR_6->MBssidMask;
 VAR_5->bMBssidValid = VAR_6->bMBssidValid;
 FUNC_0(VAR_5->MBssid, VAR_6->MBssid, 6);
 VAR_5->bWithCcxVerNum = VAR_6->bWithCcxVerNum;
 VAR_5->BssCcxVerNumber = VAR_6->BssCcxVerNumber;
}
