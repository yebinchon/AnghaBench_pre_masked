
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct megasas_instance {int max_fw_cmds; struct megasas_cmd** cmd_list; struct fusion_context* ctrl_context; } ;
struct megasas_cmd_fusion {size_t sync_cmd_idx; } ;
struct megasas_cmd {TYPE_2__* frame; scalar_t__ sync_cmd; } ;
struct fusion_context {struct megasas_cmd_fusion** cmd_list; } ;
struct TYPE_3__ {scalar_t__ cmd; int cmd_status; } ;
struct TYPE_4__ {TYPE_1__ hdr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct megasas_instance*,struct megasas_cmd*,int ) ;

__attribute__((used)) static void FUNC_1(struct megasas_instance *VAR_4)
{
 int VAR_5;
 struct megasas_cmd *VAR_6;
 struct megasas_cmd_fusion *VAR_7;
 struct fusion_context *VAR_8 = VAR_4->ctrl_context;


 if (VAR_8) {
  for (VAR_5 = 0; VAR_5 < VAR_4->max_fw_cmds; VAR_5++) {
   VAR_7 = VAR_8->cmd_list[VAR_5];
   if (VAR_7->sync_cmd_idx != (u32)VAR_3) {
    VAR_6 = VAR_4->cmd_list[VAR_7->sync_cmd_idx];
    if (VAR_6->sync_cmd &&
        (VAR_6->frame->hdr.cmd != VAR_1)) {
     VAR_6->frame->hdr.cmd_status =
       VAR_2;
     FUNC_0(VAR_4,
            VAR_6, VAR_0);
    }
   }
  }
 } else {
  for (VAR_5 = 0; VAR_5 < VAR_4->max_fw_cmds; VAR_5++) {
   VAR_6 = VAR_4->cmd_list[VAR_5];
   if (VAR_6->sync_cmd && VAR_6->frame->hdr.cmd !=
    VAR_1)
    FUNC_0(VAR_4, VAR_6, VAR_0);
  }
 }
}
