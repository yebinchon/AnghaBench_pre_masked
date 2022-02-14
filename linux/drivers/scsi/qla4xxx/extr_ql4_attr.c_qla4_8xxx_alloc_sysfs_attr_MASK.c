
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sysfs_entry {scalar_t__ name; int attr; } ;
struct scsi_qla_host {struct Scsi_Host* host; } ;
struct TYPE_2__ {int kobj; } ;
struct Scsi_Host {TYPE_1__ shost_gendev; } ;


 int VAR_0 ;
 struct sysfs_entry* VAR_1 ;
 int FUNC_0 (int ,struct scsi_qla_host*,char*,scalar_t__,int) ;
 int FUNC_1 (int *,int ) ;

void FUNC_2(struct scsi_qla_host *VAR_2)
{
 struct Scsi_Host *VAR_3 = VAR_2->host;
 struct sysfs_entry *VAR_4;
 int VAR_5;

 for (VAR_4 = VAR_1; VAR_4->name; VAR_4++) {
  VAR_5 = FUNC_1(&VAR_3->shost_gendev.kobj,
         VAR_4->attr);
  if (VAR_5)
   FUNC_0(VAR_0, VAR_2,
       "Unable to create sysfs %s binary attribute (%d).\n",
       VAR_4->name, VAR_5);
 }
}
