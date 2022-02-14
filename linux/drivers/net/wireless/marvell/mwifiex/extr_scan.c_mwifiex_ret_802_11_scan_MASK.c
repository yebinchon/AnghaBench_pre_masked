
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_11__ {TYPE_4__* wiphy; } ;
struct mwifiex_private {TYPE_5__ wdev; struct mwifiex_adapter* adapter; } ;
struct mwifiex_ie_types_tsf_timestamp {int * tsf_data; } ;
struct mwifiex_ie_types_data {int dummy; } ;
struct mwifiex_ie_types_chan_band_list_param_set {struct chan_band_param_set* chan_band_param; } ;
struct mwifiex_adapter {TYPE_6__* nd_info; } ;
struct host_cmd_ds_802_11_scan_rsp {int number_of_sets; int* bss_desc_and_tlv_buffer; int bss_descript_size; } ;
struct TYPE_7__ {struct host_cmd_ds_802_11_scan_rsp scan_resp; } ;
struct TYPE_8__ {struct host_cmd_ds_802_11_scan_rsp scan_resp; TYPE_1__ bg_scan_query_resp; } ;
struct host_cmd_ds_command {int size; TYPE_2__ params; int command; } ;
struct chan_band_param_set {int radio_type; int chan_number; } ;
struct cfg80211_wowlan_nd_match {int n_channels; int * channels; } ;
struct cfg80211_sched_scan_request {int dummy; } ;
typedef int fw_tsf ;
typedef int __le64 ;
struct TYPE_12__ {int n_matches; struct cfg80211_wowlan_nd_match** matches; } ;
struct TYPE_10__ {TYPE_3__* wowlan_config; } ;
struct TYPE_9__ {struct cfg80211_sched_scan_request* nd_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (struct mwifiex_private*) ;
 int FUNC_5 (struct mwifiex_private*) ;
 int FUNC_6 (struct mwifiex_adapter*,int ,char*,int) ;
 int FUNC_7 (struct mwifiex_private*,int**,int*,int ,int*,int,int ) ;
 int FUNC_8 (struct mwifiex_adapter*,struct mwifiex_ie_types_data*,int,int ,struct mwifiex_ie_types_data**) ;

int FUNC_9(struct mwifiex_private *VAR_9,
       struct host_cmd_ds_command *VAR_10)
{
 int VAR_11 = 0;
 struct mwifiex_adapter *VAR_12 = VAR_9->adapter;
 struct host_cmd_ds_802_11_scan_rsp *VAR_13;
 struct mwifiex_ie_types_data *VAR_14;
 struct mwifiex_ie_types_tsf_timestamp *VAR_15;
 u8 *VAR_16;
 u32 VAR_17;
 u32 VAR_18;
 u32 VAR_19;
 u32 VAR_20;
 struct mwifiex_ie_types_chan_band_list_param_set *VAR_21;
 struct chan_band_param_set *VAR_22;
 u8 VAR_23;
 __le64 VAR_24 = 0;
 u8 *VAR_25;
 struct cfg80211_wowlan_nd_match *VAR_26;
 struct cfg80211_sched_scan_request *VAR_27 = ((void*)0);

 VAR_23 = (FUNC_1(VAR_10->command)
     == VAR_2);
 if (VAR_23)
  VAR_13 = &VAR_10->params.bg_scan_query_resp.scan_resp;
 else
  VAR_13 = &VAR_10->params.scan_resp;


 if (VAR_13->number_of_sets > VAR_4) {
  FUNC_6(VAR_12, VAR_0,
       "SCAN_RESP: too many AP returned (%d)\n",
       VAR_13->number_of_sets);
  VAR_11 = -1;
  goto check_next_scan;
 }


 FUNC_4(VAR_9);

 VAR_18 = FUNC_1(VAR_13->bss_descript_size);
 FUNC_6(VAR_12, VAR_3,
      "info: SCAN_RESP: bss_descript_size %d\n",
      VAR_18);

 VAR_17 = FUNC_1(VAR_10->size);

 FUNC_6(VAR_12, VAR_3,
      "info: SCAN_RESP: returned %d APs before parsing\n",
      VAR_13->number_of_sets);

 VAR_16 = VAR_13->bss_desc_and_tlv_buffer;







 VAR_20 = VAR_17 - (VAR_18
      + sizeof(VAR_13->bss_descript_size)
      + sizeof(VAR_13->number_of_sets)
      + VAR_5);

 VAR_14 = (struct mwifiex_ie_types_data *) (VAR_13->
       bss_desc_and_tlv_buffer +
       VAR_18);



 FUNC_8(VAR_12, VAR_14, VAR_20,
          VAR_7,
          (struct mwifiex_ie_types_data **)
          &VAR_15);



 FUNC_8(VAR_12, VAR_14, VAR_20,
          VAR_6,
          (struct mwifiex_ie_types_data **)
          &VAR_21);






 if (VAR_27) {
  VAR_12->nd_info =
   FUNC_0(sizeof(struct cfg80211_wowlan_nd_match) +
    sizeof(struct cfg80211_wowlan_nd_match *) *
    VAR_13->number_of_sets, VAR_1);

  if (VAR_12->nd_info)
   VAR_12->nd_info->n_matches = VAR_13->number_of_sets;
 }

 for (VAR_19 = 0; VAR_19 < VAR_13->number_of_sets && VAR_18; VAR_19++) {






  if (VAR_15)
   FUNC_3(&VAR_24, &VAR_15->tsf_data[VAR_19 * VAR_8],
          sizeof(VAR_24));

  if (VAR_21) {
   VAR_22 = &VAR_21->chan_band_param[VAR_19];
   VAR_25 = &VAR_22->radio_type;
  } else {
   VAR_25 = ((void*)0);
  }

  if (VAR_21 && VAR_12->nd_info) {
   VAR_12->nd_info->matches[VAR_19] =
    FUNC_0(sizeof(*VAR_26) + sizeof(u32),
     VAR_1);

   VAR_26 = VAR_12->nd_info->matches[VAR_19];

   if (VAR_26) {
    VAR_26->n_channels = 1;
    VAR_26->channels[0] = VAR_22->chan_number;
   }
  }

  VAR_11 = FUNC_7(VAR_9, &VAR_16,
       &VAR_18,
       FUNC_2(VAR_24),
       VAR_25, 0, 0);
  if (VAR_11)
   goto check_next_scan;
 }

check_next_scan:
 FUNC_5(VAR_9);
 return VAR_11;
}
