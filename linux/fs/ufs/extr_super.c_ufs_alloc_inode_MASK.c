
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ufs_inode_info {struct inode vfs_inode; int truncate_mutex; int meta_lock; } ;
struct super_block {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,int) ;
 struct ufs_inode_info* FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;

__attribute__((used)) static struct inode *FUNC_4(struct super_block *VAR_2)
{
 struct ufs_inode_info *VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_0);
 if (!VAR_3)
  return ((void*)0);

 FUNC_0(&VAR_3->vfs_inode, 1);
 FUNC_3(&VAR_3->meta_lock);
 FUNC_2(&VAR_3->truncate_mutex);
 return &VAR_3->vfs_inode;
}
