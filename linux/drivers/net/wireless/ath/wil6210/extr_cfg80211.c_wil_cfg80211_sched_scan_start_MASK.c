
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct wil6210_vif {scalar_t__ mid; } ;
struct wil6210_priv {int dummy; } ;
struct net_device {int dummy; } ;
struct cfg80211_sched_scan_request {int n_ssids; int n_channels; int n_match_sets; int n_scan_plans; int ie; int ie_len; struct cfg80211_sched_scan_plan* scan_plans; struct cfg80211_match_set* match_sets; int delay; int min_rssi_thold; TYPE_2__** channels; TYPE_1__* ssids; int flags; } ;
struct cfg80211_sched_scan_plan {int iterations; int interval; } ;
struct TYPE_6__ {int ssid_len; int ssid; } ;
struct cfg80211_match_set {TYPE_3__ ssid; int rssi_thold; } ;
struct TYPE_5__ {int hw_value; } ;
struct TYPE_4__ {int ssid_len; int ssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct wil6210_vif* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct wil6210_priv*,char*,...) ;
 int FUNC_2 (char*,int ,int,int,int ,int ,int) ;
 struct wil6210_priv* FUNC_3 (struct wiphy*) ;
 int FUNC_4 (struct wil6210_vif*,int ,int ,int ) ;
 int FUNC_5 (struct wil6210_priv*,struct cfg80211_sched_scan_request*) ;

__attribute__((used)) static int
FUNC_6(struct wiphy *VAR_3,
         struct net_device *VAR_4,
         struct cfg80211_sched_scan_request *VAR_5)
{
 struct wil6210_priv *VAR_6 = FUNC_3(VAR_3);
 struct wil6210_vif *VAR_7 = FUNC_0(VAR_4);
 int VAR_8, VAR_9;

 if (VAR_7->mid != 0)
  return -VAR_1;

 FUNC_1(VAR_6,
       "sched scan start: n_ssids %d, ie_len %zu, flags 0x%x\n",
       VAR_5->n_ssids, VAR_5->ie_len, VAR_5->flags);
 for (VAR_8 = 0; VAR_8 < VAR_5->n_ssids; VAR_8++) {
  FUNC_1(VAR_6, "SSID[%d]:", VAR_8);
  FUNC_2("SSID ", VAR_0, 16, 1,
      VAR_5->ssids[VAR_8].ssid,
      VAR_5->ssids[VAR_8].ssid_len, 1);
 }
 FUNC_1(VAR_6, "channels:");
 for (VAR_8 = 0; VAR_8 < VAR_5->n_channels; VAR_8++)
  FUNC_1(VAR_6, " %d%s", VAR_5->channels[VAR_8]->hw_value,
        VAR_8 == VAR_5->n_channels - 1 ? "\n" : "");
 FUNC_1(VAR_6, "n_match_sets %d, min_rssi_thold %d, delay %d\n",
       VAR_5->n_match_sets, VAR_5->min_rssi_thold,
       VAR_5->delay);
 for (VAR_8 = 0; VAR_8 < VAR_5->n_match_sets; VAR_8++) {
  struct cfg80211_match_set *VAR_10 = &VAR_5->match_sets[VAR_8];

  FUNC_1(VAR_6, "MATCHSET[%d]: rssi_thold %d\n",
        VAR_8, VAR_10->rssi_thold);
  FUNC_2("SSID ", VAR_0, 16, 1,
      VAR_10->ssid.ssid,
      VAR_10->ssid.ssid_len, 1);
 }
 FUNC_1(VAR_6, "n_scan_plans %d\n", VAR_5->n_scan_plans);
 for (VAR_8 = 0; VAR_8 < VAR_5->n_scan_plans; VAR_8++) {
  struct cfg80211_sched_scan_plan *VAR_11 = &VAR_5->scan_plans[VAR_8];

  FUNC_1(VAR_6, "SCAN PLAN[%d]: interval %d iterations %d\n",
        VAR_8, VAR_11->interval, VAR_11->iterations);
 }

 VAR_9 = FUNC_4(VAR_7, VAR_2,
   VAR_5->ie_len, VAR_5->ie);
 if (VAR_9)
  return VAR_9;
 return FUNC_5(VAR_6, VAR_5);
}
