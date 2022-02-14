
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct super_block {int dummy; } ;
struct inode {int i_ino; struct super_block* i_sb; } ;
struct hfsplus_sb_info {int total_blocks; int free_blocks; TYPE_1__* alloc_file; } ;
struct hfsplus_inode_info {scalar_t__ alloc_blocks; scalar_t__ first_blocks; scalar_t__ clump_blocks; scalar_t__ cached_start; int extent_state; scalar_t__ cached_blocks; TYPE_2__* cached_extents; int extents_lock; TYPE_2__* first_extents; } ;
typedef int hfsplus_extent_rec ;
struct TYPE_7__ {void* block_count; void* start_block; } ;
struct TYPE_6__ {int i_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct hfsplus_inode_info* FUNC_0 (struct inode*) ;
 int VAR_5 ;
 struct hfsplus_sb_info* FUNC_1 (struct super_block*) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (TYPE_2__*,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (struct super_block*,scalar_t__,scalar_t__,scalar_t__*) ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (struct inode*,scalar_t__) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*,int ) ;
 int FUNC_11 (TYPE_2__*,int ,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (char*,int,int,int) ;
 int FUNC_15 (struct super_block*,scalar_t__,scalar_t__,int ) ;

int FUNC_16(struct inode *VAR_6, bool VAR_7)
{
 struct super_block *VAR_8 = VAR_6->i_sb;
 struct hfsplus_sb_info *VAR_9 = FUNC_1(VAR_8);
 struct hfsplus_inode_info *VAR_10 = FUNC_0(VAR_6);
 u32 VAR_11, VAR_12, VAR_13;
 int VAR_14;

 if (VAR_9->alloc_file->i_size * 8 <
     VAR_9->total_blocks - VAR_9->free_blocks + 8) {

  FUNC_14("extend alloc file! (%llu,%u,%u)\n",
         VAR_9->alloc_file->i_size * 8,
         VAR_9->total_blocks, VAR_9->free_blocks);
  return -VAR_0;
 }

 FUNC_12(&VAR_10->extents_lock);
 if (VAR_10->alloc_blocks == VAR_10->first_blocks)
  VAR_13 = FUNC_7(VAR_10->first_extents);
 else {
  VAR_14 = FUNC_8(VAR_6, VAR_10->alloc_blocks);
  if (VAR_14)
   goto out;
  VAR_13 = FUNC_7(VAR_10->cached_extents);
 }

 VAR_12 = VAR_10->clump_blocks;
 VAR_11 = FUNC_5(VAR_8, VAR_9->total_blocks, VAR_13, &VAR_12);
 if (VAR_11 >= VAR_9->total_blocks) {
  VAR_11 = FUNC_5(VAR_8, VAR_13, 0, &VAR_12);
  if (VAR_11 >= VAR_13) {
   VAR_14 = -VAR_0;
   goto out;
  }
 }

 if (VAR_7) {
  VAR_14 = FUNC_15(VAR_8, VAR_11, VAR_12, VAR_2);
  if (VAR_14)
   goto out;
 }

 FUNC_3(VAR_1, "extend %lu: %u,%u\n", VAR_6->i_ino, VAR_11, VAR_12);

 if (VAR_10->alloc_blocks <= VAR_10->first_blocks) {
  if (!VAR_10->first_blocks) {
   FUNC_3(VAR_1, "first extents\n");

   VAR_10->first_extents[0].start_block = FUNC_2(VAR_11);
   VAR_10->first_extents[0].block_count = FUNC_2(VAR_12);
   VAR_14 = 0;
  } else {

   VAR_14 = FUNC_4(VAR_10->first_extents,
       VAR_10->alloc_blocks,
       VAR_11, VAR_12);
   if (VAR_14 == -VAR_0)
    goto insert_extent;
  }
  if (!VAR_14) {
   FUNC_6(VAR_10->first_extents);
   VAR_10->first_blocks += VAR_12;
  }
 } else {
  VAR_14 = FUNC_4(VAR_10->cached_extents,
      VAR_10->alloc_blocks - VAR_10->cached_start,
      VAR_11, VAR_12);
  if (!VAR_14) {
   FUNC_6(VAR_10->cached_extents);
   VAR_10->extent_state |= VAR_3;
   VAR_10->cached_blocks += VAR_12;
  } else if (VAR_14 == -VAR_0)
   goto insert_extent;
 }
out:
 if (!VAR_14) {
  VAR_10->alloc_blocks += VAR_12;
  FUNC_13(&VAR_10->extents_lock);
  FUNC_10(VAR_6, VAR_5);
  return 0;
 }
 FUNC_13(&VAR_10->extents_lock);
 return VAR_14;

insert_extent:
 FUNC_3(VAR_1, "insert new extent\n");
 VAR_14 = FUNC_9(VAR_6);
 if (VAR_14)
  goto out;

 FUNC_11(VAR_10->cached_extents, 0, sizeof(hfsplus_extent_rec));
 VAR_10->cached_extents[0].start_block = FUNC_2(VAR_11);
 VAR_10->cached_extents[0].block_count = FUNC_2(VAR_12);
 FUNC_6(VAR_10->cached_extents);
 VAR_10->extent_state |= VAR_3 | VAR_4;
 VAR_10->cached_start = VAR_10->alloc_blocks;
 VAR_10->cached_blocks = VAR_12;

 VAR_14 = 0;
 goto out;
}
