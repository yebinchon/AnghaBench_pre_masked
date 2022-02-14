
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {struct inode* d_inode; } ;


 scalar_t__ FUNC_0 (struct inode*) ;

bool FUNC_1(struct dentry *VAR_0)
{
 struct inode *VAR_1 = VAR_0->d_inode;

 return VAR_1 && FUNC_0(VAR_1);
}
