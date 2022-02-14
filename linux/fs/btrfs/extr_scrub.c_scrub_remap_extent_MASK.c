
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct btrfs_fs_info {int dummy; } ;
struct btrfs_device {int bdev; } ;
struct btrfs_bio {int mirror_num; TYPE_1__* stripes; } ;
struct TYPE_2__ {scalar_t__ physical; struct btrfs_device* dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct btrfs_fs_info*,int ,scalar_t__,scalar_t__*,struct btrfs_bio**,int ) ;
 int FUNC_1 (struct btrfs_bio*) ;

__attribute__((used)) static void FUNC_2(struct btrfs_fs_info *VAR_1,
          u64 VAR_2, u64 VAR_3,
          u64 *VAR_4,
          struct btrfs_device **VAR_5,
          int *VAR_6)
{
 u64 VAR_7;
 struct btrfs_bio *VAR_8 = ((void*)0);
 int VAR_9;

 VAR_7 = VAR_3;
 VAR_9 = FUNC_0(VAR_1, VAR_0, VAR_2,
         &VAR_7, &VAR_8, 0);
 if (VAR_9 || !VAR_8 || VAR_7 < VAR_3 ||
     !VAR_8->stripes[0].dev->bdev) {
  FUNC_1(VAR_8);
  return;
 }

 *VAR_4 = VAR_8->stripes[0].physical;
 *VAR_6 = VAR_8->mirror_num;
 *VAR_5 = VAR_8->stripes[0].dev;
 FUNC_1(VAR_8);
}
