
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_btree_query_range_fn ;
typedef union xfs_btree_key {int dummy; } xfs_btree_key ;
struct xfs_btree_cur {union xfs_btree_key bc_rec; } ;
typedef int low_key ;
typedef int high_key ;


 int FUNC_0 (union xfs_btree_key*,int,int) ;
 int FUNC_1 (struct xfs_btree_cur*,union xfs_btree_key*,union xfs_btree_key*,int ,void*) ;

int
FUNC_2(
 struct xfs_btree_cur *VAR_0,
 xfs_btree_query_range_fn VAR_1,
 void *VAR_2)
{
 union xfs_btree_key VAR_3;
 union xfs_btree_key VAR_4;

 FUNC_0(&VAR_0->bc_rec, 0, sizeof(VAR_0->bc_rec));
 FUNC_0(&VAR_3, 0, sizeof(VAR_3));
 FUNC_0(&VAR_4, 0xFF, sizeof(VAR_4));

 return FUNC_1(VAR_0, &VAR_3, &VAR_4, VAR_1, VAR_2);
}
