
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_inode {int dummy; } ;
struct iattr {int dummy; } ;
struct dentry {int dummy; } ;


 struct xfs_inode* FUNC_0 (int ) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct xfs_inode*) ;
 int FUNC_3 (struct xfs_inode*,struct iattr*,int ) ;
 int FUNC_4 (struct dentry*,struct iattr*) ;

int
FUNC_5(
 struct dentry *VAR_0,
 struct iattr *VAR_1)
{
 struct xfs_inode *VAR_2 = FUNC_0(FUNC_1(VAR_0));
 int VAR_3;

 FUNC_2(VAR_2);

 VAR_3 = FUNC_4(VAR_0, VAR_1);
 if (VAR_3)
  return VAR_3;
 return FUNC_3(VAR_2, VAR_1, 0);
}
