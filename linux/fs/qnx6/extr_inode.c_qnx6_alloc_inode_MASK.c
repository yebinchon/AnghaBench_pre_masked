
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct qnx6_inode_info {struct inode vfs_inode; } ;


 int VAR_0 ;
 struct qnx6_inode_info* FUNC_0 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static struct inode *FUNC_1(struct super_block *VAR_2)
{
 struct qnx6_inode_info *VAR_3;
 VAR_3 = FUNC_0(VAR_1, VAR_0);
 if (!VAR_3)
  return ((void*)0);
 return &VAR_3->vfs_inode;
}
