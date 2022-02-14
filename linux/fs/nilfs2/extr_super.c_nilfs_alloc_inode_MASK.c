
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct nilfs_inode_info {struct inode vfs_inode; int i_btnode_cache; scalar_t__ i_cno; scalar_t__ i_state; int * i_bh; } ;


 int VAR_0 ;
 struct nilfs_inode_info* FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,struct inode*) ;

struct inode *FUNC_2(struct super_block *VAR_2)
{
 struct nilfs_inode_info *VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_0);
 if (!VAR_3)
  return ((void*)0);
 VAR_3->i_bh = ((void*)0);
 VAR_3->i_state = 0;
 VAR_3->i_cno = 0;
 FUNC_1(&VAR_3->i_btnode_cache, &VAR_3->vfs_inode);
 return &VAR_3->vfs_inode;
}
