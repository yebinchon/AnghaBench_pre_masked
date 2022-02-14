
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wmi_start_sched_scan_cmd {int num_of_ssids; struct wmi_sched_scan_ssid_match* ssid_for_match; } ;
struct wmi_sched_scan_ssid_match {scalar_t__ ssid_len; scalar_t__ rssi_threshold; int add_ssid_to_probe; int ssid; } ;
struct wil6210_priv {int dummy; } ;
struct cfg80211_ssid {scalar_t__ ssid_len; int ssid; } ;
struct TYPE_2__ {scalar_t__ ssid_len; int ssid; } ;
struct cfg80211_match_set {scalar_t__ rssi_thold; TYPE_1__ ssid; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,scalar_t__,int ) ;
 int VAR_4 ;
 int FUNC_3 (struct wil6210_priv*,char*,int,int) ;

__attribute__((used)) static void
FUNC_4(struct wil6210_priv *VAR_5,
    struct wmi_start_sched_scan_cmd *VAR_6,
    struct cfg80211_ssid *VAR_7, int VAR_8,
    struct cfg80211_match_set *VAR_9,
    int VAR_10)
{
 int VAR_11;

 if (VAR_10 > VAR_2) {
  FUNC_3(VAR_5, "too many match sets (%d), use first %d\n",
       VAR_10, VAR_2);
  VAR_10 = VAR_2;
 }
 VAR_6->num_of_ssids = VAR_10;

 for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
  struct wmi_sched_scan_ssid_match *VAR_12 =
   &VAR_6->ssid_for_match[VAR_11];
  struct cfg80211_match_set *VAR_13 = &VAR_9[VAR_11];
  int VAR_14;

  VAR_12->ssid_len = VAR_13->ssid.ssid_len;
  FUNC_1(VAR_12->ssid, VAR_13->ssid.ssid,
         FUNC_2(VAR_4, VAR_12->ssid_len, VAR_3));
  VAR_12->rssi_threshold = VAR_1;
  if (VAR_13->rssi_thold >= VAR_1 &&
      VAR_13->rssi_thold <= VAR_0)
   VAR_12->rssi_threshold = VAR_13->rssi_thold;

  for (VAR_14 = 0; VAR_14 < VAR_8; VAR_14++)
   if (VAR_12->ssid_len == VAR_7[VAR_14].ssid_len &&
       FUNC_0(VAR_12->ssid, VAR_7[VAR_14].ssid,
       VAR_12->ssid_len) == 0)
    VAR_12->add_ssid_to_probe = 1;
 }
}
