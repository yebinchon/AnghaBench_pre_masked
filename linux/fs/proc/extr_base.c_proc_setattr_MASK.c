
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct iattr {int ia_valid; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct inode* FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,struct iattr*) ;
 int FUNC_3 (struct dentry*,struct iattr*) ;

int FUNC_4(struct dentry *VAR_2, struct iattr *VAR_3)
{
 int VAR_4;
 struct inode *VAR_5 = FUNC_0(VAR_2);

 if (VAR_3->ia_valid & VAR_0)
  return -VAR_1;

 VAR_4 = FUNC_3(VAR_2, VAR_3);
 if (VAR_4)
  return VAR_4;

 FUNC_2(VAR_5, VAR_3);
 FUNC_1(VAR_5);
 return 0;
}
