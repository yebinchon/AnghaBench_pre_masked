
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {struct dentry* d_parent; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct dentry*) ;
 struct inode* FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct dentry*) ;
 int FUNC_8 (struct inode*,struct dentry*) ;

void FUNC_9(struct dentry *VAR_0)
{
 struct inode *VAR_1 = FUNC_3(VAR_0->d_parent);
 struct inode *VAR_2 = FUNC_3(VAR_0);
 int VAR_3;

 FUNC_5(VAR_1);
 FUNC_7(VAR_0);
 FUNC_1(VAR_2);
 FUNC_4(VAR_0);
 VAR_3 = FUNC_8(VAR_1, VAR_0);
 FUNC_0(VAR_3);
 FUNC_2(VAR_0);
 FUNC_6(VAR_1);
}
