
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_mvm {int sched_scan_pass_all; } ;
struct cfg80211_sched_scan_request {scalar_t__ n_match_sets; TYPE_2__* match_sets; } ;
struct TYPE_3__ {scalar_t__ ssid_len; } ;
struct TYPE_4__ {TYPE_1__ ssid; } ;


 int FUNC_0 (struct iwl_mvm*,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_1(struct iwl_mvm *VAR_2,
      struct cfg80211_sched_scan_request *VAR_3)
{
 if (VAR_3->n_match_sets && VAR_3->match_sets[0].ssid.ssid_len) {
  FUNC_0(VAR_2,
          "Sending scheduled scan with filtering, n_match_sets %d\n",
          VAR_3->n_match_sets);
  VAR_2->sched_scan_pass_all = VAR_0;
  return 0;
 }

 FUNC_0(VAR_2, "Sending Scheduled scan without filtering\n");

 VAR_2->sched_scan_pass_all = VAR_1;
 return 1;
}
