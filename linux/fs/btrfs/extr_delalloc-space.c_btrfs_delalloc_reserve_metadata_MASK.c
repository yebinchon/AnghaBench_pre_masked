
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct btrfs_root {struct btrfs_fs_info* fs_info; } ;
struct btrfs_block_rsv {int lock; int qgroup_rsv_reserved; } ;
struct btrfs_inode {int delalloc_mutex; int lock; scalar_t__ csum_bytes; struct btrfs_block_rsv block_rsv; struct btrfs_root* root; } ;
struct btrfs_fs_info {int sectorsize; } ;
typedef enum btrfs_reserve_flush_enum { ____Placeholder_btrfs_reserve_flush_enum } btrfs_reserve_flush_enum ;
struct TYPE_2__ {scalar_t__ journal_info; } ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct btrfs_block_rsv*,scalar_t__,int) ;
 int FUNC_2 (struct btrfs_fs_info*,struct btrfs_inode*) ;
 int FUNC_3 (struct btrfs_inode*) ;
 scalar_t__ FUNC_4 (struct btrfs_inode*) ;
 int FUNC_5 (struct btrfs_inode*,unsigned int) ;
 int FUNC_6 (struct btrfs_root*,scalar_t__) ;
 int FUNC_7 (struct btrfs_root*,scalar_t__,int) ;
 int FUNC_8 (struct btrfs_root*,struct btrfs_block_rsv*,scalar_t__,int) ;
 scalar_t__ FUNC_9 (struct btrfs_fs_info*) ;
 int FUNC_10 (struct btrfs_fs_info*,scalar_t__,scalar_t__*,scalar_t__*) ;
 unsigned int FUNC_11 (scalar_t__) ;
 TYPE_1__* VAR_3 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct btrfs_fs_info*,char*,int ,scalar_t__,int) ;

int FUNC_18(struct btrfs_inode *VAR_4, u64 VAR_5)
{
 struct btrfs_root *VAR_6 = VAR_4->root;
 struct btrfs_fs_info *VAR_7 = VAR_6->fs_info;
 struct btrfs_block_rsv *VAR_8 = &VAR_4->block_rsv;
 u64 VAR_9, VAR_10;
 unsigned VAR_11;
 enum btrfs_reserve_flush_enum VAR_12 = VAR_0;
 int VAR_13 = 0;
 bool VAR_14 = 1;
 if (FUNC_4(VAR_4)) {
  VAR_12 = VAR_2;
  VAR_14 = 0;
 } else {
  if (VAR_3->journal_info)
   VAR_12 = VAR_1;

  if (FUNC_9(VAR_7))
   FUNC_14(1);
 }

 if (VAR_14)
  FUNC_12(&VAR_4->delalloc_mutex);

 VAR_5 = FUNC_0(VAR_5, VAR_7->sectorsize);
 FUNC_10(VAR_7, VAR_5, &VAR_9,
    &VAR_10);
 VAR_13 = FUNC_7(VAR_6, VAR_10, 1);
 if (VAR_13)
  goto out_fail;
 VAR_13 = FUNC_8(VAR_6, VAR_8, VAR_9, VAR_12);
 if (VAR_13)
  goto out_qgroup;







 FUNC_15(&VAR_4->lock);
 VAR_11 = FUNC_11(VAR_5);
 FUNC_5(VAR_4, VAR_11);
 VAR_4->csum_bytes += VAR_5;
 FUNC_2(VAR_7, VAR_4);
 FUNC_16(&VAR_4->lock);


 FUNC_1(VAR_8, VAR_9, 0);
 FUNC_17(VAR_6->fs_info, "delalloc",
          FUNC_3(VAR_4), VAR_9, 1);

 FUNC_15(&VAR_8->lock);
 VAR_8->qgroup_rsv_reserved += VAR_10;
 FUNC_16(&VAR_8->lock);

 if (VAR_14)
  FUNC_13(&VAR_4->delalloc_mutex);
 return 0;
out_qgroup:
 FUNC_6(VAR_6, VAR_10);
out_fail:
 if (VAR_14)
  FUNC_13(&VAR_4->delalloc_mutex);
 return VAR_13;
}
