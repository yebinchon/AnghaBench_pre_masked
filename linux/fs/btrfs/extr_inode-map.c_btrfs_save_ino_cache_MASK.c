
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct inode {int dummy; } ;
struct extent_changeset {int dummy; } ;
struct btrfs_trans_handle {int bytes_reserved; struct btrfs_block_rsv* block_rsv; int transid; } ;
struct TYPE_5__ {scalar_t__ objectid; } ;
struct btrfs_root {scalar_t__ ino_cache_state; int ino_cache_lock; int root_item; TYPE_1__ root_key; struct btrfs_free_space_ctl* free_ino_ctl; struct btrfs_fs_info* fs_info; } ;
struct btrfs_path {int dummy; } ;
struct btrfs_block_rsv {int dummy; } ;
struct btrfs_fs_info {struct btrfs_block_rsv trans_block_rsv; } ;
struct btrfs_free_space_ctl {int free_extents; int total_bitmaps; int tree_lock; } ;
struct btrfs_free_space {int dummy; } ;
struct TYPE_6__ {scalar_t__ generation; } ;


 int FUNC_0 (int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (struct inode*) ;
 int VAR_9 ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct btrfs_trans_handle*,int) ;
 struct btrfs_path* FUNC_6 () ;
 int FUNC_7 (struct btrfs_root*,struct btrfs_block_rsv*,int ,int ) ;
 int FUNC_8 (struct btrfs_fs_info*,struct btrfs_block_rsv*,int ) ;
 int FUNC_9 (struct btrfs_fs_info*,int) ;
 int FUNC_10 (TYPE_2__*,int) ;
 int FUNC_11 (TYPE_2__*,int,int) ;
 int FUNC_12 (struct inode*,struct extent_changeset**,int ,int) ;
 int FUNC_13 (struct btrfs_path*) ;
 int FUNC_14 (struct inode*,struct btrfs_trans_handle*,int ,int ,int,int,int,int *) ;
 scalar_t__ FUNC_15 (int *) ;
 int FUNC_16 (struct btrfs_fs_info*,int ) ;
 int FUNC_17 (struct btrfs_trans_handle*,int *,struct inode*) ;
 int FUNC_18 (struct btrfs_trans_handle*,struct btrfs_root*,struct inode*) ;
 int FUNC_19 (struct btrfs_root*,struct btrfs_trans_handle*,struct btrfs_path*,struct inode*) ;
 int FUNC_20 (struct btrfs_root*,struct btrfs_trans_handle*,struct btrfs_path*) ;
 int FUNC_21 (struct extent_changeset*) ;
 scalar_t__ FUNC_22 (struct inode*) ;
 int FUNC_23 (struct inode*) ;
 struct inode* FUNC_24 (struct btrfs_root*,struct btrfs_path*) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (struct btrfs_fs_info*,char*,int ,int ,int) ;

int FUNC_28(struct btrfs_root *VAR_10,
    struct btrfs_trans_handle *VAR_11)
{
 struct btrfs_fs_info *VAR_12 = VAR_10->fs_info;
 struct btrfs_free_space_ctl *VAR_13 = VAR_10->free_ino_ctl;
 struct btrfs_path *VAR_14;
 struct inode *VAR_15;
 struct btrfs_block_rsv *VAR_16;
 struct extent_changeset *VAR_17 = ((void*)0);
 u64 VAR_18;
 u64 VAR_19 = 0;
 int VAR_20;
 int VAR_21;
 bool VAR_22 = 0;


 if (VAR_10->root_key.objectid != VAR_2 &&
     (VAR_10->root_key.objectid < VAR_1 ||
      VAR_10->root_key.objectid > VAR_3))
  return 0;


 if (FUNC_15(&VAR_10->root_item) == 0)
  return 0;

 if (!FUNC_16(VAR_12, VAR_8))
  return 0;

 VAR_14 = FUNC_6();
 if (!VAR_14)
  return -VAR_6;

 VAR_16 = VAR_11->block_rsv;
 VAR_11->block_rsv = &VAR_12->trans_block_rsv;

 VAR_18 = VAR_11->bytes_reserved;







 VAR_11->bytes_reserved = FUNC_9(VAR_12, 10);
 VAR_20 = FUNC_7(VAR_10, VAR_11->block_rsv,
      VAR_11->bytes_reserved,
      VAR_4);
 if (VAR_20)
  goto out;
 FUNC_27(VAR_12, "ino_cache", VAR_11->transid,
          VAR_11->bytes_reserved, 1);
again:
 VAR_15 = FUNC_24(VAR_10, VAR_14);
 if (FUNC_3(VAR_15) && (FUNC_4(VAR_15) != -VAR_5 || VAR_22)) {
  VAR_20 = FUNC_4(VAR_15);
  goto out_release;
 }

 if (FUNC_3(VAR_15)) {
  FUNC_2(VAR_22);
  VAR_22 = 1;

  VAR_20 = FUNC_20(VAR_10, VAR_11, VAR_14);
  if (VAR_20)
   goto out_release;
  goto again;
 }

 FUNC_1(VAR_15)->generation = 0;
 VAR_20 = FUNC_18(VAR_11, VAR_10, VAR_15);
 if (VAR_20) {
  FUNC_5(VAR_11, VAR_20);
  goto out_put;
 }

 if (FUNC_22(VAR_15) > 0) {
  VAR_20 = FUNC_17(VAR_11, ((void*)0), VAR_15);
  if (VAR_20) {
   if (VAR_20 != -VAR_7)
    FUNC_5(VAR_11, VAR_20);
   goto out_put;
  }
 }

 FUNC_25(&VAR_10->ino_cache_lock);
 if (VAR_10->ino_cache_state != VAR_0) {
  VAR_20 = -1;
  FUNC_26(&VAR_10->ino_cache_lock);
  goto out_put;
 }
 FUNC_26(&VAR_10->ino_cache_lock);

 FUNC_25(&VAR_13->tree_lock);
 VAR_21 = sizeof(struct btrfs_free_space) * VAR_13->free_extents;
 VAR_21 = FUNC_0(VAR_21, VAR_9);
 VAR_21 += VAR_13->total_bitmaps * VAR_9;
 FUNC_26(&VAR_13->tree_lock);


 VAR_21 += 8 * VAR_9;

 VAR_20 = FUNC_12(VAR_15, &VAR_17, 0, VAR_21);
 if (VAR_20)
  goto out_put;

 VAR_20 = FUNC_14(VAR_15, VAR_11, 0, 0, VAR_21,
           VAR_21, VAR_21, &VAR_19);
 if (VAR_20) {
  FUNC_10(FUNC_1(VAR_15), VAR_21);
  FUNC_11(FUNC_1(VAR_15), VAR_21, 1);
  goto out_put;
 }

 VAR_20 = FUNC_19(VAR_10, VAR_11, VAR_14, VAR_15);
 FUNC_10(FUNC_1(VAR_15), VAR_21);
out_put:
 FUNC_23(VAR_15);
out_release:
 FUNC_27(VAR_12, "ino_cache", VAR_11->transid,
          VAR_11->bytes_reserved, 0);
 FUNC_8(VAR_12, VAR_11->block_rsv,
    VAR_11->bytes_reserved);
out:
 VAR_11->block_rsv = VAR_16;
 VAR_11->bytes_reserved = VAR_18;

 FUNC_13(VAR_14);
 FUNC_21(VAR_17);
 return VAR_20;
}
