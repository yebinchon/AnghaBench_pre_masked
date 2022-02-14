
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ctlr_info {struct Scsi_Host* scsi_host; TYPE_1__* pdev; int maxsgentries; scalar_t__ nr_cmds; } ;
struct Scsi_Host {int this_id; int max_channel; unsigned long* hostdata; int irq; int unique_id; int transportt; int sg_tablesize; scalar_t__ can_queue; scalar_t__ cmd_per_lun; void* max_id; void* max_lun; int max_cmd_len; scalar_t__ n_io_port; scalar_t__ io_port; } ;
typedef int h ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 struct Scsi_Host* FUNC_2 (int *,int) ;

__attribute__((used)) static int FUNC_3(struct ctlr_info *VAR_6)
{
 struct Scsi_Host *VAR_7;

 VAR_7 = FUNC_2(&VAR_4, sizeof(VAR_6));
 if (VAR_7 == ((void*)0)) {
  FUNC_0(&VAR_6->pdev->dev, "scsi_host_alloc failed\n");
  return -VAR_0;
 }

 VAR_7->io_port = 0;
 VAR_7->n_io_port = 0;
 VAR_7->this_id = -1;
 VAR_7->max_channel = 3;
 VAR_7->max_cmd_len = VAR_3;
 VAR_7->max_lun = VAR_1;
 VAR_7->max_id = VAR_1;
 VAR_7->can_queue = VAR_6->nr_cmds - VAR_2;
 VAR_7->cmd_per_lun = VAR_7->can_queue;
 VAR_7->sg_tablesize = VAR_6->maxsgentries;
 VAR_7->transportt = VAR_5;
 VAR_7->hostdata[0] = (unsigned long) VAR_6;
 VAR_7->irq = FUNC_1(VAR_6->pdev, 0);
 VAR_7->unique_id = VAR_7->irq;

 VAR_6->scsi_host = VAR_7;
 return 0;
}
