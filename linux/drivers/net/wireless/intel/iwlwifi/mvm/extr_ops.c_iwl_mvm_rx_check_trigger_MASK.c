
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ group_id; int cmd; } ;
struct iwl_rx_packet {TYPE_1__ hdr; } ;
struct iwl_mvm {int fwrt; } ;
struct iwl_fw_dbg_trigger_tlv {scalar_t__ data; } ;
struct iwl_fw_dbg_trigger_cmd {TYPE_2__* cmds; } ;
struct TYPE_4__ {scalar_t__ group_id; int cmd_id; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct iwl_fw_dbg_trigger_tlv*,char*,scalar_t__,int ) ;
 struct iwl_fw_dbg_trigger_tlv* FUNC_2 (int *,int *,int ) ;

__attribute__((used)) static inline void FUNC_3(struct iwl_mvm *VAR_1,
         struct iwl_rx_packet *VAR_2)
{
 struct iwl_fw_dbg_trigger_tlv *VAR_3;
 struct iwl_fw_dbg_trigger_cmd *VAR_4;
 int VAR_5;

 VAR_3 = FUNC_2(&VAR_1->fwrt, ((void*)0),
         VAR_0);
 if (!VAR_3)
  return;

 VAR_4 = (void *)VAR_3->data;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_4->cmds); VAR_5++) {

  if (!VAR_4->cmds[VAR_5].cmd_id)
   break;

  if (VAR_4->cmds[VAR_5].cmd_id != VAR_2->hdr.cmd ||
      VAR_4->cmds[VAR_5].group_id != VAR_2->hdr.group_id)
   continue;

  FUNC_1(&VAR_1->fwrt, VAR_3,
     "CMD 0x%02x.%02x received",
     VAR_2->hdr.group_id, VAR_2->hdr.cmd);
  break;
 }
}
