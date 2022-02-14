
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct Scsi_Host {int shost_gendev; TYPE_1__* hostt; int shost_dev; } ;
struct TYPE_2__ {scalar_t__* shost_attrs; } ;


 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct Scsi_Host *VAR_0)
{
 int VAR_1, VAR_2;


 if (VAR_0->hostt->shost_attrs) {
  for (VAR_2 = 0; VAR_0->hostt->shost_attrs[VAR_2]; VAR_2++) {
   VAR_1 = FUNC_0(&VAR_0->shost_dev,
     VAR_0->hostt->shost_attrs[VAR_2]);
   if (VAR_1)
    return VAR_1;
  }
 }

 FUNC_2(&VAR_0->shost_gendev);
 FUNC_1(&VAR_0->shost_gendev);
 return 0;
}
