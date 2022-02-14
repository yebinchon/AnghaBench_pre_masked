
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct cfg80211_sched_scan_request {scalar_t__ n_match_sets; int n_ssids; } ;
struct brcmf_pub {int dummy; } ;
struct brcmf_if {int dummy; } ;
struct brcmf_cfg80211_info {int scan_status; struct brcmf_pub* pub; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct brcmf_pub*,char*,int ) ;
 int FUNC_1 (int ,char*,scalar_t__,...) ;
 int FUNC_2 (struct brcmf_if*,struct cfg80211_sched_scan_request*) ;
 struct brcmf_if* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 struct brcmf_cfg80211_info* FUNC_5 (struct wiphy*) ;

__attribute__((used)) static int
FUNC_6(struct wiphy *VAR_4,
    struct net_device *VAR_5,
    struct cfg80211_sched_scan_request *VAR_6)
{
 struct brcmf_cfg80211_info *VAR_7 = FUNC_5(VAR_4);
 struct brcmf_if *VAR_8 = FUNC_3(VAR_5);
 struct brcmf_pub *VAR_9 = VAR_7->pub;

 FUNC_1(VAR_3, "Enter: n_match_sets=%d n_ssids=%d\n",
    VAR_6->n_match_sets, VAR_6->n_ssids);

 if (FUNC_4(VAR_0, &VAR_7->scan_status)) {
  FUNC_0(VAR_9, "Scanning suppressed: status=%lu\n",
    VAR_7->scan_status);
  return -VAR_1;
 }

 if (VAR_6->n_match_sets <= 0) {
  FUNC_1(VAR_3, "invalid number of matchsets specified: %d\n",
     VAR_6->n_match_sets);
  return -VAR_2;
 }

 return FUNC_2(VAR_8, VAR_6);
}
