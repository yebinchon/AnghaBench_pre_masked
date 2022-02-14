
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct ieee80211_tim_parameters {int dummy; } ;
struct ieee80211_rx_stats {int dummy; } ;
struct ieee80211_qos_data {int dummy; } ;
struct TYPE_6__ {int active; int supported; scalar_t__ aci_aifsn; int old_param_count; int param_count; } ;
struct TYPE_5__ {int bdHTCapLen; int bdHTInfoLen; int bdRT2RTLongSlotTime; int bdHTSpecVer; TYPE_2__* bdHTInfoBuf; TYPE_2__* bdHTCapBuf; int bdRT2RTAggregation; int bdSupportHT; } ;
struct ieee80211_network {int rates_len; int rates_ex_len; int ssid_len; int flags; int berp_info_valid; int wpa_ie_len; int rsn_ie_len; int QoS_Enable; int CountryIeLen; int BssCcxVerNumber; int bWithCcxVerNum; TYPE_2__* MBssid; int bMBssidValid; int MBssidMask; int bCcxRmEnable; TYPE_2__* CcxRmState; int bCkipSupported; int bWithAironetIE; TYPE_2__* CountryIeBuf; int Turbo_Enable; TYPE_2__* wmm_param; int wmm_info; TYPE_2__ qos_data; TYPE_2__* ssid; int last_scanned; TYPE_2__* rsn_ie; TYPE_2__* wpa_ie; int unknown_cap_exist; int cisco_cap_exist; int atheros_cap_exist; int ralink_cap_exist; int broadcom_cap_exist; TYPE_1__ bssht; TYPE_2__ tim; int * last_dtim_sta_time; int dtim_data; int dtim_period; int atim_window; int listen_interval; int beacon_interval; int erp_value; int * time_stamp; int mode; TYPE_2__* rates_ex; TYPE_2__* rates; int capability; TYPE_2__ stats; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;

__attribute__((used)) static inline void FUNC_3(struct ieee80211_network *VAR_4,
      struct ieee80211_network *VAR_5)
{
 int VAR_6;
 u8 VAR_7;

 FUNC_1(&VAR_4->stats, &VAR_5->stats, sizeof(struct ieee80211_rx_stats));
 VAR_4->capability = VAR_5->capability;
 FUNC_1(VAR_4->rates, VAR_5->rates, VAR_5->rates_len);
 VAR_4->rates_len = VAR_5->rates_len;
 FUNC_1(VAR_4->rates_ex, VAR_5->rates_ex, VAR_5->rates_ex_len);
 VAR_4->rates_ex_len = VAR_5->rates_ex_len;
 if (VAR_5->ssid_len > 0) {
  FUNC_2(VAR_4->ssid, 0, VAR_4->ssid_len);
  VAR_4->ssid_len = VAR_5->ssid_len;
  FUNC_1(VAR_4->ssid, VAR_5->ssid, VAR_5->ssid_len);
 }
 VAR_4->mode = VAR_5->mode;
 VAR_4->flags = VAR_5->flags;
 VAR_4->time_stamp[0] = VAR_5->time_stamp[0];
 VAR_4->time_stamp[1] = VAR_5->time_stamp[1];
 if (VAR_5->flags & VAR_0) {
  VAR_4->erp_value = VAR_5->erp_value;
  VAR_4->berp_info_valid = VAR_5->berp_info_valid = 1;
 }
 VAR_4->beacon_interval = VAR_5->beacon_interval;
 VAR_4->listen_interval = VAR_5->listen_interval;
 VAR_4->atim_window = VAR_5->atim_window;
 VAR_4->dtim_period = VAR_5->dtim_period;
 VAR_4->dtim_data = VAR_5->dtim_data;
 VAR_4->last_dtim_sta_time[0] = VAR_5->last_dtim_sta_time[0];
 VAR_4->last_dtim_sta_time[1] = VAR_5->last_dtim_sta_time[1];
 FUNC_1(&VAR_4->tim, &VAR_5->tim, sizeof(struct ieee80211_tim_parameters));

