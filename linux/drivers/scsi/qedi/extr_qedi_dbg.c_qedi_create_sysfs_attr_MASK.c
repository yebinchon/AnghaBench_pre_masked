
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sysfs_bin_attrs {scalar_t__ name; int attr; } ;
struct TYPE_2__ {int kobj; } ;
struct Scsi_Host {TYPE_1__ shost_gendev; } ;


 int FUNC_0 (char*,scalar_t__,int) ;
 int FUNC_1 (int *,int ) ;

int
FUNC_2(struct Scsi_Host *VAR_0, struct sysfs_bin_attrs *VAR_1)
{
 int VAR_2 = 0;

 for (; VAR_1->name; VAR_1++) {
  VAR_2 = FUNC_1(&VAR_0->shost_gendev.kobj,
         VAR_1->attr);
  if (VAR_2)
   FUNC_0("Unable to create sysfs %s attr, err(%d).\n",
          VAR_1->name, VAR_2);
 }
 return VAR_2;
}
