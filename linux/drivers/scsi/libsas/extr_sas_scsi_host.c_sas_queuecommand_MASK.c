
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scsi_cmnd {int result; int (* scsi_done ) (struct scsi_cmnd*) ;} ;
struct sas_task {int dummy; } ;
struct sas_internal {TYPE_2__* dft; } ;
struct TYPE_4__ {TYPE_3__* ap; } ;
struct domain_device {TYPE_1__ sata_dev; int state; } ;
struct Scsi_Host {int transportt; } ;
struct TYPE_6__ {int lock; } ;
struct TYPE_5__ {int (* lldd_execute_task ) (struct sas_task*,int ) ;} ;


 int FUNC_0 (struct scsi_cmnd*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct scsi_cmnd*,TYPE_3__*) ;
 struct domain_device* FUNC_2 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_3 (struct domain_device*) ;
 int FUNC_4 (char*,int) ;
 struct sas_task* FUNC_5 (struct scsi_cmnd*,struct domain_device*,int ) ;
 int FUNC_6 (struct sas_task*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct sas_task*,int ) ;
 int FUNC_10 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_11 (int ,int *) ;
 struct sas_internal* FUNC_12 (int ) ;

int FUNC_13(struct Scsi_Host *VAR_7, struct scsi_cmnd *VAR_8)
{
 struct sas_internal *VAR_9 = FUNC_12(VAR_7->transportt);
 struct domain_device *VAR_10 = FUNC_2(VAR_8);
 struct sas_task *VAR_11;
 int VAR_12 = 0;


 if (FUNC_11(VAR_4, &VAR_10->state)) {
  VAR_8->result = VAR_0 << 16;
  goto out_done;
 }

 if (FUNC_3(VAR_10)) {
  FUNC_7(VAR_10->sata_dev.ap->lock);
  VAR_12 = FUNC_1(VAR_8, VAR_10->sata_dev.ap);
  FUNC_8(VAR_10->sata_dev.ap->lock);
  return VAR_12;
 }

 VAR_11 = FUNC_5(VAR_8, VAR_10, VAR_3);
 if (!VAR_11)
  return VAR_6;

 VAR_12 = VAR_9->dft->lldd_execute_task(VAR_11, VAR_3);
 if (VAR_12)
  goto out_free_task;
 return 0;

out_free_task:
 FUNC_4("lldd_execute_task returned: %d\n", VAR_12);
 FUNC_0(VAR_8, ((void*)0));
 FUNC_6(VAR_11);
 if (VAR_12 == -VAR_5)
  VAR_8->result = VAR_2 << 16;
 else
  VAR_8->result = VAR_1 << 16;
out_done:
 VAR_8->scsi_done(VAR_8);
 return 0;
}
