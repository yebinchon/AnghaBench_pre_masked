
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {int cmd_len; int cmnd; TYPE_1__* device; } ;
struct hpsa_scsi_dev_t {int scsi3addr; int ioaccel_handle; scalar_t__ in_reset; } ;
struct ctlr_info {int dummy; } ;
struct CommandList {struct hpsa_scsi_dev_t* phys_disk; struct scsi_cmnd* scsi_cmd; } ;
struct TYPE_2__ {struct hpsa_scsi_dev_t* hostdata; } ;


 int FUNC_0 (struct ctlr_info*,struct CommandList*,int ,int ,int ,int ,struct hpsa_scsi_dev_t*) ;

__attribute__((used)) static int FUNC_1(struct ctlr_info *VAR_0,
 struct CommandList *VAR_1)
{
 struct scsi_cmnd *VAR_2 = VAR_1->scsi_cmd;
 struct hpsa_scsi_dev_t *VAR_3 = VAR_2->device->hostdata;

 if (!VAR_3)
  return -1;

 VAR_1->phys_disk = VAR_3;

 if (VAR_3->in_reset)
  return -1;

 return FUNC_0(VAR_0, VAR_1, VAR_3->ioaccel_handle,
  VAR_2->cmnd, VAR_2->cmd_len, VAR_3->scsi3addr, VAR_3);
}
