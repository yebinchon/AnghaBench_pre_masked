
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_trans {int dummy; } ;
struct xfs_inode {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct xfs_trans*,struct xfs_inode*,int ) ;
 int FUNC_1 (struct xfs_trans*,struct xfs_inode*,int ) ;
 int FUNC_2 (struct xfs_trans**) ;

int
FUNC_3(
 struct xfs_trans **VAR_1,
 struct xfs_inode *VAR_2)
{
 int VAR_3;

 FUNC_1(*VAR_1, VAR_2, VAR_0);
 VAR_3 = FUNC_2(VAR_1);
 if (!VAR_3)
  FUNC_0(*VAR_1, VAR_2, 0);
 return VAR_3;
}
