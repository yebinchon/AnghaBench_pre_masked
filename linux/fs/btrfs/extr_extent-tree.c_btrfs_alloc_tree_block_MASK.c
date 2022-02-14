
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct extent_buffer {int dummy; } ;
struct btrfs_trans_handle {int dummy; } ;
struct TYPE_2__ {int objectid; } ;
struct btrfs_root {TYPE_1__ root_key; int alloc_bytenr; struct btrfs_fs_info* fs_info; } ;
struct btrfs_ref {int real_root; int member_0; } ;
struct btrfs_key {int offset; int objectid; } ;
struct btrfs_fs_info {scalar_t__ nodesize; } ;
struct btrfs_disk_key {int dummy; } ;
struct btrfs_delayed_extent_op {int update_key; int update_flags; int is_data; int level; int flags_to_set; int key; } ;
typedef struct extent_buffer btrfs_block_rsv ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 struct extent_buffer* FUNC_1 (struct extent_buffer*) ;
 struct extent_buffer* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct extent_buffer*) ;
 int FUNC_4 (struct extent_buffer*) ;
 int VAR_5 ;
 int FUNC_5 (struct btrfs_trans_handle*,struct btrfs_ref*,struct btrfs_delayed_extent_op*,int *,int *) ;
 struct btrfs_delayed_extent_op* FUNC_6 () ;
 int FUNC_7 (struct btrfs_delayed_extent_op*) ;
 int FUNC_8 (struct btrfs_fs_info*,int ,int ,int ) ;
 int FUNC_9 (struct btrfs_fs_info*,int ) ;
 int FUNC_10 (struct btrfs_ref*,int ,int ,int ,int ) ;
 struct extent_buffer* FUNC_11 (struct btrfs_trans_handle*,struct btrfs_root*,int ,int,int ) ;
 int FUNC_12 (struct btrfs_ref*,int,int ) ;
 scalar_t__ FUNC_13 (struct btrfs_fs_info*) ;
 int FUNC_14 (struct btrfs_fs_info*,struct btrfs_ref*) ;
 int FUNC_15 (struct btrfs_root*,scalar_t__,scalar_t__,scalar_t__,int ,int ,struct btrfs_key*,int ,int ) ;
 int FUNC_16 (struct btrfs_fs_info*,struct extent_buffer*,scalar_t__) ;
 struct extent_buffer* FUNC_17 (struct btrfs_trans_handle*,struct btrfs_root*,scalar_t__) ;
 int FUNC_18 (struct extent_buffer*) ;
 int FUNC_19 (int *,struct btrfs_disk_key const*,int) ;
 int FUNC_20 (int *,int ,int) ;

struct extent_buffer *FUNC_21(struct btrfs_trans_handle *VAR_6,
          struct btrfs_root *VAR_7,
          u64 VAR_8, u64 VAR_9,
          const struct btrfs_disk_key *VAR_10,
          int VAR_11, u64 VAR_12,
          u64 VAR_13)
{
 struct btrfs_fs_info *VAR_14 = VAR_7->fs_info;
 struct btrfs_key VAR_15;
 struct btrfs_block_rsv *VAR_16;
 struct extent_buffer *VAR_17;
 struct btrfs_delayed_extent_op *VAR_18;
 struct btrfs_ref VAR_19 = { 0 };
 u64 VAR_20 = 0;
 int VAR_21;
 u32 VAR_22 = VAR_14->nodesize;
 bool VAR_23 = FUNC_9(VAR_14, VAR_5);
 VAR_16 = FUNC_17(VAR_6, VAR_7, VAR_22);
 if (FUNC_3(VAR_16))
  return FUNC_1(VAR_16);

 VAR_21 = FUNC_15(VAR_7, VAR_22, VAR_22, VAR_22,
       VAR_13, VAR_12, &VAR_15, 0, 0);
 if (VAR_21)
  goto out_unuse;

 VAR_17 = FUNC_11(VAR_6, VAR_7, VAR_15.objectid, VAR_11,
        VAR_9);
 if (FUNC_3(VAR_17)) {
  VAR_21 = FUNC_4(VAR_17);
  goto out_free_reserved;
 }

 if (VAR_9 == VAR_3) {
  if (VAR_8 == 0)
   VAR_8 = VAR_15.objectid;
  VAR_20 |= VAR_1;
 } else
  FUNC_0(VAR_8 > 0);

 if (VAR_9 != VAR_2) {
  VAR_18 = FUNC_6();
  if (!VAR_18) {
   VAR_21 = -VAR_4;
   goto out_free_buf;
  }
  if (VAR_10)
   FUNC_19(&VAR_18->key, VAR_10, sizeof(VAR_18->key));
  else
   FUNC_20(&VAR_18->key, 0, sizeof(VAR_18->key));
  VAR_18->flags_to_set = VAR_20;
  VAR_18->update_key = VAR_23 ? 0 : 1;
  VAR_18->update_flags = 1;
  VAR_18->is_data = 0;
  VAR_18->level = VAR_11;

  FUNC_10(&VAR_19, VAR_0,
           VAR_15.objectid, VAR_15.offset, VAR_8);
  VAR_19.real_root = VAR_7->root_key.objectid;
  FUNC_12(&VAR_19, VAR_11, VAR_9);
  FUNC_14(VAR_14, &VAR_19);
  VAR_21 = FUNC_5(VAR_6, &VAR_19,
       VAR_18, ((void*)0), ((void*)0));
  if (VAR_21)
   goto out_free_delayed;
 }
 return VAR_17;

out_free_delayed:
 FUNC_7(VAR_18);
out_free_buf:
 FUNC_18(VAR_17);
out_free_reserved:
 FUNC_8(VAR_14, VAR_15.objectid, VAR_15.offset, 0);
out_unuse:
 FUNC_16(VAR_14, VAR_16, VAR_22);
 return FUNC_2(VAR_21);
}
