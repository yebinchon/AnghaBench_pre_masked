
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct inode {int dummy; } ;
struct extent_changeset {int dummy; } ;
struct btrfs_trans_handle {scalar_t__ transid; TYPE_2__* transaction; scalar_t__ aborted; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int dummy; } ;
struct btrfs_fs_info {int global_block_rsv; struct btrfs_root* tree_root; } ;
struct TYPE_4__ {int offset; } ;
struct btrfs_block_group_cache {int disk_cache_state; scalar_t__ cache_generation; scalar_t__ cached; int lock; TYPE_1__ key; scalar_t__ ro; struct btrfs_fs_info* fs_info; } ;
struct TYPE_6__ {scalar_t__ generation; } ;
struct TYPE_5__ {int flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 TYPE_3__* FUNC_0 (struct inode*) ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int VAR_7 ;
 int FUNC_3 (struct inode*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct btrfs_trans_handle*,int) ;
 int FUNC_6 (struct inode*,struct extent_changeset**,int ,int) ;
 int FUNC_7 (struct btrfs_fs_info*,int *) ;
 int FUNC_8 (struct inode*,struct btrfs_trans_handle*,int ,int ,int,int,int,int*) ;
 int FUNC_9 (struct btrfs_path*) ;
 int FUNC_10 (struct btrfs_fs_info*,int ) ;
 int FUNC_11 (struct btrfs_trans_handle*,int *,struct inode*) ;
 int FUNC_12 (struct btrfs_trans_handle*,struct btrfs_root*,struct inode*) ;
 int FUNC_13 (struct btrfs_trans_handle*,struct btrfs_block_group_cache*,struct btrfs_path*) ;
 int FUNC_14 (int,int ) ;
 int FUNC_15 (struct extent_changeset*) ;
 scalar_t__ FUNC_16 (struct inode*) ;
 int FUNC_17 (struct inode*) ;
 struct inode* FUNC_18 (struct btrfs_block_group_cache*,struct btrfs_path*) ;
 int FUNC_19 (int ,int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 scalar_t__ FUNC_22 (int ,int *) ;

__attribute__((used)) static int FUNC_23(struct btrfs_block_group_cache *VAR_11,
       struct btrfs_trans_handle *VAR_12,
       struct btrfs_path *VAR_13)
{
 struct btrfs_fs_info *VAR_14 = VAR_11->fs_info;
 struct btrfs_root *VAR_15 = VAR_14->tree_root;
 struct inode *VAR_16 = ((void*)0);
 struct extent_changeset *VAR_17 = ((void*)0);
 u64 VAR_18 = 0;
 int VAR_19 = VAR_1;
 u64 VAR_20 = 0;
 int VAR_21 = 0;
 int VAR_22 = 0;





 if (VAR_11->key.offset < (100 * VAR_9)) {
  FUNC_20(&VAR_11->lock);
  VAR_11->disk_cache_state = VAR_3;
  FUNC_21(&VAR_11->lock);
  return 0;
 }

 if (VAR_12->aborted)
  return 0;
again:
 VAR_16 = FUNC_18(VAR_11, VAR_13);
 if (FUNC_2(VAR_16) && FUNC_3(VAR_16) != -VAR_5) {
  VAR_22 = FUNC_3(VAR_16);
  FUNC_9(VAR_13);
  goto out;
 }

 if (FUNC_2(VAR_16)) {
  FUNC_1(VAR_21);
  VAR_21++;

  if (VAR_11->ro)
   goto out_free;

  VAR_22 = FUNC_13(VAR_12, VAR_11, VAR_13);
  if (VAR_22)
   goto out_free;
  goto again;
 }






 FUNC_0(VAR_16)->generation = 0;
 VAR_22 = FUNC_12(VAR_12, VAR_15, VAR_16);
 if (VAR_22) {
  FUNC_5(VAR_12, VAR_22);
  goto out_put;
 }
 FUNC_4(VAR_22);


 if (VAR_11->cache_generation == VAR_12->transid &&
     FUNC_16(VAR_16)) {
  VAR_19 = VAR_2;
  goto out_put;
 }

 if (FUNC_16(VAR_16) > 0) {
  VAR_22 = FUNC_7(VAR_14,
     &VAR_14->global_block_rsv);
  if (VAR_22)
   goto out_put;

  VAR_22 = FUNC_11(VAR_12, ((void*)0), VAR_16);
  if (VAR_22)
   goto out_put;
 }

 FUNC_20(&VAR_11->lock);
 if (VAR_11->cached != VAR_0 ||
     !FUNC_10(VAR_14, VAR_8)) {






  VAR_19 = VAR_3;
  FUNC_21(&VAR_11->lock);
  goto out_put;
 }
 FUNC_21(&VAR_11->lock);





 if (FUNC_22(VAR_4, &VAR_12->transaction->flags)) {
  VAR_22 = -VAR_6;
  goto out_put;
 }







 VAR_20 = FUNC_14(VAR_11->key.offset, VAR_10);
 if (!VAR_20)
  VAR_20 = 1;

 VAR_20 *= 16;
 VAR_20 *= VAR_7;

 VAR_22 = FUNC_6(VAR_16, &VAR_17, 0, VAR_20);
 if (VAR_22)
  goto out_put;

 VAR_22 = FUNC_8(VAR_16, VAR_12, 0, 0, VAR_20,
           VAR_20, VAR_20,
           &VAR_18);
 if (!VAR_22)
  VAR_19 = VAR_2;
 else if (VAR_22 == -VAR_6)
  FUNC_19(VAR_4, &VAR_12->transaction->flags);

out_put:
 FUNC_17(VAR_16);
out_free:
 FUNC_9(VAR_13);
out:
 FUNC_20(&VAR_11->lock);
 if (!VAR_22 && VAR_19 == VAR_2)
  VAR_11->cache_generation = VAR_12->transid;
 VAR_11->disk_cache_state = VAR_19;
 FUNC_21(&VAR_11->lock);

 FUNC_15(VAR_17);
 return VAR_22;
}
