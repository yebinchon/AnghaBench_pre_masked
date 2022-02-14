
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct buffer_head {scalar_t__ b_data; } ;
struct btrfsic_state {scalar_t__ metablock_size; scalar_t__ datablock_size; int print_mask; scalar_t__ max_superblock_generation; struct btrfsic_block* latest_superblock; int block_hashtable; int all_blocks_list; struct btrfs_fs_info* fs_info; } ;
struct btrfsic_dev_state {int name; } ;
struct btrfsic_block_link {int dummy; } ;
struct btrfsic_block_data_ctx {int dummy; } ;
struct btrfs_disk_key {scalar_t__ offset; int type; } ;
struct btrfsic_block {int dev_bytenr; int logical_bytenr; int is_metadata; int is_superblock; int is_iodone; int mirror_num; scalar_t__ generation; struct btrfs_disk_key disk_key; int all_blocks_node; scalar_t__ never_written; struct btrfsic_dev_state* dev_state; } ;
struct TYPE_2__ {int uuid; } ;
struct btrfs_super_block {TYPE_1__ dev_item; } ;
struct btrfs_fs_info {int dummy; } ;
struct btrfs_device {scalar_t__ commit_total_bytes; int name; int uuid; struct block_device* bdev; } ;
struct block_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct buffer_head* FUNC_0 (struct block_device* const,int,scalar_t__) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct btrfs_fs_info*,char*,struct block_device* const,int ,int,int ,int,int) ;
 int FUNC_3 (struct btrfs_fs_info*,int,scalar_t__) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct btrfs_disk_key*,int ) ;
 int FUNC_6 (struct btrfs_super_block*) ;
 int FUNC_7 (struct btrfs_super_block*) ;
 scalar_t__ FUNC_8 (struct btrfs_super_block*) ;
 int FUNC_9 (struct btrfs_super_block*) ;
 scalar_t__ FUNC_10 (struct btrfs_super_block*) ;
 scalar_t__ FUNC_11 (struct btrfs_super_block*) ;
 int FUNC_12 (struct btrfs_super_block*) ;
 scalar_t__ FUNC_13 (struct btrfs_super_block*) ;
 struct btrfsic_block* FUNC_14 () ;
 int FUNC_15 (struct btrfsic_block*,int *) ;
 struct btrfsic_block* FUNC_16 (struct block_device* const,int,int *) ;
 struct btrfsic_block_link* FUNC_17 (struct btrfsic_state*,struct btrfsic_block_data_ctx*,struct btrfsic_block*,struct btrfsic_block*,scalar_t__) ;
 struct btrfsic_block* FUNC_18 (struct btrfsic_state*,struct btrfsic_block_data_ctx*,char const*,int,int,int ,int,int *) ;
 int FUNC_19 (struct btrfsic_state*,struct btrfsic_block*,int ) ;
 scalar_t__ FUNC_20 (struct btrfsic_state*,int,scalar_t__,struct btrfsic_block_data_ctx*,int) ;
 int FUNC_21 (struct btrfsic_block_data_ctx*) ;
 int FUNC_22 (int *,int *) ;
 scalar_t__ FUNC_23 (int ,int ,int ) ;
 int FUNC_24 (struct btrfs_super_block*,struct btrfs_super_block*,int) ;
 int FUNC_25 (char*,...) ;
 int FUNC_26 (int ) ;

__attribute__((used)) static int FUNC_27(
  struct btrfsic_state *VAR_12,
  struct btrfsic_dev_state *VAR_13,
  struct btrfs_device *VAR_14,
  int VAR_15,
  struct btrfsic_dev_state **VAR_16,
  struct btrfs_super_block *VAR_17)
{
 struct btrfs_fs_info *VAR_18 = VAR_12->fs_info;
 struct btrfs_super_block *VAR_19;
 u64 VAR_20;
 struct buffer_head *VAR_21;
 struct btrfsic_block *VAR_22;
 int VAR_23;
 struct block_device *const VAR_24 = VAR_14->bdev;


 VAR_20 = FUNC_4(VAR_15);
 if (VAR_20 + VAR_9 > VAR_14->commit_total_bytes)
  return -1;
 VAR_21 = FUNC_0(VAR_24, VAR_20 / VAR_4,
       VAR_9);
 if (((void*)0) == VAR_21)
  return -1;
 VAR_19 = (struct btrfs_super_block *)
     (VAR_21->b_data + (VAR_20 & (VAR_4 - 1)));

