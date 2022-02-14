
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sysfs_bin_attrs {int attr; scalar_t__ name; } ;
struct TYPE_2__ {int kobj; } ;
struct Scsi_Host {TYPE_1__ shost_gendev; } ;


 int FUNC_0 (int *,int ) ;

void
FUNC_1(struct Scsi_Host *VAR_0, struct sysfs_bin_attrs *VAR_1)
{
 for (; VAR_1->name; VAR_1++)
  FUNC_0(&VAR_0->shost_gendev.kobj, VAR_1->attr);
}
