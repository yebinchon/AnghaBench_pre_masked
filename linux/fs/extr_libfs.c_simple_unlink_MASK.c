
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mtime; int i_ctime; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (struct inode*) ;
 struct inode* FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct inode*) ;

int FUNC_4(struct inode *VAR_0, struct dentry *VAR_1)
{
 struct inode *VAR_2 = FUNC_1(VAR_1);

 VAR_2->i_ctime = VAR_0->i_ctime = VAR_0->i_mtime = FUNC_0(VAR_2);
 FUNC_3(VAR_2);
 FUNC_2(VAR_1);
 return 0;
}