 if (FUNC_6(VAR_19) != VAR_20 ||
     FUNC_10(VAR_19) != VAR_6 ||
     FUNC_23(VAR_14->uuid, VAR_19->dev_item.uuid, VAR_11) ||
     FUNC_11(VAR_19) != VAR_12->metablock_size ||
     FUNC_13(VAR_19) != VAR_12->datablock_size) {
  FUNC_1(VAR_21);
  return 0;
 }

 VAR_22 =
     FUNC_16(VAR_24,
        VAR_20,
        &VAR_12->block_hashtable);
 if (((void*)0) == VAR_22) {
  VAR_22 = FUNC_14();
  if (((void*)0) == VAR_22) {
   FUNC_25("btrfsic: error, kmalloc failed!\n");
   FUNC_1(VAR_21);
   return -1;
  }

  VAR_22->dev_bytenr = VAR_20;
  VAR_22->dev_state = VAR_13;
  VAR_22->logical_bytenr = VAR_20;
  VAR_22->generation = FUNC_8(VAR_19);
  VAR_22->is_metadata = 1;
  VAR_22->is_superblock = 1;
  VAR_22->is_iodone = 1;
  VAR_22->never_written = 0;
  VAR_22->mirror_num = 1 + VAR_15;
  if (VAR_12->print_mask & VAR_3)
   FUNC_2(VAR_18,
    "new initial S-block (bdev %p, %s) @%llu (%s/%llu/%d)",
         VAR_24,
         FUNC_26(VAR_14->name), VAR_20,
         VAR_13->name, VAR_20,
         VAR_15);
  FUNC_22(&VAR_22->all_blocks_node,
    &VAR_12->all_blocks_list);
  FUNC_15(VAR_22,
         &VAR_12->block_hashtable);
 }


 if (FUNC_8(VAR_19) >
     VAR_12->max_superblock_generation ||
     0 == VAR_12->max_superblock_generation) {
  FUNC_24(VAR_17, VAR_19, sizeof(*VAR_17));
  *VAR_16 = VAR_13;
  VAR_12->max_superblock_generation =
      FUNC_8(VAR_19);
  VAR_12->latest_superblock = VAR_22;
 }

 for (VAR_23 = 0; VAR_23 < 3; VAR_23++) {
  u64 VAR_25;
  int VAR_26;
  int VAR_27;
  const char *VAR_28 = ((void*)0);
  struct btrfs_disk_key VAR_29;

  VAR_29.type = VAR_7;
  VAR_29.offset = 0;
  switch (VAR_23) {
  case 0:
   FUNC_5(&VAR_29,
          VAR_8);
   VAR_28 = "initial root ";
   VAR_25 = FUNC_12(VAR_19);
   break;
  case 1:
   FUNC_5(&VAR_29,
          VAR_5);
   VAR_28 = "initial chunk ";
   VAR_25 = FUNC_7(VAR_19);
   break;
  case 2:
   FUNC_5(&VAR_29,
          VAR_10);
   VAR_28 = "initial log ";
   VAR_25 = FUNC_9(VAR_19);
   if (0 == VAR_25)
    continue;
   break;
  }

  VAR_26 = FUNC_3(VAR_18, VAR_25,
           VAR_12->metablock_size);
  if (VAR_12->print_mask & VAR_2)
   FUNC_25("num_copies(log_bytenr=%llu) = %d\n",
          VAR_25, VAR_26);
  for (VAR_27 = 1; VAR_27 <= VAR_26; VAR_27++) {
   struct btrfsic_block *VAR_30;
   struct btrfsic_block_data_ctx VAR_31;
   struct btrfsic_block_link *VAR_32;

   if (FUNC_20(VAR_12, VAR_25,
           VAR_12->metablock_size,
           &VAR_31,
           VAR_27)) {
    FUNC_25("btrfsic: btrfsic_map_block(bytenr @%llu, mirror %d) failed!\n",
           VAR_25, VAR_27);
    FUNC_1(VAR_21);
    return -1;
   }

   VAR_30 = FUNC_18(
     VAR_12, &VAR_31,
     VAR_28, 1, 1, 0,
     VAR_27, ((void*)0));
   if (((void*)0) == VAR_30) {
    FUNC_21(&VAR_31);
    FUNC_1(VAR_21);
    return -1;
   }

   VAR_30->disk_key = VAR_29;
   VAR_30->generation = VAR_0;
   VAR_32 = FUNC_17(
     VAR_12, &VAR_31,
     VAR_30, VAR_22,
     VAR_0);
   FUNC_21(&VAR_31);
   if (((void*)0) == VAR_32) {
    FUNC_1(VAR_21);
    return -1;
   }
  }
 }
 if (VAR_12->print_mask & VAR_1)
  FUNC_19(VAR_12, VAR_22, 0);

 FUNC_1(VAR_21);
 return 0;
}
