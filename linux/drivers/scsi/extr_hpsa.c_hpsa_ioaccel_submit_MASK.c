
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {unsigned char* host_scribble; TYPE_1__* device; } ;
struct hpsa_scsi_dev_t {scalar_t__ hba_ioaccel_enabled; scalar_t__ offload_enabled; scalar_t__ in_reset; } ;
struct ctlr_info {int dummy; } ;
struct CommandList {struct hpsa_scsi_dev_t* device; struct scsi_cmnd* scsi_cmd; void* cmd_type; int cmdindex; } ;
struct TYPE_2__ {struct hpsa_scsi_dev_t* hostdata; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ctlr_info*,int ,struct CommandList*) ;
 int FUNC_1 (struct ctlr_info*,struct CommandList*) ;
 int FUNC_2 (struct ctlr_info*,struct CommandList*) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_3(struct ctlr_info *VAR_4,
  struct CommandList *VAR_5, struct scsi_cmnd *VAR_6)
{
 struct hpsa_scsi_dev_t *VAR_7 = VAR_6->device->hostdata;
 int VAR_8 = VAR_1;

 if (!VAR_7)
  return VAR_2;

 if (VAR_7->in_reset)
  return VAR_2;

 if (VAR_3)
  return VAR_1;

 VAR_6->host_scribble = (unsigned char *) VAR_5;

 if (VAR_7->offload_enabled) {
  FUNC_0(VAR_4, VAR_5->cmdindex, VAR_5);
  VAR_5->cmd_type = VAR_0;
  VAR_5->scsi_cmd = VAR_6;
  VAR_5->device = VAR_7;
  VAR_8 = FUNC_2(VAR_4, VAR_5);
  if (VAR_8 < 0)
   VAR_8 = VAR_2;
 } else if (VAR_7->hba_ioaccel_enabled) {
  FUNC_0(VAR_4, VAR_5->cmdindex, VAR_5);
  VAR_5->cmd_type = VAR_0;
  VAR_5->scsi_cmd = VAR_6;
  VAR_5->device = VAR_7;
  VAR_8 = FUNC_1(VAR_4, VAR_5);
  if (VAR_8 < 0)
   VAR_8 = VAR_2;
 }
 return VAR_8;
}
