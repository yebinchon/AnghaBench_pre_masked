
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct ext2_inode_info {struct inode vfs_inode; int i_dquot; int * i_block_alloc_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*,int) ;
 struct ext2_inode_info* FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static struct inode *FUNC_3(struct super_block *VAR_2)
{
 struct ext2_inode_info *VAR_3;
 VAR_3 = FUNC_1(VAR_1, VAR_0);
 if (!VAR_3)
  return ((void*)0);
 VAR_3->i_block_alloc_info = ((void*)0);
 FUNC_0(&VAR_3->vfs_inode, 1);




 return &VAR_3->vfs_inode;
}
