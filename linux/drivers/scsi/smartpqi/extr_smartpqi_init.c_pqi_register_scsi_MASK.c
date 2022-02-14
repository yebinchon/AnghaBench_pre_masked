
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pqi_ctrl_info {struct Scsi_Host* scsi_host; int ctrl_id; TYPE_1__* pci_dev; int num_queue_groups; int sg_tablesize; int scsi_ml_can_queue; int max_sectors; } ;
struct Scsi_Host {int this_id; unsigned long* hostdata; int nr_hw_queues; int irq; int unique_id; int transportt; int sg_tablesize; int can_queue; int cmd_per_lun; int max_sectors; int max_id; int max_lun; int max_cmd_len; int max_channel; scalar_t__ n_io_port; scalar_t__ io_port; } ;
typedef int ctrl_info ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (struct Scsi_Host*,struct pqi_ctrl_info*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct Scsi_Host*,int *) ;
 struct Scsi_Host* FUNC_4 (int *,int) ;
 int FUNC_5 (struct Scsi_Host*) ;
 int FUNC_6 (struct Scsi_Host*) ;

__attribute__((used)) static int FUNC_7(struct pqi_ctrl_info *VAR_5)
{
 int VAR_6;
 struct Scsi_Host *VAR_7;

 VAR_7 = FUNC_4(&VAR_3, sizeof(VAR_5));
 if (!VAR_7) {
  FUNC_0(&VAR_5->pci_dev->dev,
   "scsi_host_alloc failed for controller %u\n",
   VAR_5->ctrl_id);
  return -VAR_0;
 }

 VAR_7->io_port = 0;
 VAR_7->n_io_port = 0;
 VAR_7->this_id = -1;
 VAR_7->max_channel = VAR_2;
 VAR_7->max_cmd_len = VAR_1;
 VAR_7->max_lun = ~0;
 VAR_7->max_id = ~0;
 VAR_7->max_sectors = VAR_5->max_sectors;
 VAR_7->can_queue = VAR_5->scsi_ml_can_queue;
 VAR_7->cmd_per_lun = VAR_7->can_queue;
 VAR_7->sg_tablesize = VAR_5->sg_tablesize;
 VAR_7->transportt = VAR_4;
 VAR_7->irq = FUNC_1(VAR_5->pci_dev, 0);
 VAR_7->unique_id = VAR_7->irq;
 VAR_7->nr_hw_queues = VAR_5->num_queue_groups;
 VAR_7->hostdata[0] = (unsigned long)VAR_5;

 VAR_6 = FUNC_3(VAR_7, &VAR_5->pci_dev->dev);
 if (VAR_6) {
  FUNC_0(&VAR_5->pci_dev->dev,
   "scsi_add_host failed for controller %u\n",
   VAR_5->ctrl_id);
  goto free_host;
 }

 VAR_6 = FUNC_2(VAR_7, VAR_5);
 if (VAR_6) {
  FUNC_0(&VAR_5->pci_dev->dev,
   "add SAS host failed for controller %u\n",
   VAR_5->ctrl_id);
  goto remove_host;
 }

 VAR_5->scsi_host = VAR_7;

 return 0;

remove_host:
 FUNC_6(VAR_7);
free_host:
 FUNC_5(VAR_7);

 return VAR_6;
}
