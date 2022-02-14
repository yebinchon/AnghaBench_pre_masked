
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {TYPE_2__* device; } ;
struct sas_task {int dummy; } ;
struct sas_internal {TYPE_1__* dft; } ;
struct domain_device {int dummy; } ;
struct Scsi_Host {int host_lock; int host_eh_scheduled; int transportt; } ;
struct TYPE_4__ {struct Scsi_Host* host; } ;
struct TYPE_3__ {int (* lldd_abort_task ) (struct sas_task*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sas_task* FUNC_0 (struct scsi_cmnd*) ;
 struct domain_device* FUNC_1 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_2 (struct domain_device*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (struct sas_task*) ;
 struct sas_internal* FUNC_7 (int ) ;

int FUNC_8(struct scsi_cmnd *VAR_5)
{
 int VAR_6 = VAR_3;
 struct sas_task *VAR_7 = FUNC_0(VAR_5);
 struct Scsi_Host *VAR_8 = VAR_5->device->host;
 struct domain_device *VAR_9 = FUNC_1(VAR_5);
 struct sas_internal *VAR_10 = FUNC_7(VAR_8->transportt);
 unsigned long VAR_11;

 if (!VAR_10->dft->lldd_abort_task)
  return VAR_0;

 FUNC_4(VAR_8->host_lock, VAR_11);

 if (FUNC_2(VAR_9) && !VAR_8->host_eh_scheduled) {
  FUNC_5(VAR_8->host_lock, VAR_11);
  return VAR_0;
 }
 FUNC_5(VAR_8->host_lock, VAR_11);

 if (VAR_7)
  VAR_6 = VAR_10->dft->lldd_abort_task(VAR_7);
 else
  FUNC_3("no task to abort\n");
 if (VAR_6 == VAR_4 || VAR_6 == VAR_2)
  return VAR_1;

 return VAR_0;
}
