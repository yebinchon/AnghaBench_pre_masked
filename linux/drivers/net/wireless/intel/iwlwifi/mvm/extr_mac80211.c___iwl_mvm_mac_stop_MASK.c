
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_mvm {int max_scans; scalar_t__* scan_uid_status; TYPE_1__* fw; int hw; int status; int roc_done_wk; int accu_radio_stats; int mutex; } ;
struct TYPE_2__ {int ucode_capa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,char*,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int ,int ,struct iwl_mvm*) ;
 int FUNC_4 (struct iwl_mvm*) ;
 int VAR_3 ;
 int FUNC_5 (struct iwl_mvm*) ;
 int FUNC_6 (struct iwl_mvm*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int) ;
 scalar_t__ FUNC_9 (int ,int *) ;

void FUNC_10(struct iwl_mvm *VAR_4)
{
 FUNC_7(&VAR_4->mutex);




 FUNC_8(&VAR_4->accu_radio_stats, 0, sizeof(VAR_4->accu_radio_stats));







 FUNC_1(&VAR_4->roc_done_wk);

 FUNC_6(VAR_4);

 FUNC_4(VAR_4);



 FUNC_5(VAR_4);
 if (FUNC_9(VAR_1, &VAR_4->status) ||
     FUNC_9(VAR_0,
          &VAR_4->status))
  FUNC_3(VAR_4->hw, 0,
          VAR_3, VAR_4);




 if (FUNC_2(&VAR_4->fw->ucode_capa, VAR_2)) {
  int VAR_5;

  for (VAR_5 = 0; VAR_5 < VAR_4->max_scans; VAR_5++) {
   if (FUNC_0(VAR_4->scan_uid_status[VAR_5],
          "UMAC scan UID %d status was not cleaned\n",
          VAR_5))
    VAR_4->scan_uid_status[VAR_5] = 0;
  }
 }
}
