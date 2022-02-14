
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct super_block {int dummy; } ;
struct inode {int i_blkbits; struct super_block* i_sb; } ;
struct ext4_inode_info {struct inode vfs_inode; } ;
struct ext4_inode {int i_blocks_lo; int i_blocks_high; } ;
typedef int blkcnt_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct super_block*) ;
 scalar_t__ FUNC_1 (struct inode*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static blkcnt_t FUNC_4(struct ext4_inode *VAR_1,
      struct ext4_inode_info *VAR_2)
{
 blkcnt_t VAR_3 ;
 struct inode *VAR_4 = &(VAR_2->vfs_inode);
 struct super_block *VAR_5 = VAR_4->i_sb;

 if (FUNC_0(VAR_5)) {

  VAR_3 = ((u64)FUNC_2(VAR_1->i_blocks_high)) << 32 |
     FUNC_3(VAR_1->i_blocks_lo);
  if (FUNC_1(VAR_4, VAR_0)) {

   return VAR_3 << (VAR_4->i_blkbits - 9);
  } else {
   return VAR_3;
  }
 } else {
  return FUNC_3(VAR_1->i_blocks_lo);
 }
}
