
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int bt_meta_sectorsize; unsigned int bt_meta_sectormask; int bt_bdev; void* bt_logical_sectormask; void* bt_logical_sectorsize; int bt_mount; } ;
typedef TYPE_1__ xfs_buftarg_t ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (int ,char*,unsigned int,int ) ;

int
FUNC_3(
 xfs_buftarg_t *VAR_1,
 unsigned int VAR_2)
{

 VAR_1->bt_meta_sectorsize = VAR_2;
 VAR_1->bt_meta_sectormask = VAR_2 - 1;

 if (FUNC_1(VAR_1->bt_bdev, VAR_2)) {
  FUNC_2(VAR_1->bt_mount,
   "Cannot set_blocksize to %u on device %pg",
   VAR_2, VAR_1->bt_bdev);
  return -VAR_0;
 }


 VAR_1->bt_logical_sectorsize = FUNC_0(VAR_1->bt_bdev);
 VAR_1->bt_logical_sectormask = FUNC_0(VAR_1->bt_bdev) - 1;

 return 0;
}
