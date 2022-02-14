
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_btree_cur {int bc_flags; int bc_nlevels; scalar_t__* bc_ptrs; } ;


 int VAR_0 ;
 int FUNC_0 (struct xfs_btree_cur*,int,int*) ;
 int FUNC_1 (struct xfs_btree_cur*,int,int*) ;
 int FUNC_2 (struct xfs_btree_cur*,int ) ;

int
FUNC_3(
 struct xfs_btree_cur *VAR_1,
 int *VAR_2)
{
 int VAR_3;
 int VAR_4;
 int VAR_5;
 bool VAR_6 = 0;







 for (VAR_4 = 0, VAR_5 = 2; VAR_5 == 2; VAR_4++) {
  VAR_3 = FUNC_1(VAR_1, VAR_4, &VAR_5);
  if (VAR_3)
   goto error0;
  if (VAR_5 == 2)
   VAR_6 = 1;
 }





 if (VAR_6 && (VAR_1->bc_flags & VAR_0)) {
  VAR_3 = FUNC_2(VAR_1, 0);
  if (VAR_3)
   goto error0;
 }

 if (VAR_5 == 0) {
  for (VAR_4 = 1; VAR_4 < VAR_1->bc_nlevels; VAR_4++) {
   if (VAR_1->bc_ptrs[VAR_4] == 0) {
    VAR_3 = FUNC_0(VAR_1, VAR_4, &VAR_5);
    if (VAR_3)
     goto error0;
    break;
   }
  }
 }

 *VAR_2 = VAR_5;
 return 0;
error0:
 return VAR_3;
}
