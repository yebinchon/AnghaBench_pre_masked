
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct cfg80211_sched_scan_request {int n_match_sets; struct cfg80211_match_set* match_sets; } ;
struct TYPE_2__ {int ssid; int ssid_len; } ;
struct cfg80211_match_set {int bssid; TYPE_1__ ssid; } ;
struct brcmf_pno_net_info_le {int bssid; int SSID_len; int SSID; } ;
struct brcmf_pno_info {int n_reqs; int req_lock; struct cfg80211_sched_scan_request** reqs; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

u32 FUNC_5(struct brcmf_pno_info *VAR_1,
        struct brcmf_pno_net_info_le *VAR_2)
{
 struct cfg80211_sched_scan_request *VAR_3;
 struct cfg80211_match_set *VAR_4;
 u32 VAR_5 = 0;
 int VAR_6, VAR_7;

 FUNC_3(&VAR_1->req_lock);
 for (VAR_6 = 0; VAR_6 < VAR_1->n_reqs; VAR_6++) {
  VAR_3 = VAR_1->reqs[VAR_6];

  if (!VAR_3->n_match_sets)
   continue;
  for (VAR_7 = 0; VAR_7 < VAR_3->n_match_sets; VAR_7++) {
   VAR_4 = &VAR_3->match_sets[VAR_7];
   if (VAR_4->ssid.ssid_len == VAR_2->SSID_len &&
       !FUNC_2(VAR_4->ssid.ssid, VAR_2->SSID, VAR_2->SSID_len)) {
    VAR_5 |= FUNC_0(VAR_6);
    break;
   }
   if (FUNC_1(VAR_4->bssid) &&
       !FUNC_2(VAR_4->bssid, VAR_2->bssid, VAR_0)) {
    VAR_5 |= FUNC_0(VAR_6);
    break;
   }
  }
 }
 FUNC_4(&VAR_1->req_lock);
 return VAR_5;
}
