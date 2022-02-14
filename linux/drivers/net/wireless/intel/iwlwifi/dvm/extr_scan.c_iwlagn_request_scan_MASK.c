
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_15__ ;
typedef struct TYPE_20__ TYPE_14__ ;
typedef struct TYPE_19__ TYPE_13__ ;
typedef struct TYPE_18__ TYPE_12__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_27__ {int life_time; } ;
struct TYPE_20__ {void* len; int rate_n_flags; int tx_flags; TYPE_6__ stop_time; int sta_id; } ;
struct iwl_scan_cmd {int flags; int filter_flags; int channel_count; void* len; TYPE_14__ tx_cmd; int * data; void* rx_chain; void* good_CRC_th; TYPE_4__* direct_scan; void* quiet_time; void* suspend_time; void* max_out_time; int quiet_plcp_th; } ;
struct iwl_scan_channel {int dummy; } ;
struct TYPE_28__ {int flags; } ;
struct iwl_rxon_context {TYPE_7__ active; int bcast_sta_id; } ;
struct TYPE_16__ {int active_chains; } ;
struct iwl_priv {int scan_type; int scan_band; int status; TYPE_13__* scan_request; TYPE_15__* nvm_data; scalar_t__ bt_full_concurrent; TYPE_12__* lib; TYPE_10__ chain_noise_data; TYPE_9__* hw; int * scan_tx_ant; scalar_t__ new_scan_threshold_behaviour; struct iwl_rxon_context* contexts; struct iwl_scan_cmd* scan_cmd; int mutex; TYPE_2__* fw; } ;
struct iwl_host_cmd {int* len; int * dataflags; struct iwl_scan_cmd** data; int id; } ;
struct TYPE_24__ {int beacon_int; } ;
struct ieee80211_vif {int addr; TYPE_3__ bss_conf; } ;
struct ieee80211_mgmt {int dummy; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_29__ {int flags; } ;
struct TYPE_30__ {TYPE_8__ conf; } ;
struct TYPE_26__ {int ssid_len; int* ssid; } ;
struct TYPE_25__ {int len; int ssid; int id; } ;
struct TYPE_22__ {int max_probe_length; } ;
struct TYPE_23__ {TYPE_1__ ucode_capa; } ;
struct TYPE_21__ {int valid_rx_ant; int valid_tx_ant; } ;
struct TYPE_19__ {int n_channels; int ie_len; int * ie; int no_cck; TYPE_5__* ssids; int n_ssids; } ;
struct TYPE_18__ {TYPE_11__* bt_params; } ;
struct TYPE_17__ {scalar_t__ advanced_bt_coexist; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int FUNC_1 (struct iwl_priv*,char*) ;
 int FUNC_2 (struct iwl_priv*,char*,...) ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;


 int FUNC_3 (struct iwl_priv*,char*) ;
 int VAR_16 ;


 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_34 ;
 int FUNC_5 (int ,int *) ;
 void* FUNC_6 (int) ;
 void* FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ) ;
 int VAR_35 ;
 int FUNC_10 (struct iwl_priv*,struct iwl_host_cmd*) ;
 int FUNC_11 (struct ieee80211_mgmt*,int ,int *,int ,int const*,int,int) ;
 int FUNC_12 (struct iwl_priv*,struct ieee80211_vif*,int,void*) ;
 int FUNC_13 (struct iwl_priv*,struct ieee80211_vif*,int,int,int,void*) ;
 int FUNC_14 (int,int) ;
 scalar_t__ FUNC_15 (struct iwl_priv*) ;
 struct iwl_rxon_context* FUNC_16 (struct ieee80211_vif*) ;
 int FUNC_17 (struct iwl_priv*,int ,int) ;
 int FUNC_18 (struct iwl_priv*) ;
 struct iwl_scan_cmd* FUNC_19 (int,int ) ;
 scalar_t__ FUNC_20 (void*) ;
 int FUNC_21 (int) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int ,int*,int) ;
 int FUNC_24 (struct iwl_scan_cmd*,int ,int) ;
 int FUNC_25 (int ,int *) ;
 scalar_t__ FUNC_26 (int ,int *) ;

