
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct rtllib_rx_stats {int SignalStrength; scalar_t__ freq; int signal; scalar_t__ noise; scalar_t__ len; int received_channel; } ;
struct rtllib_qos_data {int dummy; } ;
struct TYPE_3__ {int addr3; } ;
struct rtllib_probe_response {int info_element; int beacon_interval; int * time_stamp; int capability; TYPE_1__ header; } ;
struct TYPE_4__ {scalar_t__ bdSupportHT; } ;
struct rtllib_network {int capability; int listen_interval; int flags; int erp_value; int berp_info_valid; int broadcom_cap_exist; int ralink_cap_exist; int atheros_cap_exist; int cisco_cap_exist; int unknown_cap_exist; int realtek_cap_exit; int marvell_cap_exist; int airgo_cap_exist; int SignalStrength; int RSSI; int mode; int stats; scalar_t__ ssid_len; int ssid; TYPE_2__ bssht; int bssid; scalar_t__ wzc_ie_len; scalar_t__ rsn_ie_len; scalar_t__ wpa_ie_len; int channel; int * CountryIeBuf; scalar_t__ CountryIeLen; scalar_t__ Turbo_Enable; scalar_t__ atim_window; int * hidden_ssid; scalar_t__ hidden_ssid_len; scalar_t__ rates_ex_len; scalar_t__ rates_len; void* beacon_interval; int * time_stamp; int last_scanned; int qos_data; } ;
struct rtllib_device {int dev; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,int ) ;
 int VAR_11 ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int *,struct rtllib_rx_stats*,int) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int ,char*,int ,int ) ;
 scalar_t__ FUNC_7 (int ,scalar_t__) ;
 scalar_t__ FUNC_8 (struct rtllib_device*,int ,scalar_t__,struct rtllib_network*,struct rtllib_rx_stats*) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static inline int FUNC_10(
 struct rtllib_device *VAR_12,
 struct rtllib_probe_response *VAR_13,
 struct rtllib_network *VAR_14,
 struct rtllib_rx_stats *VAR_15)
{
 FUNC_5(&VAR_14->qos_data, 0, sizeof(struct rtllib_qos_data));


 FUNC_2(VAR_14->bssid, VAR_13->header.addr3);
 VAR_14->capability = FUNC_3(VAR_13->capability);
 VAR_14->last_scanned = VAR_11;
 VAR_14->time_stamp[0] = VAR_13->time_stamp[0];
 VAR_14->time_stamp[1] = VAR_13->time_stamp[1];
 VAR_14->beacon_interval = FUNC_3(VAR_13->beacon_interval);

 VAR_14->listen_interval = 0x0A;
 VAR_14->rates_len = VAR_14->rates_ex_len = 0;
 VAR_14->ssid_len = 0;
 VAR_14->hidden_ssid_len = 0;
 FUNC_5(VAR_14->hidden_ssid, 0, sizeof(VAR_14->hidden_ssid));
 VAR_14->flags = 0;
 VAR_14->atim_window = 0;
 VAR_14->erp_value = (VAR_14->capability & VAR_10) ?
     0x3 : 0x0;
 VAR_14->berp_info_valid = 0;
 VAR_14->broadcom_cap_exist = 0;
 VAR_14->ralink_cap_exist = 0;
 VAR_14->atheros_cap_exist = 0;
 VAR_14->cisco_cap_exist = 0;
 VAR_14->unknown_cap_exist = 0;
 VAR_14->realtek_cap_exit = 0;
 VAR_14->marvell_cap_exist = 0;
 VAR_14->airgo_cap_exist = 0;
 VAR_14->Turbo_Enable = 0;
 VAR_14->SignalStrength = VAR_15->SignalStrength;
 VAR_14->RSSI = VAR_15->SignalStrength;
 VAR_14->CountryIeLen = 0;
 FUNC_5(VAR_14->CountryIeBuf, 0, VAR_5);
 FUNC_0(&VAR_14->bssht);
 if (VAR_15->freq == VAR_9) {

  VAR_14->channel = VAR_15->received_channel;
 } else
  VAR_14->flags |= VAR_7;

 VAR_14->wpa_ie_len = 0;
 VAR_14->rsn_ie_len = 0;
 VAR_14->wzc_ie_len = 0;

 if (FUNC_8(VAR_12,
   VAR_13->info_element,
   (VAR_15->len - sizeof(*VAR_13)),
   VAR_14,
   VAR_15))
  return 1;

 VAR_14->mode = 0;
 if (VAR_15->freq == VAR_9)
  VAR_14->mode = VAR_0;
 else {
  if (VAR_14->flags & VAR_8)
   VAR_14->mode |= VAR_2;
  if (VAR_14->flags & VAR_7)
   VAR_14->mode |= VAR_1;
 }

 if (VAR_14->mode == 0) {
  FUNC_6(VAR_12->dev, "Filtered out '%s (%pM)' network.\n",
      FUNC_1(VAR_14->ssid, VAR_14->ssid_len),
      VAR_14->bssid);
  return 1;
 }

 if (VAR_14->bssht.bdSupportHT) {
  if (VAR_14->mode == VAR_0)
   VAR_14->mode = VAR_4;
  else if (VAR_14->mode & (VAR_2 | VAR_1))
   VAR_14->mode = VAR_3;
 }
 if (FUNC_7(VAR_14->ssid, VAR_14->ssid_len))
  VAR_14->flags |= VAR_6;
 VAR_15->signal = 30 + (VAR_15->SignalStrength * 70) / 100;
 VAR_15->noise = FUNC_9((u8)(100-VAR_15->signal)) - 25;

 FUNC_4(&VAR_14->stats, VAR_15, sizeof(VAR_14->stats));

 return 0;
}
