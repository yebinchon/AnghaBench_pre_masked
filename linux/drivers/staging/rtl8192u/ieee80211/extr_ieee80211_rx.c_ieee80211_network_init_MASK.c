
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct ieee80211_rx_stats {scalar_t__ freq; int signal; int SignalStrength; scalar_t__ noise; scalar_t__ len; int received_channel; } ;
struct TYPE_5__ {struct ieee80211_rx_stats* addr3; } ;
struct ieee80211_probe_response {int info_element; int beacon_interval; int * time_stamp; int capability; TYPE_2__ header; } ;
struct TYPE_6__ {scalar_t__ bdSupportHT; } ;
struct TYPE_4__ {scalar_t__ old_param_count; scalar_t__ param_count; scalar_t__ supported; scalar_t__ active; } ;
struct ieee80211_network {int capability; int listen_interval; int flags; int erp_value; int berp_info_valid; int broadcom_cap_exist; int ralink_cap_exist; int atheros_cap_exist; int cisco_cap_exist; int unknown_cap_exist; int mode; int stats; scalar_t__ ssid_len; int ssid; TYPE_3__ bssht; int * bssid; scalar_t__ rsn_ie_len; scalar_t__ wpa_ie_len; int channel; int CountryIeBuf; scalar_t__ CountryIeLen; scalar_t__ Turbo_Enable; scalar_t__ atim_window; scalar_t__ last_associate; scalar_t__ rates_ex_len; scalar_t__ rates_len; void* beacon_interval; void** time_stamp; int last_scanned; TYPE_1__ qos_data; } ;
struct ieee80211_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,int ,int *) ;
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
 int FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (struct ieee80211_device*,int ,scalar_t__,struct ieee80211_network*,struct ieee80211_rx_stats*) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_12 ;
 void* FUNC_6 (int ) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (int *,struct ieee80211_rx_stats*,int) ;
 int FUNC_9 (int ,int ,int ) ;

__attribute__((used)) static inline int FUNC_10(
 struct ieee80211_device *VAR_13,
 struct ieee80211_probe_response *VAR_14,
 struct ieee80211_network *VAR_15,
 struct ieee80211_rx_stats *VAR_16)
{





 VAR_15->qos_data.active = 0;
 VAR_15->qos_data.supported = 0;
 VAR_15->qos_data.param_count = 0;
 VAR_15->qos_data.old_param_count = 0;


 FUNC_8(VAR_15->bssid, VAR_14->header.addr3, VAR_0);
 VAR_15->capability = FUNC_6(VAR_14->capability);
 VAR_15->last_scanned = VAR_12;
 VAR_15->time_stamp[0] = FUNC_7(VAR_14->time_stamp[0]);
 VAR_15->time_stamp[1] = FUNC_7(VAR_14->time_stamp[1]);
 VAR_15->beacon_interval = FUNC_6(VAR_14->beacon_interval);

 VAR_15->listen_interval = 0x0A;
 VAR_15->rates_len = VAR_15->rates_ex_len = 0;
 VAR_15->last_associate = 0;
 VAR_15->ssid_len = 0;
 VAR_15->flags = 0;
 VAR_15->atim_window = 0;
 VAR_15->erp_value = (VAR_15->capability & VAR_11) ?
     0x3 : 0x0;
 VAR_15->berp_info_valid = 0;
 VAR_15->broadcom_cap_exist = 0;
 VAR_15->ralink_cap_exist = 0;
 VAR_15->atheros_cap_exist = 0;
 VAR_15->cisco_cap_exist = 0;
 VAR_15->unknown_cap_exist = 0;



 VAR_15->CountryIeLen = 0;
 FUNC_9(VAR_15->CountryIeBuf, 0, VAR_7);


 FUNC_0(&VAR_15->bssht);
 if (VAR_16->freq == VAR_1) {

  VAR_15->channel = VAR_16->received_channel;
 } else
  VAR_15->flags |= VAR_9;

 VAR_15->wpa_ie_len = 0;
 VAR_15->rsn_ie_len = 0;

 if (FUNC_4
     (VAR_13, VAR_14->info_element, VAR_16->len - sizeof(*VAR_14), VAR_15, VAR_16))
  return 1;

 VAR_15->mode = 0;
 if (VAR_16->freq == VAR_1)
  VAR_15->mode = VAR_2;
 else {
  if (VAR_15->flags & VAR_10)
   VAR_15->mode |= VAR_4;
  if (VAR_15->flags & VAR_9)
   VAR_15->mode |= VAR_3;
 }

 if (VAR_15->mode == 0) {
  FUNC_1("Filtered out '%s (%pM)' "
         "network.\n",
         FUNC_2(VAR_15->ssid,
        VAR_15->ssid_len),
         VAR_15->bssid);
  return 1;
 }

 if (VAR_15->bssht.bdSupportHT) {
  if (VAR_15->mode == VAR_2)
   VAR_15->mode = VAR_6;
  else if (VAR_15->mode & (VAR_4 | VAR_3))
   VAR_15->mode = VAR_5;
 }
 if (FUNC_3(VAR_15->ssid, VAR_15->ssid_len))
  VAR_15->flags |= VAR_8;

 VAR_16->signal = 30 + (VAR_16->SignalStrength * 70) / 100;

 VAR_16->noise = FUNC_5((u8)(100 - VAR_16->signal)) - 25;

 FUNC_8(&VAR_15->stats, VAR_16, sizeof(VAR_15->stats));

 return 0;
}
