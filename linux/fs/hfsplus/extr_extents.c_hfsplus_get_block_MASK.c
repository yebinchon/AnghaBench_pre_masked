
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct super_block {scalar_t__ s_blocksize; } ;
struct inode {scalar_t__ i_ino; struct super_block* i_sb; } ;
struct hfsplus_sb_info {int fs_shift; int blockoffset; } ;
struct hfsplus_inode_info {int fs_blocks; int alloc_blocks; int first_blocks; int extent_state; int cached_start; int phys_size; int extents_lock; int cached_extents; int first_extents; } ;
struct buffer_head {int dummy; } ;
typedef int sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct hfsplus_inode_info* FUNC_0 (struct inode*) ;
 struct hfsplus_sb_info* FUNC_1 (struct super_block*) ;
 int FUNC_2 (int ,char*,scalar_t__,long long,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct inode*,int) ;
 int FUNC_5 (struct inode*,int) ;
 int FUNC_6 (struct inode*,scalar_t__) ;
 int FUNC_7 (struct buffer_head*,struct super_block*,int) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct buffer_head*) ;

int FUNC_12(struct inode *VAR_4, sector_t VAR_5,
        struct buffer_head *VAR_6, int VAR_7)
{
 struct super_block *VAR_8 = VAR_4->i_sb;
 struct hfsplus_sb_info *VAR_9 = FUNC_1(VAR_8);
 struct hfsplus_inode_info *VAR_10 = FUNC_0(VAR_4);
 int VAR_11 = -VAR_0;
 u32 VAR_12, VAR_13, VAR_14;
 sector_t VAR_15;
 int VAR_16 = 0;


 VAR_12 = VAR_5 >> VAR_9->fs_shift;

 if (VAR_5 >= VAR_10->fs_blocks) {
  if (!VAR_7)
   return 0;
  if (VAR_5 > VAR_10->fs_blocks)
   return -VAR_0;
  if (VAR_12 >= VAR_10->alloc_blocks) {
   VAR_11 = FUNC_5(VAR_4, 0);
   if (VAR_11)
    return VAR_11;
  }
 } else
  VAR_7 = 0;

 if (VAR_12 < VAR_10->first_blocks) {
  VAR_13 = FUNC_3(VAR_10->first_extents, VAR_12);
  goto done;
 }

 if (VAR_4->i_ino == VAR_2)
  return -VAR_0;

 FUNC_9(&VAR_10->extents_lock);






 VAR_16 = (VAR_10->extent_state & VAR_3);
 VAR_11 = FUNC_4(VAR_4, VAR_12);
 if (VAR_11) {
  FUNC_10(&VAR_10->extents_lock);
  return -VAR_0;
 }
 VAR_13 = FUNC_3(VAR_10->cached_extents,
     VAR_12 - VAR_10->cached_start);
 FUNC_10(&VAR_10->extents_lock);

done:
 FUNC_2(VAR_1, "get_block(%lu): %llu - %u\n",
  VAR_4->i_ino, (long long)VAR_5, VAR_13);

 VAR_14 = (1 << VAR_9->fs_shift) - 1;
 VAR_15 = ((sector_t)VAR_13 << VAR_9->fs_shift) +
    VAR_9->blockoffset + (VAR_5 & VAR_14);
 FUNC_7(VAR_6, VAR_8, VAR_15);

 if (VAR_7) {
  FUNC_11(VAR_6);
  VAR_10->phys_size += VAR_8->s_blocksize;
  VAR_10->fs_blocks++;
  FUNC_6(VAR_4, VAR_8->s_blocksize);
 }
 if (VAR_7 || VAR_16)
  FUNC_8(VAR_4);
 return 0;
}
