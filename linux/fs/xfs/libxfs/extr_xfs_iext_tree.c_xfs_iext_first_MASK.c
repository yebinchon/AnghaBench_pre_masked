
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_ifork {int dummy; } ;
struct xfs_iext_cursor {int leaf; scalar_t__ pos; } ;


 int FUNC_0 (struct xfs_ifork*) ;

void
FUNC_1(
 struct xfs_ifork *VAR_0,
 struct xfs_iext_cursor *VAR_1)
{
 VAR_1->pos = 0;
 VAR_1->leaf = FUNC_0(VAR_0);
}
