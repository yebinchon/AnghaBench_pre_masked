
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct scsi_cmnd {TYPE_2__* device; } ;
struct megasas_instance {int max_scsi_cmds; struct fusion_context* ctrl_context; } ;
struct megasas_cmd_fusion {int index; struct scsi_cmnd* scmd; } ;
struct fusion_context {struct megasas_cmd_fusion** cmd_list; } ;
struct TYPE_4__ {TYPE_1__* host; } ;
struct TYPE_3__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct scsi_cmnd*,char*,int) ;

__attribute__((used)) static u16 FUNC_1(struct scsi_cmnd *VAR_1)
{
 int VAR_2, VAR_3 = 0;
 struct megasas_instance *VAR_4;
 struct megasas_cmd_fusion *VAR_5;
 struct fusion_context *VAR_6;

 VAR_4 = (struct megasas_instance *)VAR_1->device->host->hostdata;

 VAR_6 = VAR_4->ctrl_context;

 for (VAR_2 = 0; VAR_2 < VAR_4->max_scsi_cmds; VAR_2++) {
  VAR_5 = VAR_6->cmd_list[VAR_2];
  if (VAR_5->scmd && (VAR_5->scmd == VAR_1)) {
   FUNC_0(VAR_0, VAR_1, "Abort request is for"
    " SMID: %d\n", VAR_5->index);
   VAR_3 = VAR_5->index;
   break;
  }
 }

 return VAR_3;
}
