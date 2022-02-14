
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_9__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct Scsi_Host {int max_sectors; scalar_t__ can_queue; scalar_t__ max_channel; int max_lun; int max_id; TYPE_1__* hostt; int cmd_per_lun; int sg_tablesize; scalar_t__ unique_id; } ;
struct TYPE_12__ {TYPE_9__* pcidev; scalar_t__ max_cmds; scalar_t__ nbus; int nlun; int ntargets; scalar_t__ mem_addr; scalar_t__ io_addr; } ;
typedef TYPE_2__ ips_ha_t ;
struct TYPE_13__ {int irq; int dev; } ;
struct TYPE_11__ {int cmd_per_lun; scalar_t__ can_queue; int sg_tablesize; } ;


 TYPE_2__* FUNC_0 (struct Scsi_Host*) ;
 int FUNC_1 (int ,TYPE_9__*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int VAR_3 ;
 TYPE_2__** VAR_4 ;
 int VAR_5 ;
 struct Scsi_Host** VAR_6 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,TYPE_2__*,int) ;
 scalar_t__ FUNC_5 (int ,int ,int ,int ,TYPE_2__*) ;
 scalar_t__ FUNC_6 (struct Scsi_Host*,int *) ;
 struct Scsi_Host* FUNC_7 (int *,int) ;
 int FUNC_8 (struct Scsi_Host*) ;
 int FUNC_9 (struct Scsi_Host*) ;

__attribute__((used)) static int
FUNC_10(int VAR_7)
{
 struct Scsi_Host *VAR_8;
 ips_ha_t *VAR_9, *VAR_10 = VAR_4[VAR_7];
 VAR_8 = FUNC_7(&VAR_3, sizeof (ips_ha_t));
 if (!VAR_8) {
  FUNC_1(VAR_1, VAR_10->pcidev,
      "Unable to register controller with SCSI subsystem\n");
  return -1;
 }
 VAR_9 = FUNC_0(VAR_8);
 FUNC_4(VAR_9, VAR_10, sizeof (ips_ha_t));
 FUNC_2(VAR_10->pcidev->irq, VAR_10);

 if (FUNC_5(VAR_9->pcidev->irq, VAR_2, VAR_0, VAR_5, VAR_9)) {
  FUNC_1(VAR_1, VAR_9->pcidev,
      "Unable to install interrupt handler\n");
  goto err_out_sh;
 }

 FUNC_3(VAR_10);


 VAR_8->unique_id = (VAR_9->io_addr) ? VAR_9->io_addr : VAR_9->mem_addr;
 VAR_8->sg_tablesize = VAR_8->hostt->sg_tablesize;
 VAR_8->can_queue = VAR_8->hostt->can_queue;
 VAR_8->cmd_per_lun = VAR_8->hostt->cmd_per_lun;
 VAR_8->max_sectors = 128;

 VAR_8->max_id = VAR_9->ntargets;
 VAR_8->max_lun = VAR_9->nlun;
 VAR_8->max_channel = VAR_9->nbus - 1;
 VAR_8->can_queue = VAR_9->max_cmds - 1;

 if (FUNC_6(VAR_8, &VAR_9->pcidev->dev))
  goto err_out;

 VAR_6[VAR_7] = VAR_8;
 VAR_4[VAR_7] = VAR_9;

 FUNC_9(VAR_8);

 return 0;

err_out:
 FUNC_2(VAR_9->pcidev->irq, VAR_9);
err_out_sh:
 FUNC_8(VAR_8);
 return -1;
}
