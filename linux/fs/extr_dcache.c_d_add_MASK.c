
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_lock; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (struct dentry*,struct inode*) ;
 int FUNC_1 (struct dentry*,struct inode*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct dentry *VAR_0, struct inode *VAR_1)
{
 if (VAR_1) {
  FUNC_1(VAR_0, VAR_1);
  FUNC_2(&VAR_1->i_lock);
 }
 FUNC_0(VAR_0, VAR_1);
}
