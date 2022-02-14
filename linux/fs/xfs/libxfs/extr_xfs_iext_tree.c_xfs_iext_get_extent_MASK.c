
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_ifork {int dummy; } ;
struct xfs_iext_cursor {int dummy; } ;
struct xfs_bmbt_irec {int dummy; } ;


 int FUNC_0 (struct xfs_iext_cursor*) ;
 int FUNC_1 (struct xfs_bmbt_irec*,int ) ;
 int FUNC_2 (struct xfs_ifork*,struct xfs_iext_cursor*) ;

bool
FUNC_3(
 struct xfs_ifork *VAR_0,
 struct xfs_iext_cursor *VAR_1,
 struct xfs_bmbt_irec *VAR_2)
{
 if (!FUNC_2(VAR_0, VAR_1))
  return 0;
 FUNC_1(VAR_2, FUNC_0(VAR_1));
 return 1;
}
