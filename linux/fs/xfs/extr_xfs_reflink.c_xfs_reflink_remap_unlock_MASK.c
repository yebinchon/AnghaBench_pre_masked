
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_inode {int dummy; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;


 struct xfs_inode* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 struct inode* FUNC_1 (struct file*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct xfs_inode*,int ) ;

void
FUNC_4(
 struct file *VAR_1,
 struct file *VAR_2)
{
 struct inode *VAR_3 = FUNC_1(VAR_1);
 struct xfs_inode *VAR_4 = FUNC_0(VAR_3);
 struct inode *VAR_5 = FUNC_1(VAR_2);
 struct xfs_inode *VAR_6 = FUNC_0(VAR_5);
 bool VAR_7 = (VAR_3 == VAR_5);

 FUNC_3(VAR_6, VAR_0);
 if (!VAR_7)
  FUNC_3(VAR_4, VAR_0);
 FUNC_2(VAR_5);
 if (!VAR_7)
  FUNC_2(VAR_3);
}
