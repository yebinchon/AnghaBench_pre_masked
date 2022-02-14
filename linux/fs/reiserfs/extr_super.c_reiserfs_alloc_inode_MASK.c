
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct reiserfs_inode_info {struct inode vfs_inode; int i_dquot; int tailpack; int openers; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 struct reiserfs_inode_info* FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;

__attribute__((used)) static struct inode *FUNC_4(struct super_block *VAR_2)
{
 struct reiserfs_inode_info *VAR_3;
 VAR_3 = FUNC_1(VAR_1, VAR_0);
 if (!VAR_3)
  return ((void*)0);
 FUNC_0(&VAR_3->openers, 0);
 FUNC_3(&VAR_3->tailpack);




 return &VAR_3->vfs_inode;
}
