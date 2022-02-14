
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_inode {int dummy; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 struct inode* FUNC_0 (struct xfs_inode*) ;
 struct xfs_inode* FUNC_1 (struct inode*) ;
 struct dentry* FUNC_2 (struct inode*) ;
 int FUNC_3 (struct dentry*) ;
 struct dentry* FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct dentry*) ;
 struct inode* FUNC_6 (int ) ;

__attribute__((used)) static struct xfs_inode *
FUNC_7(
 struct xfs_inode *VAR_0)
{
 struct inode *VAR_1 = FUNC_0(VAR_0), *VAR_2 = ((void*)0);
 struct dentry *VAR_3, *VAR_4;

 VAR_3 = FUNC_2(VAR_1);
 if (!VAR_3)
  goto out;

 VAR_4 = FUNC_4(VAR_3);
 if (!VAR_4)
  goto out_dput;

 VAR_2 = FUNC_6(FUNC_3(VAR_4));
 FUNC_5(VAR_4);

out_dput:
 FUNC_5(VAR_3);
out:
 return VAR_2 ? FUNC_1(VAR_2) : ((void*)0);
}
