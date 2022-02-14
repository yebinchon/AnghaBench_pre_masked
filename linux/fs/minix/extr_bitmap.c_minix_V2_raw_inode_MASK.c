
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_blocksize; int s_id; } ;
struct minix_sb_info {int s_ninodes; int s_imap_blocks; int s_zmap_blocks; } ;
struct minix2_inode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int ino_t ;


 struct minix_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (char*,...) ;
 struct buffer_head* FUNC_2 (struct super_block*,int) ;

struct minix2_inode *
FUNC_3(struct super_block *VAR_0, ino_t VAR_1, struct buffer_head **VAR_2)
{
 int VAR_3;
 struct minix_sb_info *VAR_4 = FUNC_0(VAR_0);
 struct minix2_inode *VAR_5;
 int VAR_6 = VAR_0->s_blocksize / sizeof(struct minix2_inode);

 *VAR_2 = ((void*)0);
 if (!VAR_1 || VAR_1 > VAR_4->s_ninodes) {
  FUNC_1("Bad inode number on dev %s: %ld is out of range\n",
         VAR_0->s_id, (long)VAR_1);
  return ((void*)0);
 }
 VAR_1--;
 VAR_3 = 2 + VAR_4->s_imap_blocks + VAR_4->s_zmap_blocks +
   VAR_1 / VAR_6;
 *VAR_2 = FUNC_2(VAR_0, VAR_3);
 if (!*VAR_2) {
  FUNC_1("Unable to read inode block\n");
  return ((void*)0);
 }
 VAR_5 = (void *)(*VAR_2)->b_data;
 return VAR_5 + VAR_1 % VAR_6;
}
