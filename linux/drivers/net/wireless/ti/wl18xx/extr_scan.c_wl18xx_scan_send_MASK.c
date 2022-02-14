
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct wlcore_scan_channels {scalar_t__ role_id; int rssi_threshold; int total_cycles; scalar_t__ dfs; scalar_t__* active; int ssid_len; int ssid; int tag; int rate; scalar_t__ terminate_after; int n_probe_reqs; scalar_t__ protect; scalar_t__ urgency; scalar_t__ add_broadcast; scalar_t__ filter; scalar_t__ ssid_from_list; int bss_type; scalar_t__ snr_threshold; int scan_type; } ;
struct wl18xx_cmd_scan_params {scalar_t__ role_id; int rssi_threshold; int total_cycles; scalar_t__ dfs; scalar_t__* active; int ssid_len; int ssid; int tag; int rate; scalar_t__ terminate_after; int n_probe_reqs; scalar_t__ protect; scalar_t__ urgency; scalar_t__ add_broadcast; scalar_t__ filter; scalar_t__ ssid_from_list; int bss_type; scalar_t__ snr_threshold; int scan_type; } ;
struct wl12xx_vif {scalar_t__ dev_role_id; scalar_t__ role_id; } ;
struct TYPE_4__ {int num_probe_reqs; } ;
struct TYPE_5__ {TYPE_1__ scan; } ;
struct wl1271 {TYPE_2__ conf; } ;
struct cfg80211_scan_request {int n_ssids; int ie_len; int ie; TYPE_3__* ssids; scalar_t__ no_cck; int n_channels; int channels; } ;
struct TYPE_6__ {int ssid_len; int * ssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct wlcore_scan_channels*) ;
 struct wlcore_scan_channels* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (struct wl1271*,int ,struct wlcore_scan_channels*,int,int ) ;
 int FUNC_5 (int ,char*,struct wlcore_scan_channels*,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct wl1271*,struct wl12xx_vif*,scalar_t__,int ,int *,int ,int ,int ,int *,int ,int) ;
 int FUNC_8 (struct wlcore_scan_channels*,struct wlcore_scan_channels*) ;
 scalar_t__ FUNC_9 (struct wl12xx_vif*) ;
 int FUNC_10 (struct wl1271*,struct wlcore_scan_channels*,int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_11(struct wl1271 *VAR_12, struct wl12xx_vif *VAR_13,
       struct cfg80211_scan_request *VAR_14)
{
 struct wl18xx_cmd_scan_params *VAR_15;
 struct wlcore_scan_channels *VAR_16 = ((void*)0);
 int VAR_17;

 VAR_15 = FUNC_2(sizeof(*VAR_15), VAR_4);
 if (!VAR_15) {
  VAR_17 = -VAR_3;
  goto out;
 }


 if (FUNC_9(VAR_13))
  VAR_15->role_id = VAR_13->dev_role_id;
 else
  VAR_15->role_id = VAR_13->role_id;

 if (FUNC_0(VAR_15->role_id == VAR_10)) {
  VAR_17 = -VAR_2;
  goto out;
 }

 VAR_15->scan_type = VAR_8;
 VAR_15->rssi_threshold = -127;
 VAR_15->snr_threshold = 0;

 VAR_15->bss_type = VAR_7;

 VAR_15->ssid_from_list = 0;
 VAR_15->filter = 0;
 VAR_15->add_broadcast = 0;

 VAR_15->urgency = 0;
 VAR_15->protect = 0;

 VAR_15->n_probe_reqs = VAR_12->conf.scan.num_probe_reqs;
 VAR_15->terminate_after = 0;


 FUNC_0(VAR_14->n_ssids > 1);

 VAR_16 = FUNC_2(sizeof(*VAR_16), VAR_4);
 if (!VAR_16) {
  VAR_17 = -VAR_3;
  goto out;
 }

 FUNC_10(VAR_12, VAR_16, VAR_14->channels,
        VAR_14->n_channels, VAR_14->n_ssids,
        VAR_8);
 FUNC_8(VAR_15, VAR_16);





 VAR_15->total_cycles = 1;

 if (VAR_14->no_cck)
  VAR_15->rate = VAR_11;

 VAR_15->tag = VAR_9;

 if (VAR_14->n_ssids) {
  VAR_15->ssid_len = VAR_14->ssids[0].ssid_len;
  FUNC_3(VAR_15->ssid, VAR_14->ssids[0].ssid, VAR_15->ssid_len);
 }


 if (VAR_15->active[0]) {
  u8 VAR_18 = VAR_5;
  VAR_17 = FUNC_7(VAR_12, VAR_13,
     VAR_15->role_id, VAR_18,
     VAR_14->ssids ? VAR_14->ssids[0].ssid : ((void*)0),
     VAR_14->ssids ? VAR_14->ssids[0].ssid_len : 0,
     VAR_14->ie,
     VAR_14->ie_len,
     ((void*)0),
     0,
     0);
  if (VAR_17 < 0) {
   FUNC_6("2.4GHz PROBE request template failed");
   goto out;
  }
 }

 if (VAR_15->active[1] || VAR_15->dfs) {
  u8 VAR_19 = VAR_6;
  VAR_17 = FUNC_7(VAR_12, VAR_13,
     VAR_15->role_id, VAR_19,
     VAR_14->ssids ? VAR_14->ssids[0].ssid : ((void*)0),
     VAR_14->ssids ? VAR_14->ssids[0].ssid_len : 0,
     VAR_14->ie,
     VAR_14->ie_len,
     ((void*)0),
     0,
     0);
  if (VAR_17 < 0) {
   FUNC_6("5GHz PROBE request template failed");
   goto out;
  }
 }

 FUNC_5(VAR_1, "SCAN: ", VAR_15, sizeof(*VAR_15));

 VAR_17 = FUNC_4(VAR_12, VAR_0, VAR_15, sizeof(*VAR_15), 0);
 if (VAR_17 < 0) {
  FUNC_6("SCAN failed");
  goto out;
 }

out:
 FUNC_1(VAR_16);
 FUNC_1(VAR_15);
 return VAR_17;
}
