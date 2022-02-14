
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union xfs_btree_irec {int dummy; } xfs_btree_irec ;
struct xfs_btree_cur {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xfs_btree_cur*,union xfs_btree_irec*,union xfs_btree_irec*,int *,int *) ;

int
FUNC_1(
 struct xfs_btree_cur *VAR_2,
 union xfs_btree_irec *VAR_3,
 union xfs_btree_irec *VAR_4,
 bool *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4,
   &VAR_1, ((void*)0));
 if (VAR_6 == -VAR_0) {
  *VAR_5 = 1;
  return 0;
 }
 *VAR_5 = 0;
 return VAR_6;
}
