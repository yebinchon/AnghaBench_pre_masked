
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_blocksize_bits; } ;
struct minix_sb_info {unsigned long s_ninodes; unsigned long s_imap_blocks; struct buffer_head** s_imap; } ;
struct inode {unsigned long i_ino; struct super_block* i_sb; } ;
struct buffer_head {int b_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct inode*) ;
 struct minix_sb_info* FUNC_2 (struct super_block*) ;
 int FUNC_3 (unsigned long,int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct inode * VAR_1)
{
 struct super_block *VAR_2 = VAR_1->i_sb;
 struct minix_sb_info *VAR_3 = FUNC_2(VAR_1->i_sb);
 struct buffer_head *VAR_4;
 int VAR_5 = VAR_2->s_blocksize_bits + 3;
 unsigned long VAR_6, VAR_7;

 VAR_6 = VAR_1->i_ino;
 if (VAR_6 < 1 || VAR_6 > VAR_3->s_ninodes) {
  FUNC_4("minix_free_inode: inode 0 or nonexistent inode\n");
  return;
 }
 VAR_7 = VAR_6 & ((1<<VAR_5) - 1);
 VAR_6 >>= VAR_5;
 if (VAR_6 >= VAR_3->s_imap_blocks) {
  FUNC_4("minix_free_inode: nonexistent imap in superblock\n");
  return;
 }

 FUNC_1(VAR_1);

 VAR_4 = VAR_3->s_imap[VAR_6];
 FUNC_5(&VAR_0);
 if (!FUNC_3(VAR_7, VAR_4->b_data))
  FUNC_4("minix_free_inode: bit %lu already cleared\n", VAR_7);
 FUNC_6(&VAR_0);
 FUNC_0(VAR_4);
}
