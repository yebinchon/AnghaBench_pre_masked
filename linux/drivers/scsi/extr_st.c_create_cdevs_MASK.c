
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct scsi_tape {TYPE_1__* modes; TYPE_3__* device; } ;
struct TYPE_8__ {int kobj; } ;
struct TYPE_6__ {int kobj; } ;
struct TYPE_7__ {TYPE_2__ sdev_gendev; } ;
struct TYPE_5__ {TYPE_4__** devs; } ;


 int VAR_0 ;
 int FUNC_0 (struct scsi_tape*,int,int) ;
 int FUNC_1 (int *,int *,char*) ;

__attribute__((used)) static int FUNC_2(struct scsi_tape *VAR_1)
{
 int VAR_2, VAR_3;
 for (VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2) {
  VAR_3 = FUNC_0(VAR_1, VAR_2, 0);
  if (VAR_3)
   return VAR_3;
  VAR_3 = FUNC_0(VAR_1, VAR_2, 1);
  if (VAR_3)
   return VAR_3;
 }

 return FUNC_1(&VAR_1->device->sdev_gendev.kobj,
     &VAR_1->modes[0].devs[0]->kobj, "tape");
}
