
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct wlcore_scan_channels {int report_after; int filter_type; scalar_t__* active; scalar_t__ ssid_len; int * intervals; int bss_type; int tag; scalar_t__ terminate; scalar_t__ cycles; int n_probe_reqs; int snr_threshold; int rssi_threshold; int role_id; } ;
struct wl12xx_vif {int role_id; } ;
struct wl1271_cmd_sched_scan_config {int report_after; int filter_type; scalar_t__* active; scalar_t__ ssid_len; int * intervals; int bss_type; int tag; scalar_t__ terminate; scalar_t__ cycles; int n_probe_reqs; int snr_threshold; int rssi_threshold; int role_id; } ;
struct conf_sched_scan_settings {int num_probe_reqs; int snr_threshold; int rssi_threshold; } ;
struct TYPE_4__ {struct conf_sched_scan_settings sched_scan; } ;
struct wl1271 {TYPE_1__ conf; } ;
struct ieee80211_scan_ies {int common_ie_len; int common_ies; int * len; int * ies; } ;
struct cfg80211_sched_scan_request {TYPE_3__* ssids; int n_ssids; int n_channels; int channels; TYPE_2__* scan_plans; } ;
struct TYPE_6__ {int ssid_len; int ssid; } ;
struct TYPE_5__ {int interval; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct wlcore_scan_channels*) ;
 struct wlcore_scan_channels* FUNC_2 (int,int ) ;
 int FUNC_3 (struct wl1271*,int ,struct wlcore_scan_channels*,int,int ) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ,char*,struct wlcore_scan_channels*,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct wlcore_scan_channels*,struct wlcore_scan_channels*) ;
 int FUNC_8 (struct wl1271*,struct wl12xx_vif*,int ,size_t,int ,int ,int ,int ,int ,int ,int) ;
 int FUNC_9 (struct wl1271*,struct wl12xx_vif*,struct cfg80211_sched_scan_request*) ;
 int FUNC_10 (struct wl1271*,struct wlcore_scan_channels*,int ,int ,int ,int ) ;

int FUNC_11(struct wl1271 *VAR_13,
      struct wl12xx_vif *VAR_14,
      struct cfg80211_sched_scan_request *VAR_15,
      struct ieee80211_scan_ies *VAR_16)
{
 struct wl1271_cmd_sched_scan_config *VAR_17 = ((void*)0);
 struct wlcore_scan_channels *VAR_18 = ((void*)0);
 struct conf_sched_scan_settings *VAR_19 = &VAR_13->conf.sched_scan;
 int VAR_20, VAR_21;
 bool VAR_22 = !VAR_15->n_ssids;

 FUNC_4(VAR_1, "cmd sched_scan scan config");

 VAR_17 = FUNC_2(sizeof(*VAR_17), VAR_5);
 if (!VAR_17)
  return -VAR_4;

 VAR_17->role_id = VAR_14->role_id;
 VAR_17->rssi_threshold = VAR_19->rssi_threshold;
 VAR_17->snr_threshold = VAR_19->snr_threshold;
 VAR_17->n_probe_reqs = VAR_19->num_probe_reqs;

 VAR_17->cycles = 0;

 VAR_17->report_after = 1;

 VAR_17->terminate = 0;
 VAR_17->tag = VAR_12;

 VAR_17->bss_type = VAR_9;

 for (VAR_20 = 0; VAR_20 < VAR_10; VAR_20++)
  VAR_17->intervals[VAR_20] = FUNC_0(VAR_15->scan_plans[0].interval *
      VAR_6);

 VAR_17->ssid_len = 0;
 VAR_21 = FUNC_9(VAR_13, VAR_14, VAR_15);
 if (VAR_21 < 0)
  goto out;

 VAR_17->filter_type = VAR_21;

 FUNC_4(VAR_2, "filter_type = %d", VAR_17->filter_type);

 VAR_18 = FUNC_2(sizeof(*VAR_18), VAR_5);
 if (!VAR_18) {
  VAR_21 = -VAR_4;
  goto out;
 }

 if (!FUNC_10(VAR_13, VAR_18, VAR_15->channels,
      VAR_15->n_channels, VAR_15->n_ssids,
      VAR_11)) {
  FUNC_6("scan channel list is empty");
  VAR_21 = -VAR_3;
  goto out;
 }
 FUNC_7(VAR_17, VAR_18);

 if (!VAR_22 && VAR_17->active[0]) {
  u8 VAR_23 = VAR_7;
  VAR_21 = FUNC_8(VAR_13, VAR_14,
       VAR_14->role_id, VAR_23,
       VAR_15->ssids[0].ssid,
       VAR_15->ssids[0].ssid_len,
       VAR_16->ies[VAR_23],
       VAR_16->len[VAR_23],
       VAR_16->common_ies,
       VAR_16->common_ie_len,
       1);
  if (VAR_21 < 0) {
   FUNC_6("2.4GHz PROBE request template failed");
   goto out;
  }
 }

 if (!VAR_22 && VAR_17->active[1]) {
  u8 VAR_24 = VAR_8;
  VAR_21 = FUNC_8(VAR_13, VAR_14,
       VAR_14->role_id, VAR_24,
       VAR_15->ssids[0].ssid,
       VAR_15->ssids[0].ssid_len,
       VAR_16->ies[VAR_24],
       VAR_16->len[VAR_24],
       VAR_16->common_ies,
       VAR_16->common_ie_len,
       1);
  if (VAR_21 < 0) {
   FUNC_6("5GHz PROBE request template failed");
   goto out;
  }
 }

 FUNC_5(VAR_2, "SCAN_CFG: ", VAR_17, sizeof(*VAR_17));

 VAR_21 = FUNC_3(VAR_13, VAR_0, VAR_17,
         sizeof(*VAR_17), 0);
 if (VAR_21 < 0) {
  FUNC_6("SCAN configuration failed");
  goto out;
 }
out:
 FUNC_1(VAR_18);
 FUNC_1(VAR_17);
 return VAR_21;
}
