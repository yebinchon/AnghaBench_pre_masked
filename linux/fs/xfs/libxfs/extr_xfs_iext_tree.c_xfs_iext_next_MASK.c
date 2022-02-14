
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_ifork {int if_height; } ;
struct xfs_iext_cursor {scalar_t__ pos; TYPE_1__* leaf; } ;
struct TYPE_2__ {struct TYPE_2__* next; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct xfs_ifork*,struct xfs_iext_cursor*) ;
 scalar_t__ FUNC_2 (struct xfs_ifork*) ;
 int FUNC_3 (struct xfs_ifork*,struct xfs_iext_cursor*) ;

void
FUNC_4(
 struct xfs_ifork *VAR_1,
 struct xfs_iext_cursor *VAR_2)
{
 if (!VAR_2->leaf) {
  FUNC_0(VAR_2->pos <= 0 || VAR_2->pos >= VAR_0);
  FUNC_1(VAR_1, VAR_2);
  return;
 }

 FUNC_0(VAR_2->pos >= 0);
 FUNC_0(VAR_2->pos < FUNC_2(VAR_1));

 VAR_2->pos++;
 if (VAR_1->if_height > 1 && !FUNC_3(VAR_1, VAR_2) &&
     VAR_2->leaf->next) {
  VAR_2->leaf = VAR_2->leaf->next;
  VAR_2->pos = 0;
 }
}
