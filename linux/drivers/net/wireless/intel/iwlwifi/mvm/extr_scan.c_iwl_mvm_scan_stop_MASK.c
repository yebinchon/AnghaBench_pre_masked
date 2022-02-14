
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm {int scan_status; int sched_scan_pass_all; int hw; int scan_timeout_dwork; } ;
struct cfg80211_scan_info {int aborted; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct cfg80211_scan_info*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct iwl_mvm*) ;
 int FUNC_4 (struct iwl_mvm*,int) ;

int FUNC_5(struct iwl_mvm *VAR_3, int VAR_4, bool VAR_5)
{
 int VAR_6;

 if (!(VAR_3->scan_status & VAR_4))
  return 0;

 if (FUNC_3(VAR_3)) {
  VAR_6 = 0;
  goto out;
 }

 VAR_6 = FUNC_4(VAR_3, VAR_4);
 if (!VAR_6)
  VAR_3->scan_status |= VAR_4 << VAR_1;
out:





 VAR_3->scan_status &= ~VAR_4;

 if (VAR_4 == VAR_0) {
  FUNC_0(&VAR_3->scan_timeout_dwork);
  if (VAR_5) {
   struct cfg80211_scan_info VAR_7 = {
    .aborted = 1,
   };

   FUNC_1(VAR_3->hw, &VAR_7);
  }
 } else if (VAR_5) {
  FUNC_2(VAR_3->hw);
  VAR_3->sched_scan_pass_all = VAR_2;
 }

 return VAR_6;
}
