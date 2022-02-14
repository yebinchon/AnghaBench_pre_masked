
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sysfs_entry {int type; scalar_t__ name; int attr; } ;
struct TYPE_6__ {int kobj; } ;
struct Scsi_Host {TYPE_1__ shost_gendev; } ;
struct TYPE_7__ {int hw; struct Scsi_Host* host; } ;
typedef TYPE_2__ scsi_qla_host_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct sysfs_entry* VAR_0 ;
 int FUNC_3 (int ,TYPE_2__*,int,char*,scalar_t__) ;
 int VAR_1 ;
 int FUNC_4 (int ,TYPE_2__*,int,char*,scalar_t__,int) ;
 int VAR_2 ;
 int FUNC_5 (int *,int ) ;

void
FUNC_6(scsi_qla_host_t *VAR_3)
{
 struct Scsi_Host *VAR_4 = VAR_3->host;
 struct sysfs_entry *VAR_5;
 int VAR_6;

 for (VAR_5 = VAR_0; VAR_5->name; VAR_5++) {
  if (VAR_5->type && !FUNC_1(VAR_3->hw))
   continue;
  if (VAR_5->type == 2 && !FUNC_2(VAR_3->hw))
   continue;
  if (VAR_5->type == 3 && !(FUNC_0(VAR_3->hw)))
   continue;

  VAR_6 = FUNC_5(&VAR_4->shost_gendev.kobj,
      VAR_5->attr);
  if (VAR_6)
   FUNC_4(VAR_2, VAR_3, 0x00f3,
       "Unable to create sysfs %s binary attribute (%d).\n",
       VAR_5->name, VAR_6);
  else
   FUNC_3(VAR_1, VAR_3, 0x00f4,
       "Successfully created sysfs %s binary attribute.\n",
       VAR_5->name);
 }
}
