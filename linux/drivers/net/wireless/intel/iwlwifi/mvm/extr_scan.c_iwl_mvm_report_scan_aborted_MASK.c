
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_mvm {int max_scans; int scan_status; void* sched_scan_pass_all; int hw; int fw_restart; scalar_t__* scan_uid_status; TYPE_1__* fw; } ;
struct cfg80211_scan_info {int aborted; } ;
struct TYPE_2__ {int ucode_capa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__,char*,int) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,struct cfg80211_scan_info*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct iwl_mvm*,int) ;

void FUNC_5(struct iwl_mvm *VAR_4)
{
 if (FUNC_1(&VAR_4->fw->ucode_capa, VAR_2)) {
  int VAR_5, VAR_6;

  VAR_5 = FUNC_4(VAR_4, VAR_0);
  if (VAR_5 >= 0) {
   struct cfg80211_scan_info VAR_7 = {
    .aborted = 1,
   };

   FUNC_2(VAR_4->hw, &VAR_7);
   VAR_4->scan_uid_status[VAR_5] = 0;
  }
  VAR_5 = FUNC_4(VAR_4, VAR_1);
  if (VAR_5 >= 0 && !VAR_4->fw_restart) {
   FUNC_3(VAR_4->hw);
   VAR_4->sched_scan_pass_all = VAR_3;
   VAR_4->scan_uid_status[VAR_5] = 0;
  }





  for (VAR_6 = 0; VAR_6 < VAR_4->max_scans; VAR_6++) {
   if (FUNC_0(VAR_4->scan_uid_status[VAR_6],
          "UMAC scan UID %d status was not cleaned\n",
          VAR_6))
    VAR_4->scan_uid_status[VAR_6] = 0;
  }
 } else {
  if (VAR_4->scan_status & VAR_0) {
   struct cfg80211_scan_info VAR_8 = {
    .aborted = 1,
   };

   FUNC_2(VAR_4->hw, &VAR_8);
  }





  if ((VAR_4->scan_status & VAR_1) &&
      !VAR_4->fw_restart) {
   FUNC_3(VAR_4->hw);
   VAR_4->sched_scan_pass_all = VAR_3;
  }
 }
}
