
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct libipw_rx_stats {scalar_t__ freq; scalar_t__ len; int received_channel; } ;
struct TYPE_4__ {struct libipw_rx_stats* addr3; } ;
struct libipw_probe_response {int info_element; int beacon_interval; int * time_stamp; int capability; TYPE_2__ header; } ;
struct TYPE_3__ {scalar_t__ old_param_count; scalar_t__ param_count; scalar_t__ supported; scalar_t__ active; } ;
struct libipw_network {int capability; int listen_interval; int flags; int erp_value; int stats; int * bssid; int ssid; scalar_t__ ssid_len; int mode; scalar_t__ rsn_ie_len; scalar_t__ wpa_ie_len; int channel; scalar_t__ atim_window; scalar_t__ last_associate; scalar_t__ rates_ex_len; scalar_t__ rates_len; void* beacon_interval; void** time_stamp; int last_scanned; TYPE_1__ qos_data; } ;
struct libipw_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,scalar_t__,int ,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,scalar_t__,struct libipw_network*) ;
 int FUNC_4 (int *,struct libipw_rx_stats*,int) ;

__attribute__((used)) static int FUNC_5(struct libipw_device *VAR_9, struct libipw_probe_response
      *VAR_10,
      struct libipw_network *VAR_11,
      struct libipw_rx_stats *VAR_12)
{
 VAR_11->qos_data.active = 0;
 VAR_11->qos_data.supported = 0;
 VAR_11->qos_data.param_count = 0;
 VAR_11->qos_data.old_param_count = 0;


 FUNC_4(VAR_11->bssid, VAR_10->header.addr3, VAR_0);
 VAR_11->capability = FUNC_1(VAR_10->capability);
 VAR_11->last_scanned = VAR_8;
 VAR_11->time_stamp[0] = FUNC_2(VAR_10->time_stamp[0]);
 VAR_11->time_stamp[1] = FUNC_2(VAR_10->time_stamp[1]);
 VAR_11->beacon_interval = FUNC_1(VAR_10->beacon_interval);

 VAR_11->listen_interval = 0x0A;
 VAR_11->rates_len = VAR_11->rates_ex_len = 0;
 VAR_11->last_associate = 0;
 VAR_11->ssid_len = 0;
 VAR_11->flags = 0;
 VAR_11->atim_window = 0;
 VAR_11->erp_value = (VAR_11->capability & VAR_7) ?
     0x3 : 0x0;

 if (VAR_12->freq == VAR_4) {

  VAR_11->channel = VAR_12->received_channel;
 } else
  VAR_11->flags |= VAR_5;

 VAR_11->wpa_ie_len = 0;
 VAR_11->rsn_ie_len = 0;

 if (FUNC_3
     (VAR_10->info_element, VAR_12->len - sizeof(*VAR_10), VAR_11))
  return 1;

 VAR_11->mode = 0;
 if (VAR_12->freq == VAR_4)
  VAR_11->mode = VAR_1;
 else {
  if (VAR_11->flags & VAR_6)
   VAR_11->mode |= VAR_3;
  if (VAR_11->flags & VAR_5)
   VAR_11->mode |= VAR_2;
 }

 if (VAR_11->mode == 0) {
  FUNC_0("Filtered out '%*pE (%pM)' network.\n",
      VAR_11->ssid_len, VAR_11->ssid,
      VAR_11->bssid);
  return 1;
 }

 FUNC_4(&VAR_11->stats, VAR_12, sizeof(VAR_11->stats));

 return 0;
}
