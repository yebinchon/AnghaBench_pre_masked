
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
typedef size_t u32 ;
typedef int u16 ;
struct mwifiex_private {TYPE_5__* adapter; } ;
struct TYPE_13__ {void* len; void* type; } ;
struct mwifiex_ie_types_wildcard_ssid_params {TYPE_11__ header; int ssid; scalar_t__ max_ssid_length; } ;
struct TYPE_20__ {void* len; void* type; } ;
struct mwifiex_ie_types_repeat_count {TYPE_7__ header; void* repeat_count; } ;
struct TYPE_19__ {void* len; void* type; } ;
struct mwifiex_ie_types_num_probes {TYPE_6__ header; void* num_probes; } ;
struct TYPE_21__ {void* len; void* type; } ;
struct mwifiex_ie_types_min_rssi_threshold {TYPE_8__ header; void* rssi_threshold; } ;
struct TYPE_15__ {void* len; void* type; } ;
struct mwifiex_ie_types_chan_list_param_set {TYPE_2__ header; struct mwifiex_chan_scan_param_set* chan_scan_param; } ;
struct TYPE_16__ {void* len; void* type; } ;
struct mwifiex_ie_types_bgscan_start_later {TYPE_3__ header; void* start_later; } ;
struct mwifiex_chan_scan_param_set {void* max_scan_time; void* min_scan_time; int chan_scan_mode_bitmap; int radio_type; scalar_t__ chan_number; } ;
struct mwifiex_bg_scan_cfg {int action; int repeat_count; int rssi_threshold; int num_ssids; int start_later; TYPE_1__* chan_list; TYPE_10__* ssid_list; scalar_t__ num_probes; int chan_per_scan; int report_condition; int scan_interval; int bss_type; int enable; } ;
struct host_cmd_ds_802_11_bg_scan_config {scalar_t__* tlv; int chan_per_scan; int enable; void* report_condition; void* scan_interval; int bss_type; void* action; } ;
struct TYPE_17__ {struct host_cmd_ds_802_11_bg_scan_config bg_scan_config; } ;
struct host_cmd_ds_command {void* size; void* command; TYPE_4__ params; } ;
struct TYPE_22__ {size_t ssid_len; int ssid; } ;
struct TYPE_18__ {size_t passive_scan_time; size_t specific_scan_time; int dev; scalar_t__ scan_probes; } ;
struct TYPE_14__ {size_t scan_type; scalar_t__ scan_time; int radio_type; scalar_t__ chan_number; } ;
struct TYPE_12__ {TYPE_9__ ssid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (void*) ;
 int FUNC_4 (void**,int) ;
 int FUNC_5 (int ,int ,size_t) ;
 size_t FUNC_6 (struct mwifiex_private*,struct mwifiex_bg_scan_cfg*,struct mwifiex_chan_scan_param_set*) ;
 int FUNC_7 (struct mwifiex_private*,int ,scalar_t__**) ;

int FUNC_8(struct mwifiex_private *VAR_13,
          struct host_cmd_ds_command *VAR_14,
          void *VAR_15)
{
 struct host_cmd_ds_802_11_bg_scan_config *VAR_16 =
     &VAR_14->params.bg_scan_config;
 struct mwifiex_bg_scan_cfg *VAR_17 = VAR_15;
 u8 *VAR_18 = VAR_16->tlv;
 u8 VAR_19;
 u32 VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;
 int VAR_25;
 struct mwifiex_ie_types_num_probes *VAR_26;
 struct mwifiex_ie_types_repeat_count *VAR_27;
 struct mwifiex_ie_types_min_rssi_threshold *VAR_28;
 struct mwifiex_ie_types_bgscan_start_later *VAR_29;
 struct mwifiex_ie_types_wildcard_ssid_params *VAR_30;
 struct mwifiex_ie_types_chan_list_param_set *VAR_31;
 struct mwifiex_chan_scan_param_set *VAR_32;

 VAR_14->command = FUNC_0(VAR_0);
 VAR_14->size = FUNC_0(sizeof(*VAR_16) + VAR_6);

 VAR_16->action = FUNC_0(VAR_17->action);
 VAR_16->enable = VAR_17->enable;
 VAR_16->bss_type = VAR_17->bss_type;
 VAR_16->scan_interval =
  FUNC_1(VAR_17->scan_interval);
 VAR_16->report_condition =
  FUNC_1(VAR_17->report_condition);


 if (!VAR_16->enable)
  return 0;

 VAR_16->chan_per_scan = VAR_17->chan_per_scan;

 VAR_19 = (VAR_17->num_probes ? VAR_17->
        num_probes : VAR_13->adapter->scan_probes);

 if (VAR_19) {
  VAR_26 = (struct mwifiex_ie_types_num_probes *)VAR_18;
  VAR_26->header.type = FUNC_0(VAR_9);
  VAR_26->header.len =
   FUNC_0(sizeof(VAR_26->num_probes));
  VAR_26->num_probes = FUNC_0((u16)VAR_19);

  VAR_18 += sizeof(VAR_26->header) +
   FUNC_3(VAR_26->header.len);
 }

 if (VAR_17->repeat_count) {
  VAR_27 =
   (struct mwifiex_ie_types_repeat_count *)VAR_18;
  VAR_27->header.type =
   FUNC_0(VAR_10);
  VAR_27->header.len =
   FUNC_0(sizeof(VAR_27->repeat_count));
  VAR_27->repeat_count =
   FUNC_0(VAR_17->repeat_count);

  VAR_18 += sizeof(VAR_27->header) +
   FUNC_3(VAR_27->header.len);
 }

 if (VAR_17->rssi_threshold) {
  VAR_28 =
   (struct mwifiex_ie_types_min_rssi_threshold *)VAR_18;
  VAR_28->header.type =
   FUNC_0(VAR_11);
  VAR_28->header.len =
   FUNC_0(sizeof(VAR_28->rssi_threshold));
  VAR_28->rssi_threshold =
   FUNC_0(VAR_17->rssi_threshold);

  VAR_18 += sizeof(VAR_28->header) +
   FUNC_3(VAR_28->header.len);
 }

 for (VAR_25 = 0; VAR_25 < VAR_17->num_ssids; VAR_25++) {
  VAR_20 = VAR_17->ssid_list[VAR_25].ssid.ssid_len;

  VAR_30 =
   (struct mwifiex_ie_types_wildcard_ssid_params *)VAR_18;
  VAR_30->header.type =
    FUNC_0(VAR_12);
  VAR_30->header.len = FUNC_0(
    (u16)(VAR_20 + sizeof(VAR_30->
        max_ssid_length)));






  if (VAR_20)
   VAR_30->max_ssid_length = 0;
  else
   VAR_30->max_ssid_length =
      VAR_1;

  FUNC_5(VAR_30->ssid,
         VAR_17->ssid_list[VAR_25].ssid.ssid, VAR_20);

  VAR_18 += (sizeof(VAR_30->header)
    + FUNC_3(VAR_30->header.len));
 }

 VAR_31 = (struct mwifiex_ie_types_chan_list_param_set *)VAR_18;

 if (VAR_17->chan_list[0].chan_number) {
  FUNC_2(VAR_13->adapter->dev, "info: bgscan: Using supplied channel list\n");

  VAR_31->header.type = FUNC_0(VAR_8);

  for (VAR_21 = 0;
       VAR_21 < VAR_2 &&
       VAR_17->chan_list[VAR_21].chan_number;
       VAR_21++) {
   VAR_32 = VAR_31->chan_scan_param + VAR_21;


   FUNC_4(&VAR_31->header.len,
            sizeof(
            VAR_31->chan_scan_param));

   VAR_32->chan_number =
    VAR_17->chan_list[VAR_21].chan_number;
   VAR_32->radio_type =
    VAR_17->chan_list[VAR_21].radio_type;

   VAR_22 =
    VAR_17->chan_list[VAR_21].scan_type;

   if (VAR_22 == VAR_4)
    VAR_32->chan_scan_mode_bitmap
     |= VAR_3;
   else
    VAR_32->chan_scan_mode_bitmap
     &= ~VAR_3;

   if (VAR_17->chan_list[VAR_21].scan_time) {
    VAR_23 = (u16)VAR_17->
     chan_list[VAR_21].scan_time;
   } else {
    VAR_23 = (VAR_22 ==
         VAR_4) ?
         VAR_13->adapter->passive_scan_time :
         VAR_13->adapter->specific_scan_time;
   }

   VAR_32->min_scan_time = FUNC_0(VAR_23);
   VAR_32->max_scan_time = FUNC_0(VAR_23);
  }
 } else {
  FUNC_2(VAR_13->adapter->dev,
   "info: bgscan: Creating full region channel list\n");
  VAR_24 =
   FUNC_6(VAR_13, VAR_17,
          VAR_31->
          chan_scan_param);
  FUNC_4(&VAR_31->header.len,
           VAR_24 *
        sizeof(VAR_31->chan_scan_param[0]));
 }

 VAR_18 += (sizeof(VAR_31->header)
   + FUNC_3(VAR_31->header.len));

 if (VAR_17->start_later) {
  VAR_29 =
   (struct mwifiex_ie_types_bgscan_start_later *)VAR_18;
  VAR_29->header.type =
   FUNC_0(VAR_7);
  VAR_29->header.len =
   FUNC_0(sizeof(VAR_29->start_later));
  VAR_29->start_later =
   FUNC_0(VAR_17->start_later);

  VAR_18 += sizeof(VAR_29->header) +
   FUNC_3(VAR_29->header.len);
 }


 FUNC_7(VAR_13, VAR_5, &VAR_18);

 FUNC_4(&VAR_14->size, VAR_18 - VAR_16->tlv);

 return 0;
}
