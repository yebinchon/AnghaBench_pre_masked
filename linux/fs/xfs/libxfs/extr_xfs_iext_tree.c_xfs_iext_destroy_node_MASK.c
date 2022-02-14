
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_iext_node {scalar_t__* keys; struct xfs_iext_node** ptrs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct xfs_iext_node*) ;

__attribute__((used)) static void
FUNC_1(
 struct xfs_iext_node *VAR_2,
 int VAR_3)
{
 int VAR_4;

 if (VAR_3 > 1) {
  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
   if (VAR_2->keys[VAR_4] == VAR_1)
    break;
   FUNC_1(VAR_2->ptrs[VAR_4], VAR_3 - 1);
  }
 }

 FUNC_0(VAR_2);
}
