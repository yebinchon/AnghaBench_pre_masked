
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {scalar_t__ ns_sbsize; scalar_t__ ns_inode_size; scalar_t__ ns_blocksize; scalar_t__ ns_blocks_per_segment; int ns_r_segments_percentage; scalar_t__ ns_crc_seed; int ns_sb; int ns_first_data_block; scalar_t__ ns_first_ino; } ;
struct nilfs_super_block {int s_crc_seed; int s_nsegments; int s_r_segments_percentage; int s_first_data_block; int s_blocks_per_segment; int s_first_ino; int s_inode_size; int s_bytes; int s_minor_rev_level; int s_rev_level; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,char*,scalar_t__,...) ;
 int FUNC_4 (struct the_nilfs*,int ) ;

__attribute__((used)) static int FUNC_5(struct the_nilfs *VAR_8,
       struct nilfs_super_block *VAR_9)
{
 if (FUNC_1(VAR_9->s_rev_level) < VAR_6) {
  FUNC_3(VAR_8->ns_sb, VAR_2,
     "unsupported revision (superblock rev.=%d.%d, current rev.=%d.%d). Please check the version of mkfs.nilfs(2).",
     FUNC_1(VAR_9->s_rev_level),
     FUNC_0(VAR_9->s_minor_rev_level),
     VAR_3, VAR_4);
  return -VAR_1;
 }
 VAR_8->ns_sbsize = FUNC_0(VAR_9->s_bytes);
 if (VAR_8->ns_sbsize > VAR_0)
  return -VAR_1;

 VAR_8->ns_inode_size = FUNC_0(VAR_9->s_inode_size);
 if (VAR_8->ns_inode_size > VAR_8->ns_blocksize) {
  FUNC_3(VAR_8->ns_sb, VAR_2,
     "too large inode size: %d bytes",
     VAR_8->ns_inode_size);
  return -VAR_1;
 } else if (VAR_8->ns_inode_size < VAR_5) {
  FUNC_3(VAR_8->ns_sb, VAR_2,
     "too small inode size: %d bytes",
     VAR_8->ns_inode_size);
  return -VAR_1;
 }

 VAR_8->ns_first_ino = FUNC_1(VAR_9->s_first_ino);

 VAR_8->ns_blocks_per_segment = FUNC_1(VAR_9->s_blocks_per_segment);
 if (VAR_8->ns_blocks_per_segment < VAR_7) {
  FUNC_3(VAR_8->ns_sb, VAR_2,
     "too short segment: %lu blocks",
     VAR_8->ns_blocks_per_segment);
  return -VAR_1;
 }

 VAR_8->ns_first_data_block = FUNC_2(VAR_9->s_first_data_block);
 VAR_8->ns_r_segments_percentage =
  FUNC_1(VAR_9->s_r_segments_percentage);
 if (VAR_8->ns_r_segments_percentage < 1 ||
     VAR_8->ns_r_segments_percentage > 99) {
  FUNC_3(VAR_8->ns_sb, VAR_2,
     "invalid reserved segments percentage: %lu",
     VAR_8->ns_r_segments_percentage);
  return -VAR_1;
 }

 FUNC_4(VAR_8, FUNC_2(VAR_9->s_nsegments));
 VAR_8->ns_crc_seed = FUNC_1(VAR_9->s_crc_seed);
 return 0;
}
