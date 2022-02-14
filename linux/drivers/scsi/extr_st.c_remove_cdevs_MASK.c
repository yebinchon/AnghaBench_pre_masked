
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct st_modedef {scalar_t__* devs; scalar_t__* cdevs; } ;
struct scsi_tape {struct st_modedef* modes; TYPE_2__* device; } ;
struct TYPE_3__ {int kobj; } ;
struct TYPE_4__ {TYPE_1__ sdev_gendev; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static void FUNC_3(struct scsi_tape *VAR_1)
{
 int VAR_2, VAR_3;
 FUNC_2(&VAR_1->device->sdev_gendev.kobj, "tape");
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  struct st_modedef *VAR_4 = &(VAR_1->modes[VAR_2]);
  for (VAR_3 = 0; VAR_3 < 2; VAR_3++) {
   if (VAR_4->cdevs[VAR_3])
    FUNC_0(VAR_4->cdevs[VAR_3]);
   if (VAR_4->devs[VAR_3])
    FUNC_1(VAR_4->devs[VAR_3]);
  }
 }
}
