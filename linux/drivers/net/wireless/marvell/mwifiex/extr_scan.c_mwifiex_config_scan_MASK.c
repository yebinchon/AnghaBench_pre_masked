
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


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct mwifiex_user_scan_cfg {int* specific_bssid; int num_ssids; int scan_chan_gap; TYPE_8__* chan_list; int random_mac; TYPE_1__* ssid_list; scalar_t__ num_probes; scalar_t__ bss_mode; } ;
struct mwifiex_scan_cmd_config {int* tlv_buf; int bss_mode; int* specific_bssid; scalar_t__ tlv_buf_len; } ;
struct TYPE_22__ {scalar_t__ channel; } ;
struct TYPE_12__ {TYPE_9__ bss_descriptor; } ;
struct mwifiex_private {TYPE_10__ curr_bss_params; struct mwifiex_adapter* adapter; int media_connected; } ;
struct TYPE_15__ {void* len; void* type; } ;
struct mwifiex_ie_types_wildcard_ssid_params {int max_ssid_length; int* ssid; TYPE_2__ header; } ;
struct TYPE_16__ {void* len; void* type; } ;
struct mwifiex_ie_types_scan_chan_gap {void* chan_gap; TYPE_3__ header; } ;
struct TYPE_17__ {void* len; void* type; } ;
struct mwifiex_ie_types_random_mac {int mac; TYPE_4__ header; } ;
struct TYPE_19__ {void* len; void* type; } ;
struct mwifiex_ie_types_num_probes {TYPE_6__ header; void* num_probes; } ;
struct TYPE_20__ {void* len; void* type; } ;
struct mwifiex_ie_types_htcap {int ht_cap; TYPE_7__ header; } ;
struct mwifiex_ie_types_chan_list_param_set {int dummy; } ;
struct TYPE_13__ {void* len; void* type; } ;
struct mwifiex_ie_types_bssid_list {int* bssid; TYPE_11__ header; } ;
struct TYPE_18__ {void* len; void* type; } ;
struct mwifiex_ie_types_bss_mode {int bss_mode; TYPE_5__ header; } ;
struct mwifiex_chan_scan_param_set {int chan_number; int radio_type; int chan_scan_mode_bitmap; void* max_scan_time; void* min_scan_time; } ;
struct mwifiex_adapter {int scan_probes; int config_bands; int passive_scan_time; int specific_scan_time; int active_scan_time; int fw_cap_info; scalar_t__ ext_scan; scalar_t__ scan_mode; } ;
struct ieee80211_ht_cap {int dummy; } ;
struct TYPE_21__ {int chan_number; int radio_type; int scan_type; scalar_t__ scan_time; } ;
struct TYPE_14__ {int ssid_len; int* ssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int const*) ;
 int FUNC_4 (int*) ;
 scalar_t__ FUNC_5 (void*) ;
 int FUNC_6 (int*,char*,int) ;
 int FUNC_7 (int*,int*,int) ;
 int FUNC_8 (struct mwifiex_ie_types_htcap*,int ,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct mwifiex_private*,int ,int**) ;
 int FUNC_11 (struct mwifiex_adapter*,int ,char*,...) ;
 int FUNC_12 (struct mwifiex_private*,int,int *) ;
 int FUNC_13 (struct mwifiex_private*,struct mwifiex_user_scan_cfg const*,struct mwifiex_chan_scan_param_set*,int) ;

