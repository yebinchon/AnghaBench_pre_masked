
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 struct inode* FUNC_0 (struct dentry*) ;
 struct dentry* FUNC_1 (struct inode*) ;

struct inode *FUNC_2(struct inode *VAR_0)
{
 struct dentry *VAR_1 = FUNC_1(VAR_0);

 return VAR_1 ? FUNC_0(VAR_1) : ((void*)0);
}
