
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct megasas_instance {int max_scsi_cmds; TYPE_2__* pdev; struct fusion_context* ctrl_context; } ;
struct megasas_cmd_fusion {TYPE_3__* scmd; int index; } ;
struct fusion_context {struct megasas_cmd_fusion** cmd_list; } ;
struct TYPE_6__ {TYPE_1__* device; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {int id; int channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int,int,int ) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_2(struct megasas_instance *VAR_2,
  int VAR_3, int VAR_4)
{
 int VAR_5, VAR_6 = 0;
 struct megasas_cmd_fusion *VAR_7;
 struct fusion_context *VAR_8;
 VAR_8 = VAR_2->ctrl_context;

 for (VAR_5 = 0 ; VAR_5 < VAR_2->max_scsi_cmds; VAR_5++) {
  VAR_7 = VAR_8->cmd_list[VAR_5];
  if (VAR_7->scmd &&
   (VAR_7->scmd->device->id == VAR_3 &&
   VAR_7->scmd->device->channel == VAR_4)) {
   FUNC_0(&VAR_2->pdev->dev,
    "SCSI commands pending to target"
    "channel %d id %d \tSMID: 0x%x\n",
    VAR_4, VAR_3, VAR_7->index);
   FUNC_1(VAR_7->scmd);
   VAR_6 = 1;
   break;
  }
 }

 return VAR_6 ? VAR_0 : VAR_1;
}
