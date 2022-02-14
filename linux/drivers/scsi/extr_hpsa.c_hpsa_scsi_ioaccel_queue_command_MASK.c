
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct hpsa_scsi_dev_t {scalar_t__ queue_depth; int ioaccel_cmds_out; scalar_t__ in_reset; } ;
struct ctlr_info {int transMethod; } ;
struct CommandList {TYPE_2__* scsi_cmd; } ;
struct TYPE_4__ {TYPE_1__* device; } ;
struct TYPE_3__ {int hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct ctlr_info*,struct CommandList*,int ,int *,int,int *,struct hpsa_scsi_dev_t*) ;
 int FUNC_3 (struct ctlr_info*,struct CommandList*,int ,int *,int,int *,struct hpsa_scsi_dev_t*) ;

__attribute__((used)) static int FUNC_4(struct ctlr_info *VAR_2,
 struct CommandList *VAR_3, u32 VAR_4, u8 *VAR_5, int VAR_6,
 u8 *VAR_7, struct hpsa_scsi_dev_t *VAR_8)
{
 if (!VAR_3->scsi_cmd->device)
  return -1;

 if (!VAR_3->scsi_cmd->device->hostdata)
  return -1;

 if (VAR_8->in_reset)
  return -1;


 if (FUNC_1(&VAR_8->ioaccel_cmds_out) >
     VAR_8->queue_depth) {
  FUNC_0(&VAR_8->ioaccel_cmds_out);
  return VAR_1;
 }
 if (VAR_2->transMethod & VAR_0)
  return FUNC_2(VAR_2, VAR_3, VAR_4,
      VAR_5, VAR_6, VAR_7,
      VAR_8);
 else
  return FUNC_3(VAR_2, VAR_3, VAR_4,
      VAR_5, VAR_6, VAR_7,
      VAR_8);
}