__attribute__((used)) static int FUNC_27(struct iwl_priv *VAR_36, struct ieee80211_vif *VAR_37)
{
 struct iwl_host_cmd VAR_38 = {
  .id = VAR_18,
  .len = sizeof(struct iwl_scan_cmd), 
 };
 struct iwl_scan_cmd *VAR_39;
 struct iwl_rxon_context *VAR_40 = &VAR_36->contexts[VAR_15];
 u32 VAR_41 = 0;
 u16 VAR_42 = 0;
 u16 VAR_43 = 0;
 enum nl80211_band VAR_44;
 u8 VAR_45 = 0;
 u8 VAR_46 = VAR_36->nvm_data->valid_rx_ant;
 u8 VAR_47;
 bool VAR_48 = 0;
 int VAR_49;
 u8 VAR_50;
 u8 VAR_51 = VAR_36->nvm_data->valid_tx_ant;
 int VAR_52;
 int VAR_53 = sizeof(struct iwl_scan_cmd) +
       VAR_16 * sizeof(struct iwl_scan_channel) +
       VAR_36->fw->ucode_capa.max_probe_length;
 const u8 *VAR_54 = ((void*)0);
 u8 VAR_55 = 0;

 if (FUNC_4(VAR_36->scan_type == 131 &&
      (!VAR_36->scan_request ||
       VAR_36->scan_request->n_channels > VAR_16)))
  return -VAR_1;

 FUNC_22(&VAR_36->mutex);

 if (VAR_37)
  VAR_40 = FUNC_16(VAR_37);

 if (!VAR_36->scan_cmd) {
  VAR_36->scan_cmd = FUNC_19(VAR_53, VAR_4);
  if (!VAR_36->scan_cmd) {
   FUNC_2(VAR_36,
           "fail to allocate memory for scan\n");
   return -VAR_3;
  }
 }
 VAR_39 = VAR_36->scan_cmd;
 FUNC_24(VAR_39, 0, VAR_53);

 VAR_39->quiet_plcp_th = VAR_11;
 VAR_39->quiet_time = VAR_6;

 if (FUNC_15(VAR_36)) {
  u16 VAR_56 = 0;
  u32 VAR_57;
  u32 VAR_58 = 100;
  u32 VAR_59 = 100;

  FUNC_1(VAR_36, "Scanning while associated...\n");
  switch (VAR_36->scan_type) {
  case 130:
   VAR_56 = 0;
   break;
  case 131:
   VAR_56 = VAR_37->bss_conf.beacon_int;
   break;
  }

  VAR_39->suspend_time = 0;
  VAR_39->max_out_time = FUNC_7(200 * 1024);
  if (!VAR_56)
   VAR_56 = VAR_58;

  VAR_57 = (VAR_58 / VAR_56) << 22;
  VAR_59 = (VAR_57 |
      ((VAR_58 % VAR_56) * 1024));
  VAR_39->suspend_time = FUNC_7(VAR_59);
  FUNC_2(VAR_36, "suspend_time 0x%X beacon interval %d\n",
          VAR_59, VAR_56);
 }

 switch (VAR_36->scan_type) {
 case 130:
  FUNC_2(VAR_36, "Start internal passive scan.\n");





  VAR_39->quiet_time = FUNC_6(VAR_12);
  break;
 case 131:
  if (VAR_36->scan_request->n_ssids) {
   int VAR_60, VAR_61 = 0;
   FUNC_2(VAR_36, "Kicking off active scan\n");




   VAR_55 = VAR_36->scan_request->ssids[0].ssid_len;
   VAR_54 = VAR_36->scan_request->ssids[0].ssid;





   for (VAR_60 = VAR_36->scan_request->n_ssids - 1; VAR_60 >= 1; VAR_60--) {
    VAR_39->direct_scan[VAR_61].id = VAR_34;
    VAR_39->direct_scan[VAR_61].len =
     VAR_36->scan_request->ssids[VAR_60].ssid_len;
    FUNC_23(VAR_39->direct_scan[VAR_61].ssid,
           VAR_36->scan_request->ssids[VAR_60].ssid,
           VAR_36->scan_request->ssids[VAR_60].ssid_len);
    VAR_45++;
    VAR_61++;
   }
   VAR_48 = 1;
  } else
   FUNC_2(VAR_36, "Start passive scan.\n");
  break;
 }

 VAR_39->tx_cmd.tx_flags = VAR_32;
 VAR_39->tx_cmd.sta_id = VAR_40->bcast_sta_id;
 VAR_39->tx_cmd.stop_time.life_time = VAR_33;

 switch (VAR_36->scan_band) {
 case 129:
  VAR_39->flags = VAR_22 | VAR_21;
  VAR_49 = FUNC_21(
   VAR_36->contexts[VAR_15].active.flags &
      VAR_23)
           >> VAR_24;
  if ((VAR_36->scan_request && VAR_36->scan_request->no_cck) ||
      VAR_49 == VAR_0) {
   VAR_47 = VAR_14;
  } else {
   VAR_47 = VAR_13;
   VAR_41 = VAR_17;
  }




  if (VAR_36->lib->bt_params &&
      VAR_36->lib->bt_params->advanced_bt_coexist)
   VAR_39->tx_cmd.tx_flags |= VAR_31;
  break;
 case 128:
  VAR_47 = VAR_14;
  break;
 default:
  FUNC_3(VAR_36, "Invalid scan band\n");
  return -VAR_2;
 }
 if (VAR_36->new_scan_threshold_behaviour)
  VAR_39->good_CRC_th = VAR_48 ? VAR_7 :
      VAR_8;
 else
  VAR_39->good_CRC_th = VAR_48 ? VAR_7 :
      VAR_9;

 VAR_44 = VAR_36->scan_band;

 if (VAR_44 == 129 &&
     VAR_36->lib->bt_params &&
     VAR_36->lib->bt_params->advanced_bt_coexist) {

  VAR_51 = FUNC_8(VAR_51);
 }

 VAR_36->scan_tx_ant[VAR_44] = FUNC_17(VAR_36,
          VAR_36->scan_tx_ant[VAR_44],
          VAR_51);
 VAR_41 |= FUNC_9(VAR_36->scan_tx_ant[VAR_44]);
 VAR_39->tx_cmd.rate_n_flags = FUNC_14(VAR_47, VAR_41);





 if (FUNC_26(VAR_29, &VAR_36->status) &&
     !(VAR_36->hw->conf.flags & VAR_5)) {

  VAR_50 = VAR_46 &
    ((u8)(VAR_36->chain_noise_data.active_chains));
  if (!VAR_50)
   VAR_50 = VAR_46;

  FUNC_2(VAR_36, "chain_noise_data.active_chains: %u\n",
    VAR_36->chain_noise_data.active_chains);

  VAR_46 = FUNC_8(VAR_50);
 }
 if (VAR_36->lib->bt_params &&
     VAR_36->lib->bt_params->advanced_bt_coexist &&
     VAR_36->bt_full_concurrent) {

  VAR_46 = FUNC_8(VAR_46);
 }


 VAR_43 |=
  VAR_36->nvm_data->valid_rx_ant << VAR_28;
 VAR_43 |= VAR_46 << VAR_26;
 VAR_43 |= VAR_46 << VAR_27;
 VAR_43 |= 0x1 << VAR_25;
 VAR_39->rx_chain = FUNC_6(VAR_43);
 switch (VAR_36->scan_type) {
 case 131:
  VAR_42 = FUNC_11(
     (struct ieee80211_mgmt *)VAR_39->data,
     VAR_37->addr,
     VAR_36->scan_request->ie,
     VAR_36->scan_request->ie_len,
     VAR_54, VAR_55,
     VAR_53 - sizeof(*VAR_39));
  break;
 case 130:

  VAR_42 = FUNC_11(
     (struct ieee80211_mgmt *)VAR_39->data,
     VAR_35, ((void*)0), 0,
     ((void*)0), 0,
     VAR_53 - sizeof(*VAR_39));
  break;
 default:
  FUNC_0();
 }
 VAR_39->tx_cmd.len = FUNC_6(VAR_42);

 VAR_39->filter_flags |= (VAR_19 |
          VAR_20);

 switch (VAR_36->scan_type) {
 case 130:
  VAR_39->channel_count =
   FUNC_12(VAR_36, VAR_37, VAR_44,
    (void *)&VAR_39->data[VAR_42]);
  break;
 case 131:
  VAR_39->channel_count =
   FUNC_13(VAR_36, VAR_37, VAR_44,
    VAR_48, VAR_45,
    (void *)&VAR_39->data[VAR_42]);
  break;
 }

 if (VAR_39->channel_count == 0) {
  FUNC_2(VAR_36, "channel count %d\n", VAR_39->channel_count);
  return -VAR_2;
 }

 VAR_38.len[0] += FUNC_20(VAR_39->tx_cmd.len) +
     VAR_39->channel_count * sizeof(struct iwl_scan_channel);
 VAR_38.data[0] = VAR_39;
 VAR_38.dataflags[0] = VAR_10;
 VAR_39->len = FUNC_6(VAR_38.len[0]);


 FUNC_25(VAR_30, &VAR_36->status);

 VAR_52 = FUNC_18(VAR_36);
 if (VAR_52) {
  FUNC_5(VAR_30, &VAR_36->status);
  return VAR_52;
 }

 VAR_52 = FUNC_10(VAR_36, &VAR_38);
 if (VAR_52) {
  FUNC_5(VAR_30, &VAR_36->status);
  FUNC_18(VAR_36);
 }

 return VAR_52;
}
