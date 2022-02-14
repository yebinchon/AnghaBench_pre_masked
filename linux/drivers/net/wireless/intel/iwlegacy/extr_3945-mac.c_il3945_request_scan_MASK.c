
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_11__ {int bcast_id; } ;
struct il_priv {int scan_band; int status; TYPE_6__* scan_request; TYPE_4__ hw_params; struct il3945_scan_cmd* scan_cmd; int mutex; } ;
struct il_host_cmd {int len; struct il3945_scan_cmd* data; int flags; int id; } ;
struct TYPE_12__ {int life_time; } ;
struct TYPE_14__ {void* len; int rate; TYPE_5__ stop_time; int sta_id; int tx_flags; } ;
struct il3945_scan_cmd {int flags; int channel_count; void* len; TYPE_7__ tx_cmd; int * data; int good_CRC_th; TYPE_2__* direct_scan; void* suspend_time; void* max_out_time; int quiet_time; int quiet_plcp_th; } ;
struct il3945_scan_channel {int dummy; } ;
struct TYPE_8__ {int beacon_int; } ;
struct ieee80211_vif {int addr; TYPE_1__ bss_conf; } ;
struct ieee80211_mgmt {int dummy; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_13__ {int n_ssids; int ie_len; int ie; TYPE_3__* ssids; } ;
struct TYPE_10__ {scalar_t__ ssid_len; int ssid; } ;
struct TYPE_9__ {int ssid; scalar_t__ len; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (char*) ;


 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_3 (int ,int *) ;
 void* FUNC_4 (int) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (struct il_priv*) ;
 int FUNC_7 (struct il_priv*,int,int,scalar_t__,void*,struct ieee80211_vif*) ;
 int FUNC_8 (struct il_priv*,struct ieee80211_mgmt*,int ,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_9 (struct il_priv*) ;
 int FUNC_10 (struct il_priv*,struct il_host_cmd*) ;
 struct il3945_scan_cmd* FUNC_11 (scalar_t__,int ) ;
 scalar_t__ FUNC_12 (void*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,int ,scalar_t__) ;
 int FUNC_15 (struct il3945_scan_cmd*,int ,scalar_t__) ;
 int FUNC_16 (int ,int *) ;

int
FUNC_17(struct il_priv *VAR_18, struct ieee80211_vif *VAR_19)
{
 struct il_host_cmd VAR_20 = {
  .id = VAR_1,
  .len = sizeof(struct il3945_scan_cmd),
  .flags = VAR_0,
 };
 struct il3945_scan_cmd *VAR_21;
 u8 VAR_22 = 0;
 enum nl80211_band VAR_23;
 bool VAR_24 = 0;
 int VAR_25;
 u16 VAR_26;

 FUNC_13(&VAR_18->mutex);

 if (!VAR_18->scan_cmd) {
  VAR_18->scan_cmd =
      FUNC_11(sizeof(struct il3945_scan_cmd) + VAR_8,
       VAR_4);
  if (!VAR_18->scan_cmd) {
   FUNC_1("Fail to allocate scan memory\n");
   return -VAR_3;
  }
 }
 VAR_21 = VAR_18->scan_cmd;
 FUNC_15(VAR_21, 0, sizeof(struct il3945_scan_cmd) + VAR_8);

 VAR_21->quiet_plcp_th = VAR_9;
 VAR_21->quiet_time = VAR_5;

 if (FUNC_9(VAR_18)) {
  u16 VAR_27;
  u32 VAR_28;
  u32 VAR_29 = 100;
  u32 VAR_30 = 100;

  FUNC_0("Scanning while associated...\n");

  VAR_27 = VAR_19->bss_conf.beacon_int;

  VAR_21->suspend_time = 0;
  VAR_21->max_out_time = FUNC_5(200 * 1024);
  if (!VAR_27)
   VAR_27 = VAR_29;







  VAR_28 = (VAR_29 / VAR_27) << 24;
  VAR_30 =
      0xFF0FFFFF & (VAR_28 | ((VAR_29 % VAR_27) * 1024));

  VAR_21->suspend_time = FUNC_5(VAR_30);
  FUNC_1("suspend_time 0x%X beacon interval %d\n",
         VAR_30, VAR_27);
 }

 if (VAR_18->scan_request->n_ssids) {
  int VAR_31, VAR_32 = 0;
  FUNC_1("Kicking off active scan\n");
  for (VAR_31 = 0; VAR_31 < VAR_18->scan_request->n_ssids; VAR_31++) {

   if (!VAR_18->scan_request->ssids[VAR_31].ssid_len)
    continue;
   VAR_21->direct_scan[VAR_32].id = VAR_17;
   VAR_21->direct_scan[VAR_32].len =
       VAR_18->scan_request->ssids[VAR_31].ssid_len;
   FUNC_14(VAR_21->direct_scan[VAR_32].ssid,
          VAR_18->scan_request->ssids[VAR_31].ssid,
          VAR_18->scan_request->ssids[VAR_31].ssid_len);
   VAR_22++;
   VAR_32++;
  }
  VAR_24 = 1;
 } else
  FUNC_1("Kicking off passive scan.\n");



 VAR_21->tx_cmd.tx_flags = VAR_15;
 VAR_21->tx_cmd.sta_id = VAR_18->hw_params.bcast_id;
 VAR_21->tx_cmd.stop_time.life_time = VAR_16;



 switch (VAR_18->scan_band) {
 case 129:
  VAR_21->flags = VAR_13 | VAR_12;
  VAR_21->tx_cmd.rate = VAR_10;
  VAR_23 = 129;
  break;
 case 128:
  VAR_21->tx_cmd.rate = VAR_11;
  VAR_23 = 128;
  break;
 default:
  FUNC_2("Invalid scan band\n");
  return -VAR_2;
 }






 VAR_21->good_CRC_th =
     VAR_24 ? VAR_6 : VAR_7;

 VAR_26 =
     FUNC_8(VAR_18, (struct ieee80211_mgmt *)VAR_21->data,
         VAR_19->addr, VAR_18->scan_request->ie,
         VAR_18->scan_request->ie_len,
         VAR_8 - sizeof(*VAR_21));
 VAR_21->tx_cmd.len = FUNC_4(VAR_26);


 VAR_21->flags |= FUNC_6(VAR_18);

 VAR_21->channel_count =
     FUNC_7(VAR_18, VAR_23, VAR_24, VAR_22,
      (void *)&VAR_21->data[VAR_26], VAR_19);
 if (VAR_21->channel_count == 0) {
  FUNC_1("channel count %d\n", VAR_21->channel_count);
  return -VAR_2;
 }

 VAR_20.len +=
     FUNC_12(VAR_21->tx_cmd.len) +
     VAR_21->channel_count * sizeof(struct il3945_scan_channel);
 VAR_20.data = VAR_21;
 VAR_21->len = FUNC_4(VAR_20.len);

 FUNC_16(VAR_14, &VAR_18->status);
 VAR_25 = FUNC_10(VAR_18, &VAR_20);
 if (VAR_25)
  FUNC_3(VAR_14, &VAR_18->status);
 return VAR_25;
}
