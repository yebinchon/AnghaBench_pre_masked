
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct btrfsic_state {int print_mask; int block_link_hashtable; int metablock_size; struct btrfs_fs_info* fs_info; } ;
struct btrfsic_block_link {int ref_cnt; int parent_generation; int node_ref_from; int node_ref_to; struct btrfsic_block* block_ref_from; struct btrfsic_block* block_ref_to; } ;
struct btrfsic_block_data_ctx {scalar_t__ len; int dev_bytenr; TYPE_1__* dev; } ;
struct btrfs_disk_key {int dummy; } ;
struct btrfsic_block {int logical_bytenr; int mirror_num; int ref_from_list; int ref_to_list; struct btrfs_disk_key disk_key; int is_metadata; int generation; } ;
struct btrfs_fs_info {int dummy; } ;
struct TYPE_2__ {int bdev; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct btrfs_fs_info*,int,int ) ;
 struct btrfsic_block_link* FUNC_1 () ;
 int FUNC_2 (struct btrfsic_block_link*,int *) ;
 struct btrfsic_block_link* FUNC_3 (int ,int ,int ,int ,int *) ;
 struct btrfsic_block* FUNC_4 (struct btrfsic_state*,struct btrfsic_block_data_ctx*,char*,int,int,int,int,int*) ;
 int FUNC_5 (struct btrfsic_state*,struct btrfsic_block*) ;
 int FUNC_6 (struct btrfsic_state*,int,int ,struct btrfsic_block_data_ctx*,int) ;
 int FUNC_7 (struct btrfsic_state*,struct btrfsic_block_link*) ;
 int FUNC_8 (struct btrfsic_state*,struct btrfsic_block_data_ctx*) ;
 int FUNC_9 (struct btrfsic_block_data_ctx*) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (char*,...) ;

__attribute__((used)) static int FUNC_12(
  struct btrfsic_state *VAR_3,
  struct btrfsic_block *VAR_4,
  struct btrfsic_block_data_ctx *VAR_5,
  u64 VAR_6,
  int VAR_7,
  struct btrfsic_block_data_ctx *VAR_8,
  struct btrfsic_block **VAR_9,
  int VAR_10,
  int *VAR_11, int *VAR_12,
  struct btrfs_disk_key *VAR_13,
  u64 VAR_14)
{
 struct btrfs_fs_info *VAR_15 = VAR_3->fs_info;
 struct btrfsic_block *VAR_16 = ((void*)0);
 int VAR_17;
 struct btrfsic_block_link *VAR_18;
 int VAR_19;
 int VAR_20;

 *VAR_9 = ((void*)0);
 if (0 == *VAR_11) {
  *VAR_11 = FUNC_0(VAR_15, VAR_6,
      VAR_3->metablock_size);
  if (VAR_3->print_mask & VAR_1)
   FUNC_11("num_copies(log_bytenr=%llu) = %d\n",
          VAR_6, *VAR_11);
  *VAR_12 = 1;
 }

 if (*VAR_12 > *VAR_11)
  return 0;

 if (VAR_3->print_mask & VAR_2)
  FUNC_11("btrfsic_create_link_to_next_block(mirror_num=%d)\n",
         *VAR_12);
 VAR_17 = FUNC_6(VAR_3, VAR_6,
    VAR_3->metablock_size,
    VAR_8, *VAR_12);
 if (VAR_17) {
  FUNC_11("btrfsic: btrfsic_map_block(@%llu, mirror=%d) failed!\n",
         VAR_6, *VAR_12);
  FUNC_9(VAR_8);
  *VAR_9 = ((void*)0);
  return -1;
 }

 VAR_16 = FUNC_4(VAR_3,
       VAR_8, "referenced ",
       1, VAR_10,
       !VAR_10,
       *VAR_12,
       &VAR_20);
 if (((void*)0) == VAR_16) {
  FUNC_9(VAR_8);
  *VAR_9 = ((void*)0);
  return -1;
 }
 if (VAR_20) {
  VAR_18 = ((void*)0);
  VAR_16->generation = VAR_0;
 } else {
  if (VAR_3->print_mask & VAR_2) {
   if (VAR_16->logical_bytenr != VAR_6 &&
       !(!VAR_16->is_metadata &&
         0 == VAR_16->logical_bytenr))
    FUNC_11("Referenced block @%llu (%s/%llu/%d) found in hash table, %c, bytenr mismatch (!= stored %llu).\n",
           VAR_6, VAR_8->dev->name,
           VAR_8->dev_bytenr, *VAR_12,
           FUNC_5(VAR_3,
             VAR_16),
           VAR_16->logical_bytenr);
   else
    FUNC_11("Referenced block @%llu (%s/%llu/%d) found in hash table, %c.\n",
           VAR_6, VAR_8->dev->name,
           VAR_8->dev_bytenr, *VAR_12,
           FUNC_5(VAR_3,
             VAR_16));
  }
  VAR_16->logical_bytenr = VAR_6;

  VAR_16->mirror_num = *VAR_12;
  VAR_18 = FUNC_3(
    VAR_8->dev->bdev,
    VAR_8->dev_bytenr,
    VAR_5->dev->bdev,
    VAR_5->dev_bytenr,
    &VAR_3->block_link_hashtable);
 }

 VAR_16->disk_key = *VAR_13;
 if (((void*)0) == VAR_18) {
  VAR_18 = FUNC_1();
  if (((void*)0) == VAR_18) {
   FUNC_11("btrfsic: error, kmalloc failed!\n");
   FUNC_9(VAR_8);
   *VAR_9 = ((void*)0);
   return -1;
  }

  VAR_19 = 1;
  VAR_18->block_ref_to = VAR_16;
  VAR_18->block_ref_from = VAR_4;
  VAR_18->ref_cnt = 1;
  VAR_18->parent_generation = VAR_14;

  if (VAR_3->print_mask & VAR_2)
   FUNC_7(VAR_3, VAR_18);

  FUNC_10(&VAR_18->node_ref_to, &VAR_4->ref_to_list);
  FUNC_10(&VAR_18->node_ref_from, &VAR_16->ref_from_list);

  FUNC_2(VAR_18,
       &VAR_3->block_link_hashtable);
 } else {
  VAR_19 = 0;
  if (0 == VAR_7) {
   VAR_18->ref_cnt++;
   VAR_18->parent_generation = VAR_14;
   if (VAR_3->print_mask & VAR_2)
    FUNC_7(VAR_3, VAR_18);
  }
 }

 if (VAR_7 > 0 && VAR_19) {
  VAR_17 = FUNC_8(VAR_3, VAR_8);
  if (VAR_17 < (int)VAR_8->len) {
   FUNC_11("btrfsic: read block @logical %llu failed!\n",
          VAR_6);
   FUNC_9(VAR_8);
   *VAR_9 = ((void*)0);
   return -1;
  }

  *VAR_9 = VAR_16;
 } else {
  *VAR_9 = ((void*)0);
 }
 (*VAR_12)++;

 return 0;
}
