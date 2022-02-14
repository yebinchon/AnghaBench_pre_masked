
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union MEGASAS_REQUEST_DESCRIPTOR_UNION {int dummy; } MEGASAS_REQUEST_DESCRIPTOR_UNION ;
typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct megasas_instance {int max_scsi_cmds; int max_fw_cmds; int support_pci_lane_margining; int support_nvme_passthru; struct megasas_cmd** cmd_list; struct fusion_context* ctrl_context; } ;
struct megasas_cmd_fusion {size_t sync_cmd_idx; } ;
struct TYPE_5__ {int smid; } ;
struct megasas_cmd {int flags; TYPE_4__* frame; TYPE_1__ context; } ;
struct fusion_context {struct megasas_cmd_fusion** cmd_list; } ;
struct TYPE_7__ {int cmd; void* cmd_status; } ;
struct TYPE_6__ {int cmd_status; int opcode; } ;
struct TYPE_8__ {TYPE_3__ hdr; TYPE_2__ dcmd; } ;



 int VAR_0 ;
 int VAR_1 ;



 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct megasas_instance*,struct megasas_cmd*,int ) ;
 int FUNC_3 (struct megasas_instance*,union MEGASAS_REQUEST_DESCRIPTOR_UNION*) ;
 union MEGASAS_REQUEST_DESCRIPTOR_UNION* FUNC_4 (struct megasas_instance*,scalar_t__) ;
 int FUNC_5 (struct megasas_instance*,struct megasas_cmd*) ;

__attribute__((used)) static void FUNC_6(struct megasas_instance *VAR_7)
{
 int VAR_8;
 struct megasas_cmd_fusion *VAR_9;
 struct fusion_context *VAR_10;
 struct megasas_cmd *VAR_11;
 union MEGASAS_REQUEST_DESCRIPTOR_UNION *VAR_12;
 u16 VAR_13;
 bool VAR_14 = 0;
 u8 VAR_15;
 u32 VAR_16 = 0;

 VAR_10 = VAR_7->ctrl_context;




 for (VAR_8 = VAR_7->max_scsi_cmds ; VAR_8 < VAR_7->max_fw_cmds; VAR_8++) {
  VAR_9 = VAR_10->cmd_list[VAR_8];
  VAR_11 = VAR_7->cmd_list[VAR_9->sync_cmd_idx];
  VAR_13 = FUNC_0(VAR_11->context.smid);
  VAR_15 = 129;

  if (!VAR_13)
   continue;

  VAR_12 = FUNC_4(VAR_7, VAR_13 - 1);

  switch (VAR_11->frame->hdr.cmd) {
  case 132:
   VAR_16 = FUNC_1(VAR_11->frame->dcmd.opcode);

   if (VAR_16 == VAR_4) {
    VAR_11->frame->dcmd.cmd_status = VAR_3;
    VAR_15 = 133;
    break;
   }

   VAR_14 = ((VAR_16 != VAR_5)) &&
          (VAR_16 != VAR_6) &&
          !(VAR_11->flags & VAR_1);

   if (!VAR_14)
    VAR_15 = 128;

   break;
  case 131:
   if (!VAR_7->support_nvme_passthru) {
    VAR_11->frame->hdr.cmd_status = VAR_2;
    VAR_15 = 133;
   }

   break;
  case 130:
   if (!VAR_7->support_pci_lane_margining) {
    VAR_11->frame->hdr.cmd_status = VAR_2;
    VAR_15 = 133;
   }

   break;
  default:
   break;
  }

  switch (VAR_15) {
  case 129:
   FUNC_3(VAR_7, VAR_12);
   break;
  case 128:
   FUNC_5(VAR_7, VAR_11);
   break;
  case 133:
   FUNC_2(VAR_7, VAR_11, VAR_0);
   break;
  }
 }
}
