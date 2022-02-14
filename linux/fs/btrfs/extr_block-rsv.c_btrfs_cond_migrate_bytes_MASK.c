
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct btrfs_block_rsv {scalar_t__ space_info; scalar_t__ size; scalar_t__ reserved; int lock; scalar_t__ full; } ;
struct btrfs_fs_info {struct btrfs_block_rsv global_block_rsv; } ;


 int VAR_0 ;
 int FUNC_0 (struct btrfs_block_rsv*,scalar_t__,int) ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct btrfs_fs_info *VAR_1,
        struct btrfs_block_rsv *VAR_2, u64 VAR_3,
        int VAR_4)
{
 struct btrfs_block_rsv *VAR_5 = &VAR_1->global_block_rsv;
 u64 VAR_6;

 if (VAR_5->space_info != VAR_2->space_info)
  return -VAR_0;

 FUNC_2(&VAR_5->lock);
 VAR_6 = FUNC_1(VAR_5->size, VAR_4);
 if (VAR_5->reserved < VAR_6 + VAR_3) {
  FUNC_3(&VAR_5->lock);
  return -VAR_0;
 }
 VAR_5->reserved -= VAR_3;
 if (VAR_5->reserved < VAR_5->size)
  VAR_5->full = 0;
 FUNC_3(&VAR_5->lock);

 FUNC_0(VAR_2, VAR_3, 1);
 return 0;
}