__attribute__((used)) static void
FUNC_14(struct mwifiex_private *VAR_20,
      const struct mwifiex_user_scan_cfg *VAR_21,
      struct mwifiex_scan_cmd_config *VAR_22,
      struct mwifiex_ie_types_chan_list_param_set **VAR_23,
      struct mwifiex_chan_scan_param_set *VAR_24,
      u8 *VAR_25, u8 *VAR_26,
      u8 *VAR_27)
{
 struct mwifiex_adapter *VAR_28 = VAR_20->adapter;
 struct mwifiex_ie_types_num_probes *VAR_29;
 struct mwifiex_ie_types_scan_chan_gap *VAR_30;
 struct mwifiex_ie_types_random_mac *VAR_31;
 struct mwifiex_ie_types_wildcard_ssid_params *VAR_32;
 struct mwifiex_ie_types_bssid_list *VAR_33;
 u8 *VAR_34;
 u32 VAR_35;
 u32 VAR_36;
 u32 VAR_37;
 u32 VAR_38;
 u16 VAR_39;
 u8 VAR_40;
 u8 VAR_41;
 int VAR_42;
 u8 VAR_43;
 struct mwifiex_ie_types_htcap *VAR_44;
 struct mwifiex_ie_types_bss_mode *VAR_45;
 const u8 VAR_46[6] = {0, 0, 0, 0, 0, 0};






 VAR_22->tlv_buf_len = 0;




 VAR_34 = VAR_22->tlv_buf;



 *VAR_26 = 0;




 *VAR_27 = 0;

 if (VAR_21) {
  u8 VAR_47[VAR_2];




  VAR_43 = 1;



  VAR_22->bss_mode =
   (u8)(VAR_21->bss_mode ?: VAR_28->scan_mode);



  VAR_35 = VAR_21->num_probes ?: VAR_28->scan_probes;






  FUNC_7(VAR_22->specific_bssid,
         VAR_21->specific_bssid,
         sizeof(VAR_22->specific_bssid));

  FUNC_7(VAR_47, VAR_22->specific_bssid, VAR_2);

  if (VAR_28->ext_scan &&
      !FUNC_4(VAR_47)) {
   VAR_33 =
    (struct mwifiex_ie_types_bssid_list *)VAR_34;
   VAR_33->header.type = FUNC_1(VAR_13);
   VAR_33->header.len = FUNC_1(VAR_2);
   FUNC_7(VAR_33->bssid, VAR_21->specific_bssid,
          VAR_2);
   VAR_34 += sizeof(struct mwifiex_ie_types_bssid_list);
  }

  for (VAR_42 = 0; VAR_42 < VAR_21->num_ssids; VAR_42++) {
   VAR_36 = VAR_21->ssid_list[VAR_42].ssid_len;

   VAR_32 =
    (struct mwifiex_ie_types_wildcard_ssid_params *)
    VAR_34;
   VAR_32->header.type =
    FUNC_1(VAR_18);
   VAR_32->header.len = FUNC_1(
    (u16) (VAR_36 + sizeof(VAR_32->
        max_ssid_length)));







   if (VAR_36)
    VAR_32->max_ssid_length = 0;
   else
    VAR_32->max_ssid_length =
       VAR_3;

   if (!FUNC_6(VAR_21->ssid_list[VAR_42].ssid,
        "DIRECT-", 7))
    VAR_32->max_ssid_length = 0xfe;

   FUNC_7(VAR_32->ssid,
          VAR_21->ssid_list[VAR_42].ssid, VAR_36);

   VAR_34 += (sizeof(VAR_32->header)
    + FUNC_5(VAR_32->header.len));

   FUNC_11(VAR_28, VAR_4,
        "info: scan: ssid[%d]: %s, %d\n",
        VAR_42, VAR_32->ssid,
        VAR_32->max_ssid_length);





   if (!VAR_36 && VAR_32->max_ssid_length)
    VAR_43 = 0;
  }







  FUNC_7(VAR_47, VAR_22->specific_bssid, VAR_2);
  if ((VAR_42 && VAR_43) ||
      !FUNC_4(VAR_47))
   *VAR_26 = 1;

  if (VAR_21->scan_chan_gap) {
   FUNC_11(VAR_28, VAR_4,
        "info: scan: channel gap = %d\n",
        VAR_21->scan_chan_gap);
   *VAR_25 =
     VAR_8;

   VAR_30 = (void *)VAR_34;
   VAR_30->header.type =
      FUNC_1(VAR_17);
   VAR_30->header.len =
        FUNC_1(sizeof(VAR_30->chan_gap));
   VAR_30->chan_gap =
         FUNC_1((VAR_21->scan_chan_gap));
   VAR_34 +=
      sizeof(struct mwifiex_ie_types_scan_chan_gap);
  }

  if (!FUNC_3(VAR_21->random_mac, VAR_46)) {
   VAR_31 = (void *)VAR_34;
   VAR_31->header.type =
      FUNC_1(VAR_16);
   VAR_31->header.len =
        FUNC_1(sizeof(VAR_31->mac));
   FUNC_2(VAR_31->mac,
     VAR_21->random_mac);
   VAR_34 +=
      sizeof(struct mwifiex_ie_types_random_mac);
  }
 } else {
  VAR_22->bss_mode = (u8) VAR_28->scan_mode;
  VAR_35 = VAR_28->scan_probes;
 }





 if (*VAR_26) {
  *VAR_25 = VAR_8;
 } else {
  if (!VAR_20->media_connected)
   *VAR_25 = VAR_5;
  else
   *VAR_25 =
     VAR_5 / 2;
 }

 if (VAR_28->ext_scan) {
  VAR_45 = (struct mwifiex_ie_types_bss_mode *)VAR_34;
  VAR_45->header.type = FUNC_1(VAR_14);
  VAR_45->header.len = FUNC_1(sizeof(VAR_45->bss_mode));
  VAR_45->bss_mode = VAR_22->bss_mode;
  VAR_34 += sizeof(VAR_45->header) +
      FUNC_5(VAR_45->header.len);
 }



 if (VAR_35) {

  FUNC_11(VAR_28, VAR_4,
       "info: scan: num_probes = %d\n",
       VAR_35);

  VAR_29 = (struct mwifiex_ie_types_num_probes *) VAR_34;
  VAR_29->header.type = FUNC_1(VAR_15);
  VAR_29->header.len =
   FUNC_1(sizeof(VAR_29->num_probes));
  VAR_29->num_probes = FUNC_1((u16) VAR_35);

  VAR_34 += sizeof(VAR_29->header) +
   FUNC_5(VAR_29->header.len);

 }

 if (FUNC_0(VAR_20->adapter->fw_cap_info) &&
     (VAR_20->adapter->config_bands & VAR_1 ||
      VAR_20->adapter->config_bands & VAR_0)) {
  VAR_44 = (struct mwifiex_ie_types_htcap *) VAR_34;
  FUNC_8(VAR_44, 0, sizeof(struct mwifiex_ie_types_htcap));
  VAR_44->header.type = FUNC_1(VAR_19);
  VAR_44->header.len =
    FUNC_1(sizeof(struct ieee80211_ht_cap));
  VAR_41 =
   FUNC_9(VAR_20->adapter->config_bands);
  FUNC_12(VAR_20, VAR_41, &VAR_44->ht_cap);
  VAR_34 += sizeof(struct mwifiex_ie_types_htcap);
 }


 FUNC_10(VAR_20, VAR_12, &VAR_34);







 *VAR_23 =
  (struct mwifiex_ie_types_chan_list_param_set *) VAR_34;

 if (VAR_21 && VAR_21->chan_list[0].chan_number) {

  FUNC_11(VAR_28, VAR_4,
       "info: Scan: Using supplied channel list\n");

  for (VAR_37 = 0;
       VAR_37 < VAR_11 &&
       VAR_21->chan_list[VAR_37].chan_number;
       VAR_37++) {

   VAR_40 = VAR_21->chan_list[VAR_37].chan_number;
   VAR_24[VAR_37].chan_number = VAR_40;

   VAR_41 =
    VAR_21->chan_list[VAR_37].radio_type;
   VAR_24[VAR_37].radio_type = VAR_41;

   VAR_38 = VAR_21->chan_list[VAR_37].scan_type;

   if (VAR_38 == VAR_10)
    VAR_24[VAR_37].chan_scan_mode_bitmap
     |= (VAR_9 |
         VAR_7);
   else
    VAR_24[VAR_37].chan_scan_mode_bitmap
     &= ~VAR_9;

   VAR_24[VAR_37].chan_scan_mode_bitmap
    |= VAR_6;

   if (VAR_21->chan_list[VAR_37].scan_time) {
    VAR_39 = (u16) VAR_21->
     chan_list[VAR_37].scan_time;
   } else {
    if (VAR_38 == VAR_10)
     VAR_39 = VAR_28->passive_scan_time;
    else if (*VAR_26)
     VAR_39 = VAR_28->specific_scan_time;
    else
     VAR_39 = VAR_28->active_scan_time;
   }

   VAR_24[VAR_37].min_scan_time =
    FUNC_1(VAR_39);
   VAR_24[VAR_37].max_scan_time =
    FUNC_1(VAR_39);
  }


  if ((VAR_37 == 1) &&
      (VAR_21->chan_list[0].chan_number ==
       VAR_20->curr_bss_params.bss_descriptor.channel)) {
   *VAR_27 = 1;
   FUNC_11(VAR_28, VAR_4,
        "info: Scan: Scanning current channel only\n");
  }
 } else {
  FUNC_11(VAR_28, VAR_4,
       "info: Scan: Creating full region channel list\n");
  FUNC_13(VAR_20, VAR_21,
       VAR_24,
       *VAR_26);
 }

}
