
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct btrfs_fs_info {int pinned_extents; } ;
struct btrfs_block_group_cache {struct btrfs_fs_info* fs_info; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct btrfs_block_group_cache*,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__*,scalar_t__*,int,int *) ;

u64 FUNC_3(struct btrfs_block_group_cache *VAR_2,
         u64 VAR_3, u64 VAR_4)
{
 struct btrfs_fs_info *VAR_5 = VAR_2->fs_info;
 u64 VAR_6, VAR_7, VAR_8, VAR_9 = 0;
 int VAR_10;

 while (VAR_3 < VAR_4) {
  VAR_10 = FUNC_2(VAR_5->pinned_extents, VAR_3,
         &VAR_6, &VAR_7,
         VAR_0 | VAR_1,
         ((void*)0));
  if (VAR_10)
   break;

  if (VAR_6 <= VAR_3) {
   VAR_3 = VAR_7 + 1;
  } else if (VAR_6 > VAR_3 && VAR_6 < VAR_4) {
   VAR_8 = VAR_6 - VAR_3;
   VAR_9 += VAR_8;
   VAR_10 = FUNC_1(VAR_2, VAR_3,
         VAR_8);
   FUNC_0(VAR_10);
   VAR_3 = VAR_7 + 1;
  } else {
   break;
  }
 }

 if (VAR_3 < VAR_4) {
  VAR_8 = VAR_4 - VAR_3;
  VAR_9 += VAR_8;
  VAR_10 = FUNC_1(VAR_2, VAR_3, VAR_8);
  FUNC_0(VAR_10);
 }

 return VAR_9;
}
