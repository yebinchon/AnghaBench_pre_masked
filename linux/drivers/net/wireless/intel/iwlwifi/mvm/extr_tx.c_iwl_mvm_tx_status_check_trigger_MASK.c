
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct iwl_mvm {int fwrt; } ;
struct iwl_fw_dbg_trigger_tx_status {TYPE_1__* statuses; } ;
struct iwl_fw_dbg_trigger_tlv {scalar_t__ data; } ;
struct TYPE_2__ {int status; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,struct iwl_fw_dbg_trigger_tlv*,char*,int) ;
 struct iwl_fw_dbg_trigger_tlv* FUNC_2 (int *,int *,int ) ;

__attribute__((used)) static void FUNC_3(struct iwl_mvm *VAR_2,
         u32 VAR_3)
{
 struct iwl_fw_dbg_trigger_tlv *VAR_4;
 struct iwl_fw_dbg_trigger_tx_status *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_2(&VAR_2->fwrt, ((void*)0),
         VAR_0);
 if (!VAR_4)
  return;

 VAR_5 = (void *)VAR_4->data;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_5->statuses); VAR_6++) {

  if (!VAR_5->statuses[VAR_6].status)
   break;

  if (VAR_5->statuses[VAR_6].status != (VAR_3 & VAR_1))
   continue;

  FUNC_1(&VAR_2->fwrt, VAR_4,
     "Tx status %d was received",
     VAR_3 & VAR_1);
  break;
 }
}
