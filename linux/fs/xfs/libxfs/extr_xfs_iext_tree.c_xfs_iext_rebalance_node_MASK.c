
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_iext_node {struct xfs_iext_node** ptrs; int * keys; } ;


 int VAR_0 ;
 int FUNC_0 (struct xfs_iext_node*,int) ;

__attribute__((used)) static struct xfs_iext_node *
FUNC_1(
 struct xfs_iext_node *VAR_1,
 int *VAR_2,
 struct xfs_iext_node *VAR_3,
 int VAR_4)
{





 if (VAR_4 == 0)
  return VAR_3;

 if (*VAR_2 > 0) {
  struct xfs_iext_node *VAR_5 = VAR_1->ptrs[*VAR_2 - 1];
  int VAR_6 = FUNC_0(VAR_5, 0), VAR_7;

  if (VAR_6 + VAR_4 <= VAR_0) {
   for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
    VAR_5->keys[VAR_6 + VAR_7] = VAR_3->keys[VAR_7];
    VAR_5->ptrs[VAR_6 + VAR_7] = VAR_3->ptrs[VAR_7];
   }
   return VAR_3;
  }
 }

 if (*VAR_2 + 1 < FUNC_0(VAR_1, *VAR_2)) {
  struct xfs_iext_node *VAR_8 = VAR_1->ptrs[*VAR_2 + 1];
  int VAR_9 = FUNC_0(VAR_8, 0), VAR_10;

  if (VAR_4 + VAR_9 <= VAR_0) {





   for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
    VAR_3->keys[VAR_4 + VAR_10] = VAR_8->keys[VAR_10];
    VAR_3->ptrs[VAR_4 + VAR_10] = VAR_8->ptrs[VAR_10];
   }

   ++*VAR_2;
   return VAR_8;
  }
 }

 return ((void*)0);
}
