
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct btrfsic_state {scalar_t__ max_superblock_generation; int print_mask; struct btrfsic_block* latest_superblock; struct btrfs_fs_info* fs_info; } ;
struct btrfsic_block_link {int dummy; } ;
struct btrfsic_block_data_ctx {int dummy; } ;
struct btrfs_disk_key {int member_0; } ;
struct btrfsic_block {scalar_t__ generation; struct btrfs_disk_key disk_key; int mirror_num; int dev_bytenr; TYPE_1__* dev_state; int logical_bytenr; } ;
struct btrfs_super_block {int dummy; } ;
struct btrfs_fs_info {int dummy; } ;
struct TYPE_2__ {int name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct btrfs_fs_info*,int ,int ) ;
 int FUNC_2 (struct btrfs_disk_key*,int ) ;
 int FUNC_3 (struct btrfs_super_block* const) ;
 void* FUNC_4 (struct btrfs_super_block* const) ;
 int FUNC_5 (struct btrfs_super_block* const) ;
 int FUNC_6 (struct btrfs_super_block* const) ;
 struct btrfsic_block_link* FUNC_7 (struct btrfsic_state*,struct btrfsic_block_data_ctx*,struct btrfsic_block*,struct btrfsic_block* const,scalar_t__) ;
 struct btrfsic_block* FUNC_8 (struct btrfsic_state*,struct btrfsic_block_data_ctx*,char const*,int,int ,int,int,int*) ;
 int FUNC_9 (struct btrfsic_state*,struct btrfsic_block* const,int ) ;
 int FUNC_10 (struct btrfsic_state*) ;
 int FUNC_11 (struct btrfsic_state*,int ,int ,struct btrfsic_block_data_ctx*,int) ;
 int FUNC_12 (struct btrfsic_block_data_ctx*) ;
 int FUNC_13 (char*,...) ;

__attribute__((used)) static int FUNC_14(
  struct btrfsic_state *VAR_10,
  struct btrfsic_block *const VAR_11,
  struct btrfs_super_block *const VAR_12)
{
 struct btrfs_fs_info *VAR_13 = VAR_10->fs_info;
 int VAR_14;

 VAR_11->generation = FUNC_4(VAR_12);
 if (!(VAR_11->generation > VAR_10->max_superblock_generation ||
       0 == VAR_10->max_superblock_generation)) {
  if (VAR_10->print_mask & VAR_3)
   FUNC_13("btrfsic: superblock @%llu (%s/%llu/%d) with old gen %llu <= %llu\n",
          VAR_11->logical_bytenr,
          VAR_11->dev_state->name,
          VAR_11->dev_bytenr, VAR_11->mirror_num,
          FUNC_4(VAR_12),
          VAR_10->max_superblock_generation);
 } else {
  if (VAR_10->print_mask & VAR_3)
   FUNC_13("btrfsic: got new superblock @%llu (%s/%llu/%d) with new gen %llu > %llu\n",
          VAR_11->logical_bytenr,
          VAR_11->dev_state->name,
          VAR_11->dev_bytenr, VAR_11->mirror_num,
          FUNC_4(VAR_12),
          VAR_10->max_superblock_generation);

  VAR_10->max_superblock_generation =
      FUNC_4(VAR_12);
  VAR_10->latest_superblock = VAR_11;
 }

 for (VAR_14 = 0; VAR_14 < 3; VAR_14++) {
  int VAR_15;
  u64 VAR_16;
  struct btrfsic_block *VAR_17;
  struct btrfsic_block_data_ctx VAR_18;
  struct btrfsic_block_link *VAR_19;
  int VAR_20;
  int VAR_21;
  const char *VAR_22 = ((void*)0);
  struct btrfs_disk_key VAR_23 = {0};

  FUNC_2(&VAR_23,
         VAR_6);
  FUNC_2(&VAR_23, 0);

  switch (VAR_14) {
  case 0:
   FUNC_2(&VAR_23,
          VAR_7);
   VAR_22 = "root ";
   VAR_16 = FUNC_6(VAR_12);
   if (VAR_10->print_mask &
       VAR_2)
    FUNC_13("root@%llu\n", VAR_16);
   break;
  case 1:
   FUNC_2(&VAR_23,
          VAR_5);
   VAR_22 = "chunk ";
   VAR_16 = FUNC_3(VAR_12);
   if (VAR_10->print_mask &
       VAR_2)
    FUNC_13("chunk@%llu\n", VAR_16);
   break;
  case 2:
   FUNC_2(&VAR_23,
          VAR_9);
   VAR_22 = "log ";
   VAR_16 = FUNC_5(VAR_12);
   if (0 == VAR_16)
    continue;
   if (VAR_10->print_mask &
       VAR_2)
    FUNC_13("log@%llu\n", VAR_16);
   break;
  }

  VAR_20 = FUNC_1(VAR_13, VAR_16,
           VAR_8);
  if (VAR_10->print_mask & VAR_1)
   FUNC_13("num_copies(log_bytenr=%llu) = %d\n",
          VAR_16, VAR_20);
  for (VAR_21 = 1; VAR_21 <= VAR_20; VAR_21++) {
   int VAR_24;

   if (VAR_10->print_mask & VAR_4)
    FUNC_13("btrfsic_process_written_superblock(mirror_num=%d)\n", VAR_21);
   VAR_15 = FUNC_11(VAR_10, VAR_16,
      VAR_8,
      &VAR_18,
      VAR_21);
   if (VAR_15) {
    FUNC_13("btrfsic: btrfsic_map_block(@%llu, mirror=%d) failed!\n",
           VAR_16, VAR_21);
    return -1;
   }

   VAR_17 = FUNC_8(
     VAR_10,
     &VAR_18,
     VAR_22,
     1, 0, 1,
     VAR_21,
     &VAR_24);
   if (((void*)0) == VAR_17) {
    FUNC_13("btrfsic: error, kmalloc failed!\n");
    FUNC_12(&VAR_18);
    return -1;
   }

   VAR_17->disk_key = VAR_23;
   if (VAR_24)
    VAR_17->generation =
        VAR_0;
   VAR_19 = FUNC_7(
     VAR_10,
     &VAR_18,
     VAR_17,
     VAR_11,
     VAR_0);
   FUNC_12(&VAR_18);
   if (((void*)0) == VAR_19)
    return -1;
  }
 }

 if (FUNC_0(-1 == FUNC_9(VAR_10, VAR_11, 0)))
  FUNC_10(VAR_10);

 return 0;
}
