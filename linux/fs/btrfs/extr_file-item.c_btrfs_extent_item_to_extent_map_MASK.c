
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u64 ;
struct extent_map {int compress_type; int flags; scalar_t__ block_len; void* orig_start; scalar_t__ len; scalar_t__ start; void* block_start; scalar_t__ orig_block_len; void* ram_bytes; int bdev; } ;
struct extent_buffer {int dummy; } ;
struct TYPE_4__ {int objectid; } ;
struct btrfs_root {TYPE_2__ root_key; struct btrfs_fs_info* fs_info; } ;
struct btrfs_path {int* slots; struct extent_buffer** nodes; } ;
struct btrfs_key {scalar_t__ offset; } ;
struct btrfs_inode {struct btrfs_root* root; } ;
struct btrfs_fs_info {int sectorsize; TYPE_1__* fs_devices; } ;
struct btrfs_file_extent_item {int dummy; } ;
struct TYPE_3__ {int latest_bdev; } ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int FUNC_1 (struct btrfs_fs_info*,char*,scalar_t__,int ,scalar_t__,int ) ;
 int FUNC_2 (struct extent_buffer*,struct btrfs_file_extent_item*) ;
 scalar_t__ FUNC_3 (struct extent_buffer*,struct btrfs_file_extent_item*) ;
 scalar_t__ FUNC_4 (struct extent_buffer*,struct btrfs_file_extent_item*) ;
 scalar_t__ FUNC_5 (struct extent_buffer*,struct btrfs_file_extent_item*) ;
 scalar_t__ FUNC_6 (struct extent_buffer*,struct btrfs_file_extent_item*) ;
 void* FUNC_7 (struct extent_buffer*,struct btrfs_file_extent_item*) ;
 scalar_t__ FUNC_8 (struct extent_buffer*,struct btrfs_file_extent_item*) ;
 int FUNC_9 (struct btrfs_inode*) ;
 int FUNC_10 (struct extent_buffer*,struct btrfs_key*,int const) ;
 int FUNC_11 (int ,int *) ;

void FUNC_12(struct btrfs_inode *VAR_8,
         const struct btrfs_path *VAR_9,
         struct btrfs_file_extent_item *VAR_10,
         const bool VAR_11,
         struct extent_map *VAR_12)
{
 struct btrfs_fs_info *VAR_13 = VAR_8->root->fs_info;
 struct btrfs_root *VAR_14 = VAR_8->root;
 struct extent_buffer *VAR_15 = VAR_9->nodes[0];
 const int VAR_16 = VAR_9->slots[0];
 struct btrfs_key VAR_17;
 u64 VAR_18, VAR_19;
 u64 VAR_20;
 u8 VAR_21 = FUNC_8(VAR_15, VAR_10);
 int VAR_22 = FUNC_2(VAR_15, VAR_10);

 VAR_12->bdev = VAR_13->fs_devices->latest_bdev;
 FUNC_10(VAR_15, &VAR_17, VAR_16);
 VAR_18 = VAR_17.offset;

 if (VAR_21 == VAR_3 ||
     VAR_21 == VAR_2) {
  VAR_19 = VAR_18 +
   FUNC_5(VAR_15, VAR_10);
 } else if (VAR_21 == VAR_1) {
  size_t VAR_23;
  VAR_23 = FUNC_7(VAR_15, VAR_10);
  VAR_19 = FUNC_0(VAR_18 + VAR_23,
       VAR_13->sectorsize);
 }

 VAR_12->ram_bytes = FUNC_7(VAR_15, VAR_10);
 if (VAR_21 == VAR_3 ||
     VAR_21 == VAR_2) {
  VAR_12->start = VAR_18;
  VAR_12->len = VAR_19 - VAR_18;
  VAR_12->orig_start = VAR_18 -
   FUNC_6(VAR_15, VAR_10);
  VAR_12->orig_block_len = FUNC_4(VAR_15, VAR_10);
  VAR_20 = FUNC_3(VAR_15, VAR_10);
  if (VAR_20 == 0) {
   VAR_12->block_start = VAR_6;
   return;
  }
  if (VAR_22 != VAR_0) {
   FUNC_11(VAR_4, &VAR_12->flags);
   VAR_12->compress_type = VAR_22;
   VAR_12->block_start = VAR_20;
   VAR_12->block_len = VAR_12->orig_block_len;
  } else {
   VAR_20 += FUNC_6(VAR_15, VAR_10);
   VAR_12->block_start = VAR_20;
   VAR_12->block_len = VAR_12->len;
   if (VAR_21 == VAR_2)
    FUNC_11(VAR_5, &VAR_12->flags);
  }
 } else if (VAR_21 == VAR_1) {
  VAR_12->block_start = VAR_7;
  VAR_12->start = VAR_18;
  VAR_12->len = VAR_19 - VAR_18;




  VAR_12->orig_start = VAR_6;
  VAR_12->block_len = (u64)-1;
  if (!VAR_11 && VAR_22 != VAR_0) {
   FUNC_11(VAR_4, &VAR_12->flags);
   VAR_12->compress_type = VAR_22;
  }
 } else {
  FUNC_1(VAR_13,
     "unknown file extent item type %d, inode %llu, offset %llu, "
     "root %llu", VAR_21, FUNC_9(VAR_8), VAR_18,
     VAR_14->root_key.objectid);
 }
}
