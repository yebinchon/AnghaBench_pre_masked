
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cfg80211_sched_scan_request {int n_match_sets; struct cfg80211_match_set* match_sets; } ;
struct TYPE_3__ {scalar_t__ ssid_len; } ;
struct cfg80211_match_set {int bssid; TYPE_1__ ssid; } ;
struct brcmf_pno_info {int n_reqs; struct cfg80211_sched_scan_request** reqs; } ;
struct brcmf_if {int dummy; } ;


 int FUNC_0 (TYPE_1__*,struct cfg80211_sched_scan_request*) ;
 int FUNC_1 (struct brcmf_if*,int ) ;
 int FUNC_2 (struct brcmf_if*,TYPE_1__*,int) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct brcmf_if *VAR_0,
         struct brcmf_pno_info *VAR_1)
{
 struct cfg80211_sched_scan_request *VAR_2;
 struct cfg80211_match_set *VAR_3;
 bool VAR_4;
 int VAR_5, VAR_6, VAR_7 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_1->n_reqs; VAR_5++) {
  VAR_2 = VAR_1->reqs[VAR_5];

  for (VAR_6 = 0; VAR_6 < VAR_2->n_match_sets; VAR_6++) {
   VAR_3 = &VAR_2->match_sets[VAR_6];
   if (VAR_3->ssid.ssid_len) {
    VAR_4 = FUNC_0(&VAR_3->ssid, VAR_2);
    VAR_7 = FUNC_2(VAR_0, &VAR_3->ssid,
        VAR_4);
   }
   if (!VAR_7 && FUNC_3(VAR_3->bssid))
    VAR_7 = FUNC_1(VAR_0, VAR_3->bssid);

   if (VAR_7 < 0)
    return VAR_7;
  }
 }
 return 0;
}
