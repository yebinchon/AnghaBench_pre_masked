
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct visorhba_devdata {int debugfs_dir; int debugfs_info; int idr; int thread; struct Scsi_Host* scsihost; } ;
struct visor_device {int device; } ;
struct Scsi_Host {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct visorhba_devdata* FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct Scsi_Host*) ;
 int FUNC_6 (struct Scsi_Host*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct visor_device *VAR_0)
{
 struct visorhba_devdata *VAR_1 = FUNC_2(&VAR_0->device);
 struct Scsi_Host *VAR_2 = ((void*)0);

 if (!VAR_1)
  return;

 VAR_2 = VAR_1->scsihost;
 FUNC_7(VAR_1->thread);
 FUNC_6(VAR_2);
 FUNC_5(VAR_2);

 FUNC_4(&VAR_1->idr);

 FUNC_3(&VAR_0->device, ((void*)0));
 FUNC_0(VAR_1->debugfs_info);
 FUNC_1(VAR_1->debugfs_dir);
}
