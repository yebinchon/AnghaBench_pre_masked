
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct btrfs_trans_handle {int transid; TYPE_1__* transaction; } ;
struct btrfs_fs_info {int ro_block_group_mutex; int chunk_mutex; int extent_root; } ;
struct btrfs_block_group_cache {int flags; TYPE_2__* space_info; struct btrfs_fs_info* fs_info; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct btrfs_trans_handle*) ;
 int FUNC_1 (struct btrfs_trans_handle*) ;
 int FUNC_2 (struct btrfs_trans_handle*,int,int ) ;
 int FUNC_3 (struct btrfs_trans_handle*) ;
 int FUNC_4 (struct btrfs_fs_info*,int ) ;
 struct btrfs_trans_handle* FUNC_5 (int ) ;
 int FUNC_6 (struct btrfs_fs_info*,int) ;
 int FUNC_7 (struct btrfs_trans_handle*,int) ;
 int FUNC_8 (struct btrfs_block_group_cache*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ,int *) ;
 int FUNC_12 (struct btrfs_fs_info*,int) ;

int FUNC_13(struct btrfs_block_group_cache *VAR_4)

{
 struct btrfs_fs_info *VAR_5 = VAR_4->fs_info;
 struct btrfs_trans_handle *VAR_6;
 u64 VAR_7;
 int VAR_8;

again:
 VAR_6 = FUNC_5(VAR_5->extent_root);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);






 FUNC_9(&VAR_5->ro_block_group_mutex);
 if (FUNC_11(VAR_1, &VAR_6->transaction->flags)) {
  u64 VAR_9 = VAR_6->transid;

  FUNC_10(&VAR_5->ro_block_group_mutex);
  FUNC_3(VAR_6);

  VAR_8 = FUNC_6(VAR_5, VAR_9);
  if (VAR_8)
   return VAR_8;
  goto again;
 }





 VAR_7 = FUNC_12(VAR_5, VAR_4->flags);
 if (VAR_7 != VAR_4->flags) {
  VAR_8 = FUNC_2(VAR_6, VAR_7, VAR_2);





  if (VAR_8 == -VAR_3)
   VAR_8 = 0;
  if (VAR_8 < 0)
   goto out;
 }

 VAR_8 = FUNC_8(VAR_4, 0);
 if (!VAR_8)
  goto out;
 VAR_7 = FUNC_4(VAR_5, VAR_4->space_info->flags);
 VAR_8 = FUNC_2(VAR_6, VAR_7, VAR_2);
 if (VAR_8 < 0)
  goto out;
 VAR_8 = FUNC_8(VAR_4, 0);
out:
 if (VAR_4->flags & VAR_0) {
  VAR_7 = FUNC_12(VAR_5, VAR_4->flags);
  FUNC_9(&VAR_5->chunk_mutex);
  FUNC_7(VAR_6, VAR_7);
  FUNC_10(&VAR_5->chunk_mutex);
 }
 FUNC_10(&VAR_5->ro_block_group_mutex);

 FUNC_3(VAR_6);
 return VAR_8;
}
