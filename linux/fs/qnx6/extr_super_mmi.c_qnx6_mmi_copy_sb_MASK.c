
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qnx6_super_block {int Longfile; int Bitmap; int Inode; int sb_free_blocks; int sb_num_blocks; int sb_free_inodes; int sb_num_inodes; int sb_blocksize; int sb_serial; int sb_checksum; int sb_magic; } ;
struct qnx6_mmi_super_block {int Longfile; int Bitmap; int Inode; int sb_free_blocks; int sb_num_blocks; int sb_free_inodes; int sb_num_inodes; int sb_blocksize; int sb_serial; int sb_checksum; int sb_magic; } ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static void FUNC_1(struct qnx6_super_block *VAR_0,
  struct qnx6_mmi_super_block *VAR_1)
{
 VAR_0->sb_magic = VAR_1->sb_magic;
 VAR_0->sb_checksum = VAR_1->sb_checksum;
 VAR_0->sb_serial = VAR_1->sb_serial;
 VAR_0->sb_blocksize = VAR_1->sb_blocksize;
 VAR_0->sb_num_inodes = VAR_1->sb_num_inodes;
 VAR_0->sb_free_inodes = VAR_1->sb_free_inodes;
 VAR_0->sb_num_blocks = VAR_1->sb_num_blocks;
 VAR_0->sb_free_blocks = VAR_1->sb_free_blocks;


 FUNC_0(&VAR_0->Inode, &VAR_1->Inode, sizeof(VAR_1->Inode));
 FUNC_0(&VAR_0->Bitmap, &VAR_1->Bitmap, sizeof(VAR_1->Bitmap));
 FUNC_0(&VAR_0->Longfile, &VAR_1->Longfile, sizeof(VAR_1->Longfile));
}
