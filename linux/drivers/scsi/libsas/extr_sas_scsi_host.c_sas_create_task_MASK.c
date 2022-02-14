
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_lun {int scsi_lun; } ;
struct scsi_cmnd {int sc_data_direction; TYPE_1__* device; } ;
struct TYPE_4__ {int retry_count; struct scsi_cmnd* cmd; int task_attr; int LUN; } ;
struct sas_task {int task_done; int data_dir; int total_xfer_len; int num_scatter; int scatter; TYPE_2__ ssp_task; struct domain_device* dev; int task_proto; struct scsi_cmnd* uldd_task; } ;
struct domain_device {int tproto; } ;
typedef int gfp_t ;
struct TYPE_3__ {int lun; } ;


 int FUNC_0 (struct scsi_cmnd*,struct sas_task*) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct scsi_lun*) ;
 int FUNC_2 (int ,int *,int) ;
 struct sas_task* FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (struct scsi_cmnd*) ;
 int FUNC_5 (struct scsi_cmnd*) ;
 int FUNC_6 (struct scsi_cmnd*) ;

__attribute__((used)) static struct sas_task *FUNC_7(struct scsi_cmnd *VAR_2,
            struct domain_device *VAR_3,
            gfp_t VAR_4)
{
 struct sas_task *VAR_5 = FUNC_3(VAR_4);
 struct scsi_lun VAR_6;

 if (!VAR_5)
  return ((void*)0);

 VAR_5->uldd_task = VAR_2;
 FUNC_0(VAR_2, VAR_5);

 VAR_5->dev = VAR_3;
 VAR_5->task_proto = VAR_5->dev->tproto;

 VAR_5->ssp_task.retry_count = 1;
 FUNC_1(VAR_2->device->lun, &VAR_6);
 FUNC_2(VAR_5->ssp_task.LUN, &VAR_6.scsi_lun, 8);
 VAR_5->ssp_task.task_attr = VAR_0;
 VAR_5->ssp_task.cmd = VAR_2;

 VAR_5->scatter = FUNC_6(VAR_2);
 VAR_5->num_scatter = FUNC_5(VAR_2);
 VAR_5->total_xfer_len = FUNC_4(VAR_2);
 VAR_5->data_dir = VAR_2->sc_data_direction;

 VAR_5->task_done = VAR_1;

 return VAR_5;
}
