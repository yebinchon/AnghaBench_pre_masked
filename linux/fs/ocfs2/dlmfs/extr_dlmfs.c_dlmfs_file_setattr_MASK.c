
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct iattr {int ia_valid; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 struct inode* FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,struct iattr*) ;
 int FUNC_3 (struct dentry*,struct iattr*) ;

__attribute__((used)) static int FUNC_4(struct dentry *VAR_1, struct iattr *VAR_2)
{
 int VAR_3;
 struct inode *VAR_4 = FUNC_0(VAR_1);

 VAR_2->ia_valid &= ~VAR_0;
 VAR_3 = FUNC_3(VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3;

 FUNC_2(VAR_4, VAR_2);
 FUNC_1(VAR_4);
 return 0;
}
