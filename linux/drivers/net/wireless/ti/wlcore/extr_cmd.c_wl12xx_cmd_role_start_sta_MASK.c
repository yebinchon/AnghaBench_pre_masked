
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {size_t hlid; int role_chan_type; } ;
struct wl12xx_vif {scalar_t__ band; int basic_rate_set; TYPE_3__ sta; int channel_type; int rate_set; int role_id; scalar_t__ p2p; int ssid_len; int ssid; int beacon_int; int channel; } ;
struct TYPE_5__ {size_t hlid; int session; void* remote_rates; void* local_rates; int bssid; int ssid; int ssid_len; int ssid_type; int beacon_interval; void* basic_rate_set; } ;
struct wl12xx_cmd_role_start {TYPE_2__ sta; int channel_type; int channel; int band; int role_id; } ;
struct wl1271 {int * session_ids; } ;
struct TYPE_4__ {int bssid; } ;
struct ieee80211_vif {TYPE_1__ bss_conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct wl12xx_cmd_role_start*) ;
 struct wl12xx_cmd_role_start* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct wl1271*,int ,struct wl12xx_cmd_role_start*,int,int ) ;
 int FUNC_6 (int ,char*,int ,...) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct wl1271*,struct wl12xx_vif*,size_t*) ;
 int FUNC_9 (struct wl1271*,struct wl12xx_vif*,size_t*) ;
 struct ieee80211_vif* FUNC_10 (struct wl12xx_vif*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct wl1271*,struct wl12xx_vif*) ;

int FUNC_13(struct wl1271 *VAR_12, struct wl12xx_vif *VAR_13)
{
 struct ieee80211_vif *VAR_14 = FUNC_10(VAR_13);
 struct wl12xx_cmd_role_start *VAR_15;
 u32 VAR_16;
 int VAR_17;

 VAR_15 = FUNC_3(sizeof(*VAR_15), VAR_7);
 if (!VAR_15) {
  VAR_17 = -VAR_5;
  goto out;
 }

 FUNC_6(VAR_4, "cmd role start sta %d", VAR_13->role_id);

 VAR_15->role_id = VAR_13->role_id;
 if (VAR_13->band == VAR_8)
  VAR_15->band = VAR_11;
 VAR_15->channel = VAR_13->channel;
 VAR_15->sta.basic_rate_set = FUNC_1(VAR_13->basic_rate_set);
 VAR_15->sta.beacon_interval = FUNC_0(VAR_13->beacon_int);
 VAR_15->sta.ssid_type = VAR_10;
 VAR_15->sta.ssid_len = VAR_13->ssid_len;
 FUNC_4(VAR_15->sta.ssid, VAR_13->ssid, VAR_13->ssid_len);
 FUNC_4(VAR_15->sta.bssid, VAR_14->bss_conf.bssid, VAR_6);

 VAR_16 = VAR_2 | VAR_3 |
     FUNC_12(VAR_12, VAR_13);
 if (VAR_13->p2p)
  VAR_16 &= ~VAR_1;

 VAR_15->sta.local_rates = FUNC_1(VAR_16);

 VAR_15->channel_type = FUNC_11(VAR_13->channel_type);

 if (VAR_13->sta.hlid == VAR_9) {
  VAR_17 = FUNC_8(VAR_12, VAR_13, &VAR_13->sta.hlid);
  if (VAR_17)
   goto out_free;
 }
 VAR_15->sta.hlid = VAR_13->sta.hlid;
 VAR_15->sta.session = VAR_12->session_ids[VAR_13->sta.hlid];






 VAR_15->sta.remote_rates = FUNC_1(VAR_16);

 FUNC_6(VAR_4, "role start: roleid=%d, hlid=%d, session=%d "
       "basic_rate_set: 0x%x, remote_rates: 0x%x",
       VAR_13->role_id, VAR_15->sta.hlid, VAR_15->sta.session,
       VAR_13->basic_rate_set, VAR_13->rate_set);

 VAR_17 = FUNC_5(VAR_12, VAR_0, VAR_15, sizeof(*VAR_15), 0);
 if (VAR_17 < 0) {
  FUNC_7("failed to initiate cmd role start sta");
  goto err_hlid;
 }

 VAR_13->sta.role_chan_type = VAR_13->channel_type;
 goto out_free;

err_hlid:

 FUNC_9(VAR_12, VAR_13, &VAR_13->sta.hlid);

out_free:
 FUNC_2(VAR_15);

out:
 return VAR_17;
}
