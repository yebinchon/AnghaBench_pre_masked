
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cfg80211_ssid {scalar_t__ ssid_len; int ssid; } ;
struct cfg80211_sched_scan_request {int n_ssids; TYPE_1__* ssids; } ;
struct TYPE_2__ {scalar_t__ ssid_len; int ssid; } ;


 int FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static bool FUNC_1(struct cfg80211_ssid *VAR_0,
     struct cfg80211_sched_scan_request *VAR_1)
{
 int VAR_2;

 if (!VAR_0 || !VAR_1->ssids || !VAR_1->n_ssids)
  return 0;

 for (VAR_2 = 0; VAR_2 < VAR_1->n_ssids; VAR_2++) {
  if (VAR_0->ssid_len == VAR_1->ssids[VAR_2].ssid_len) {
   if (!FUNC_0(VAR_0->ssid, VAR_1->ssids[VAR_2].ssid,
         VAR_0->ssid_len))
    return 1;
  }
 }
 return 0;
}
