
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_ifork {int dummy; } ;
struct xfs_iext_cursor {int pos; TYPE_1__* leaf; } ;
struct TYPE_2__ {int * recs; } ;


 TYPE_1__* FUNC_0 (struct xfs_ifork*) ;
 int FUNC_1 (struct xfs_ifork*) ;
 scalar_t__ FUNC_2 (int *) ;

void
FUNC_3(
 struct xfs_ifork *VAR_0,
 struct xfs_iext_cursor *VAR_1)
{
 int VAR_2;

 VAR_1->leaf = FUNC_0(VAR_0);
 if (!VAR_1->leaf) {
  VAR_1->pos = 0;
  return;
 }

 for (VAR_2 = 1; VAR_2 < FUNC_1(VAR_0); VAR_2++) {
  if (FUNC_2(&VAR_1->leaf->recs[VAR_2]))
   break;
 }
 VAR_1->pos = VAR_2 - 1;
}
