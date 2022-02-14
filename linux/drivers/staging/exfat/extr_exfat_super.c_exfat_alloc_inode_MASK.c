
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct exfat_inode_info {struct inode vfs_inode; int truncate_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct exfat_inode_info* FUNC_1 (int ,int ) ;

__attribute__((used)) static struct inode *FUNC_2(struct super_block *VAR_2)
{
 struct exfat_inode_info *VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_0);
 if (!VAR_3)
  return ((void*)0);

 FUNC_0(&VAR_3->truncate_lock);

 return &VAR_3->vfs_inode;
}
