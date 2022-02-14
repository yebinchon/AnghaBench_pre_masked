
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;
struct super_block {int dummy; } ;
struct inode {unsigned int i_blocks; int i_blkbits; struct super_block* i_sb; } ;
struct ext4_inode_info {struct inode vfs_inode; } ;
struct ext4_inode {void* i_blocks_high; void* i_blocks_lo; } ;
typedef int handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (unsigned int) ;
 void* FUNC_1 (unsigned int) ;
 int FUNC_2 (struct inode*,int ) ;
 int FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct inode*,int ) ;

__attribute__((used)) static int FUNC_5(handle_t *VAR_2,
    struct ext4_inode *VAR_3,
    struct ext4_inode_info *VAR_4)
{
 struct inode *VAR_5 = &(VAR_4->vfs_inode);
 u64 VAR_6 = VAR_5->i_blocks;
 struct super_block *VAR_7 = VAR_5->i_sb;

 if (VAR_6 <= ~0U) {




  VAR_3->i_blocks_lo = FUNC_1(VAR_6);
  VAR_3->i_blocks_high = 0;
  FUNC_2(VAR_5, VAR_1);
  return 0;
 }
 if (!FUNC_3(VAR_7))
  return -VAR_0;

 if (VAR_6 <= 0xffffffffffffULL) {




  VAR_3->i_blocks_lo = FUNC_1(VAR_6);
  VAR_3->i_blocks_high = FUNC_0(VAR_6 >> 32);
  FUNC_2(VAR_5, VAR_1);
 } else {
  FUNC_4(VAR_5, VAR_1);

  VAR_6 = VAR_6 >> (VAR_5->i_blkbits - 9);
  VAR_3->i_blocks_lo = FUNC_1(VAR_6);
  VAR_3->i_blocks_high = FUNC_0(VAR_6 >> 32);
 }
 return 0;
}
