
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct libipw_rx_stats {int dummy; } ;
struct libipw_qos_data {int dummy; } ;
struct TYPE_3__ {scalar_t__ received_channel; int active; int supported; int old_param_count; int param_count; } ;
struct libipw_network {scalar_t__ channel; int rates_len; int rates_ex_len; int flags; int wpa_ie_len; int rsn_ie_len; TYPE_1__ qos_data; int ssid; scalar_t__ ssid_len; int last_scanned; TYPE_1__* rsn_ie; TYPE_1__* wpa_ie; int tim; int erp_value; int atim_window; int listen_interval; int beacon_interval; int * time_stamp; int mode; TYPE_1__* rates_ex; TYPE_1__* rates; int capability; TYPE_1__ stats; int bssid; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int ,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_3(struct libipw_network *VAR_2,
      struct libipw_network *VAR_3)
{
 int VAR_4;
 u8 VAR_5;






 if (VAR_2->channel == VAR_3->stats.received_channel)
  FUNC_2(&VAR_2->stats, &VAR_3->stats,
         sizeof(struct libipw_rx_stats));
 else
  FUNC_1("Network %pM info received "
   "off channel (%d vs. %d)\n", VAR_3->bssid,
   VAR_2->channel, VAR_3->stats.received_channel);

 VAR_2->capability = VAR_3->capability;
 FUNC_2(VAR_2->rates, VAR_3->rates, VAR_3->rates_len);
 VAR_2->rates_len = VAR_3->rates_len;
 FUNC_2(VAR_2->rates_ex, VAR_3->rates_ex, VAR_3->rates_ex_len);
 VAR_2->rates_ex_len = VAR_3->rates_ex_len;

 VAR_2->mode = VAR_3->mode;
 VAR_2->flags = VAR_3->flags;
 VAR_2->time_stamp[0] = VAR_3->time_stamp[0];
 VAR_2->time_stamp[1] = VAR_3->time_stamp[1];

 VAR_2->beacon_interval = VAR_3->beacon_interval;
 VAR_2->listen_interval = VAR_3->listen_interval;
 VAR_2->atim_window = VAR_3->atim_window;
 VAR_2->erp_value = VAR_3->erp_value;
 VAR_2->tim = VAR_3->tim;

 FUNC_2(VAR_2->wpa_ie, VAR_3->wpa_ie, VAR_3->wpa_ie_len);
 VAR_2->wpa_ie_len = VAR_3->wpa_ie_len;
 FUNC_2(VAR_2->rsn_ie, VAR_3->rsn_ie, VAR_3->rsn_ie_len);
 VAR_2->rsn_ie_len = VAR_3->rsn_ie_len;

 VAR_2->last_scanned = VAR_1;
 VAR_4 = VAR_3->qos_data.active;
 VAR_5 = VAR_2->qos_data.old_param_count;
 if (VAR_2->flags & VAR_0)
  FUNC_2(&VAR_2->qos_data, &VAR_3->qos_data,
         sizeof(struct libipw_qos_data));
 else {
  VAR_2->qos_data.supported = VAR_3->qos_data.supported;
  VAR_2->qos_data.param_count = VAR_3->qos_data.param_count;
 }

 if (VAR_2->qos_data.supported == 1) {
  if (VAR_2->ssid_len)
   FUNC_0
       ("QoS the network %s is QoS supported\n",
        VAR_2->ssid);
  else
   FUNC_0
       ("QoS the network is QoS supported\n");
 }
 VAR_2->qos_data.active = VAR_4;
 VAR_2->qos_data.old_param_count = VAR_5;


}
