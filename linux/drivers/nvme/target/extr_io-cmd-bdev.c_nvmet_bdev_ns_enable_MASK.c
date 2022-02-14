
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct nvmet_ns {TYPE_1__* bdev; int blksize_shift; int size; int device_path; } ;
struct TYPE_5__ {int bd_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int ,int,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int ,int) ;

int FUNC_7(struct nvmet_ns *VAR_3)
{
 int VAR_4;

 VAR_3->bdev = FUNC_3(VAR_3->device_path,
   VAR_1 | VAR_2, ((void*)0));
 if (FUNC_0(VAR_3->bdev)) {
  VAR_4 = FUNC_1(VAR_3->bdev);
  if (VAR_4 != -VAR_0) {
   FUNC_6("failed to open block device %s: (%ld)\n",
     VAR_3->device_path, FUNC_1(VAR_3->bdev));
  }
  VAR_3->bdev = ((void*)0);
  return VAR_4;
 }
 VAR_3->size = FUNC_5(VAR_3->bdev->bd_inode);
 VAR_3->blksize_shift = FUNC_4(FUNC_2(VAR_3->bdev));
 return 0;
}