 VAR_4->bssht.bdSupportHT = VAR_5->bssht.bdSupportHT;
 VAR_4->bssht.bdRT2RTAggregation = VAR_5->bssht.bdRT2RTAggregation;
 VAR_4->bssht.bdHTCapLen = VAR_5->bssht.bdHTCapLen;
 FUNC_1(VAR_4->bssht.bdHTCapBuf, VAR_5->bssht.bdHTCapBuf, VAR_5->bssht.bdHTCapLen);
 VAR_4->bssht.bdHTInfoLen = VAR_5->bssht.bdHTInfoLen;
 FUNC_1(VAR_4->bssht.bdHTInfoBuf, VAR_5->bssht.bdHTInfoBuf, VAR_5->bssht.bdHTInfoLen);
 VAR_4->bssht.bdHTSpecVer = VAR_5->bssht.bdHTSpecVer;
 VAR_4->bssht.bdRT2RTLongSlotTime = VAR_5->bssht.bdRT2RTLongSlotTime;
 VAR_4->broadcom_cap_exist = VAR_5->broadcom_cap_exist;
 VAR_4->ralink_cap_exist = VAR_5->ralink_cap_exist;
 VAR_4->atheros_cap_exist = VAR_5->atheros_cap_exist;
 VAR_4->cisco_cap_exist = VAR_5->cisco_cap_exist;
 VAR_4->unknown_cap_exist = VAR_5->unknown_cap_exist;
 FUNC_1(VAR_4->wpa_ie, VAR_5->wpa_ie, VAR_5->wpa_ie_len);
 VAR_4->wpa_ie_len = VAR_5->wpa_ie_len;
 FUNC_1(VAR_4->rsn_ie, VAR_5->rsn_ie, VAR_5->rsn_ie_len);
 VAR_4->rsn_ie_len = VAR_5->rsn_ie_len;

 VAR_4->last_scanned = VAR_3;


 VAR_6 = VAR_4->qos_data.active;

 VAR_7 = VAR_4->qos_data.param_count;
 if (VAR_4->flags & VAR_1)
  FUNC_1(&VAR_4->qos_data, &VAR_5->qos_data,
   sizeof(struct ieee80211_qos_data));
 else {
  VAR_4->qos_data.supported = VAR_5->qos_data.supported;
  VAR_4->qos_data.param_count = VAR_5->qos_data.param_count;
 }

 if (VAR_4->qos_data.supported == 1) {
  VAR_4->QoS_Enable = 1;
  if (VAR_4->ssid_len)
   FUNC_0
    ("QoS the network %s is QoS supported\n",
    VAR_4->ssid);
  else
   FUNC_0
    ("QoS the network is QoS supported\n");
 }
 VAR_4->qos_data.active = VAR_6;
 VAR_4->qos_data.old_param_count = VAR_7;


 VAR_4->wmm_info = VAR_5->wmm_info;
 if (VAR_5->wmm_param[0].aci_aifsn || VAR_5->wmm_param[1].aci_aifsn || VAR_5->wmm_param[2].aci_aifsn || VAR_5->wmm_param[3].aci_aifsn) {



  FUNC_1(VAR_4->wmm_param, VAR_5->wmm_param, VAR_2);
 }





 VAR_4->CountryIeLen = VAR_5->CountryIeLen;
 FUNC_1(VAR_4->CountryIeBuf, VAR_5->CountryIeBuf, VAR_5->CountryIeLen);


 VAR_4->bWithAironetIE = VAR_5->bWithAironetIE;
 VAR_4->bCkipSupported = VAR_5->bCkipSupported;
 FUNC_1(VAR_4->CcxRmState, VAR_5->CcxRmState, 2);
 VAR_4->bCcxRmEnable = VAR_5->bCcxRmEnable;
 VAR_4->MBssidMask = VAR_5->MBssidMask;
 VAR_4->bMBssidValid = VAR_5->bMBssidValid;
 FUNC_1(VAR_4->MBssid, VAR_5->MBssid, 6);
 VAR_4->bWithCcxVerNum = VAR_5->bWithCcxVerNum;
 VAR_4->BssCcxVerNumber = VAR_5->BssCcxVerNumber;

}
