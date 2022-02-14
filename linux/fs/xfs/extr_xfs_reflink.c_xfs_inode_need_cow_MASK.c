
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_inode {int dummy; } ;
struct xfs_bmbt_irec {int br_startblock; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct xfs_inode*) ;
 int FUNC_2 (struct xfs_inode*,struct xfs_bmbt_irec*,int*) ;

bool
FUNC_3(
 struct xfs_inode *VAR_0,
 struct xfs_bmbt_irec *VAR_1,
 bool *VAR_2)
{

 if (FUNC_1(VAR_0) &&
     !FUNC_0(VAR_1->br_startblock)) {
  *VAR_2 = 1;
  return 0;
 }


 return FUNC_2(VAR_0, VAR_1, VAR_2);
}
