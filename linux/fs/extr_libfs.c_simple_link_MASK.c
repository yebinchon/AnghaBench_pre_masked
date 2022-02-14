
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mtime; int i_ctime; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (struct inode*) ;
 struct inode* FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*,struct inode*) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;

int FUNC_6(struct dentry *VAR_0, struct inode *VAR_1, struct dentry *VAR_2)
{
 struct inode *VAR_3 = FUNC_1(VAR_0);

 VAR_3->i_ctime = VAR_1->i_ctime = VAR_1->i_mtime = FUNC_0(VAR_3);
 FUNC_5(VAR_3);
 FUNC_4(VAR_3);
 FUNC_3(VAR_2);
 FUNC_2(VAR_2, VAR_3);
 return 0;
}
