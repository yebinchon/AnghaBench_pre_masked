
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {int dummy; } ;
struct mvumi_sgl {int dummy; } ;
struct mvumi_msg_frame {int dummy; } ;
struct mvumi_hba {int ib_max_size; int max_io; unsigned int max_sge; int max_transfer_size; struct Scsi_Host* shost; scalar_t__ max_target_id; TYPE_1__* pdev; int sas_discovery_mutex; int dm_thread; int pnp_count; int fw_flag; int unique_id; } ;
struct Scsi_Host {int can_queue; unsigned int sg_tablesize; int max_sectors; int cmd_per_lun; int max_cmd_len; scalar_t__ max_id; int unique_id; int irq; } ;
struct TYPE_2__ {scalar_t__ device; int dev; int irq; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int ,struct mvumi_hba*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_3 ;
 int FUNC_6 (struct Scsi_Host*,int ,scalar_t__,int ) ;
 int FUNC_7 (struct Scsi_Host*,int *) ;
 struct scsi_device* FUNC_8 (struct Scsi_Host*,int ,scalar_t__,int ) ;
 int FUNC_9 (struct scsi_device*) ;
 int FUNC_10 (struct scsi_device*) ;
 int FUNC_11 (struct Scsi_Host*) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct mvumi_hba *VAR_4)
{
 struct Scsi_Host *VAR_5 = VAR_4->shost;
 struct scsi_device *VAR_6 = ((void*)0);
 int VAR_7;
 unsigned int VAR_8 = (VAR_4->ib_max_size + 4 -
  sizeof(struct mvumi_msg_frame)) / sizeof(struct mvumi_sgl);

 VAR_5->irq = VAR_4->pdev->irq;
 VAR_5->unique_id = VAR_4->unique_id;
 VAR_5->can_queue = (VAR_4->max_io - 1) ? (VAR_4->max_io - 1) : 1;
 VAR_5->sg_tablesize = VAR_4->max_sge > VAR_8 ? VAR_8 : VAR_4->max_sge;
 VAR_5->max_sectors = VAR_4->max_transfer_size / 512;
 VAR_5->cmd_per_lun = (VAR_4->max_io - 1) ? (VAR_4->max_io - 1) : 1;
 VAR_5->max_id = VAR_4->max_target_id;
 VAR_5->max_cmd_len = VAR_0;

 VAR_7 = FUNC_7(VAR_5, &VAR_4->pdev->dev);
 if (VAR_7) {
  FUNC_2(&VAR_4->pdev->dev, "scsi_add_host failed\n");
  return VAR_7;
 }
 VAR_4->fw_flag |= VAR_1;

 FUNC_4(&VAR_4->sas_discovery_mutex);
 if (VAR_4->pdev->device == VAR_2)
  VAR_7 = FUNC_6(VAR_5, 0, VAR_4->max_target_id - 1, 0);
 else
  VAR_7 = 0;
 if (VAR_7) {
  FUNC_2(&VAR_4->pdev->dev, "add virtual device failed\n");
  FUNC_5(&VAR_4->sas_discovery_mutex);
  goto fail_add_device;
 }

 VAR_4->dm_thread = FUNC_3(VAR_3,
      VAR_4, "mvumi_scanthread");
 if (FUNC_0(VAR_4->dm_thread)) {
  FUNC_2(&VAR_4->pdev->dev,
   "failed to create device scan thread\n");
  FUNC_5(&VAR_4->sas_discovery_mutex);
  goto fail_create_thread;
 }
 FUNC_1(&VAR_4->pnp_count, 1);
 FUNC_12(VAR_4->dm_thread);

 FUNC_5(&VAR_4->sas_discovery_mutex);
 return 0;

fail_create_thread:
 if (VAR_4->pdev->device == VAR_2)
  VAR_6 = FUNC_8(VAR_4->shost, 0,
      VAR_4->max_target_id - 1, 0);
 if (VAR_6) {
  FUNC_10(VAR_6);
  FUNC_9(VAR_6);
 }
fail_add_device:
 FUNC_11(VAR_4->shost);
 return VAR_7;
}
