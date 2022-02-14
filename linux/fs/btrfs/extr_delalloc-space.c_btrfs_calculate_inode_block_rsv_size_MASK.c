
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;
struct btrfs_block_rsv {unsigned int size; unsigned int qgroup_rsv_size; int lock; } ;
struct btrfs_inode {unsigned int outstanding_extents; int csum_bytes; int lock; struct btrfs_block_rsv block_rsv; } ;
struct btrfs_fs_info {unsigned int nodesize; } ;


 unsigned int FUNC_0 (struct btrfs_fs_info*,unsigned int) ;
 scalar_t__ FUNC_1 (struct btrfs_fs_info*,int) ;
 unsigned int FUNC_2 (struct btrfs_fs_info*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct btrfs_fs_info *VAR_0,
       struct btrfs_inode *VAR_1)
{
 struct btrfs_block_rsv *VAR_2 = &VAR_1->block_rsv;
 u64 VAR_3 = 0;
 u64 VAR_4 = 0;
 u64 VAR_5;
 unsigned VAR_6;

 FUNC_3(&VAR_1->lock);
 VAR_6 = VAR_1->outstanding_extents;





 if (VAR_6) {
  VAR_3 = FUNC_0(VAR_0,
      VAR_6);
  VAR_3 += FUNC_1(VAR_0, 1);
 }
 VAR_5 = FUNC_2(VAR_0,
       VAR_1->csum_bytes);
 VAR_3 += FUNC_0(VAR_0,
       VAR_5);






 VAR_4 = (u64)VAR_6 * VAR_0->nodesize;

 FUNC_4(&VAR_2->lock);
 VAR_2->size = VAR_3;
 VAR_2->qgroup_rsv_size = VAR_4;
 FUNC_5(&VAR_2->lock);
}
