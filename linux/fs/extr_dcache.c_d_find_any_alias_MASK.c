
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_lock; } ;
struct dentry {int dummy; } ;


 struct dentry* FUNC_0 (struct inode*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

struct dentry *FUNC_3(struct inode *VAR_0)
{
 struct dentry *VAR_1;

 FUNC_1(&VAR_0->i_lock);
 VAR_1 = FUNC_0(VAR_0);
 FUNC_2(&VAR_0->i_lock);
 return VAR_1;
}
