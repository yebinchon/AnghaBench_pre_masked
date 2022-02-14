
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct btrfs_block_rsv {scalar_t__ reserved; scalar_t__ size; int lock; } ;
struct btrfs_fs_info {struct btrfs_block_rsv global_block_rsv; struct btrfs_block_rsv delayed_refs_rsv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

bool FUNC_2(struct btrfs_fs_info *VAR_0)
{
 struct btrfs_block_rsv *VAR_1 = &VAR_0->delayed_refs_rsv;
 struct btrfs_block_rsv *VAR_2 = &VAR_0->global_block_rsv;
 bool VAR_3 = 0;
 u64 VAR_4;

 FUNC_0(&VAR_2->lock);
 VAR_4 = VAR_2->reserved;
 FUNC_1(&VAR_2->lock);







 FUNC_0(&VAR_1->lock);
 VAR_4 += VAR_1->reserved;
 if (VAR_1->size >= VAR_4)
  VAR_3 = 1;
 FUNC_1(&VAR_1->lock);
 return VAR_3;
}
