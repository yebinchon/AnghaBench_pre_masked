
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {unsigned int s_blocksize; } ;
struct inode {unsigned int i_size; scalar_t__ i_ino; struct super_block* i_sb; } ;
struct ext4_dir_entry_2 {int rec_len; int inode; int name; } ;
struct buffer_head {scalar_t__ b_data; int b_size; } ;


 int DIRENT_HTREE ;
 int EITHER ;
 unsigned int EXT4_BLOCK_SIZE_BITS (struct super_block*) ;
 unsigned int EXT4_DIR_REC_LEN (int) ;
 int EXT4_ERROR_INODE (struct inode*,char*) ;
 scalar_t__ IS_ERR (struct buffer_head*) ;
 int brelse (struct buffer_head*) ;
 int empty_inline_dir (struct inode*,int*) ;
 scalar_t__ ext4_check_dir_entry (struct inode*,int *,struct ext4_dir_entry_2*,struct buffer_head*,scalar_t__,int ,unsigned int) ;
 scalar_t__ ext4_has_inline_data (struct inode*) ;
 struct ext4_dir_entry_2* ext4_next_entry (struct ext4_dir_entry_2*,unsigned int) ;
 struct buffer_head* ext4_read_dirblock (struct inode*,unsigned int,int ) ;
 unsigned int ext4_rec_len_from_disk (int ,unsigned int) ;
 int ext4_warning_inode (struct inode*,char*) ;
 scalar_t__ le32_to_cpu (int ) ;
 scalar_t__ strcmp (char*,int ) ;

bool ext4_empty_dir(struct inode *inode)
{
 unsigned int offset;
 struct buffer_head *bh;
 struct ext4_dir_entry_2 *de, *de1;
 struct super_block *sb;

 if (ext4_has_inline_data(inode)) {
  int has_inline_data = 1;
  int ret;

  ret = empty_inline_dir(inode, &has_inline_data);
  if (has_inline_data)
   return ret;
 }

 sb = inode->i_sb;
 if (inode->i_size < EXT4_DIR_REC_LEN(1) + EXT4_DIR_REC_LEN(2)) {
  EXT4_ERROR_INODE(inode, "invalid size");
  return 1;
 }



 bh = ext4_read_dirblock(inode, 0, DIRENT_HTREE);
 if (IS_ERR(bh))
  return 1;

 de = (struct ext4_dir_entry_2 *) bh->b_data;
 de1 = ext4_next_entry(de, sb->s_blocksize);
 if (le32_to_cpu(de->inode) != inode->i_ino ||
   le32_to_cpu(de1->inode) == 0 ||
   strcmp(".", de->name) || strcmp("..", de1->name)) {
  ext4_warning_inode(inode, "directory missing '.' and/or '..'");
  brelse(bh);
  return 1;
 }
 offset = ext4_rec_len_from_disk(de->rec_len, sb->s_blocksize) +
   ext4_rec_len_from_disk(de1->rec_len, sb->s_blocksize);
 de = ext4_next_entry(de1, sb->s_blocksize);
 while (offset < inode->i_size) {
  if ((void *) de >= (void *) (bh->b_data+sb->s_blocksize)) {
   unsigned int lblock;
   brelse(bh);
   lblock = offset >> EXT4_BLOCK_SIZE_BITS(sb);
   bh = ext4_read_dirblock(inode, lblock, EITHER);
   if (bh == ((void*)0)) {
    offset += sb->s_blocksize;
    continue;
   }
   if (IS_ERR(bh))
    return 1;
   de = (struct ext4_dir_entry_2 *) bh->b_data;
  }
  if (ext4_check_dir_entry(inode, ((void*)0), de, bh,
      bh->b_data, bh->b_size, offset)) {
   de = (struct ext4_dir_entry_2 *)(bh->b_data +
        sb->s_blocksize);
   offset = (offset | (sb->s_blocksize - 1)) + 1;
   continue;
  }
  if (le32_to_cpu(de->inode)) {
   brelse(bh);
   return 0;
  }
  offset += ext4_rec_len_from_disk(de->rec_len, sb->s_blocksize);
  de = ext4_next_entry(de, sb->s_blocksize);
 }
 brelse(bh);
 return 1;
}
