
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct btrfs_fs_info {int dummy; } ;
struct btrfs_block_rsv {scalar_t__ reserved; int lock; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct btrfs_fs_info*,int) ;
 scalar_t__ FUNC_1 (struct btrfs_fs_info*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct btrfs_fs_info *VAR_1,
           struct btrfs_block_rsv *VAR_2)
{
 u64 VAR_3;
 int VAR_4;


 VAR_3 = FUNC_0(VAR_1, 1) +
  FUNC_1(VAR_1, 1);

 FUNC_2(&VAR_2->lock);
 if (VAR_2->reserved < VAR_3)
  VAR_4 = -VAR_0;
 else
  VAR_4 = 0;
 FUNC_3(&VAR_2->lock);
 return VAR_4;
}
