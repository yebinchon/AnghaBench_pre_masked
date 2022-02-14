
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union xfs_btree_rec {int dummy; } xfs_btree_rec ;
struct xfs_buf {int dummy; } ;
struct xfs_btree_cur {int* bc_ptrs; } ;
struct xfs_btree_block {int dummy; } ;


 int FUNC_0 (struct xfs_btree_cur*,struct xfs_btree_block*,int ,struct xfs_buf*) ;
 struct xfs_btree_block* FUNC_1 (struct xfs_btree_cur*,int ,struct xfs_buf**) ;
 int FUNC_2 (struct xfs_btree_block*) ;
 union xfs_btree_rec* FUNC_3 (struct xfs_btree_cur*,int,struct xfs_btree_block*) ;

int
FUNC_4(
 struct xfs_btree_cur *VAR_0,
 union xfs_btree_rec **VAR_1,
 int *VAR_2)
{
 struct xfs_btree_block *VAR_3;
 struct xfs_buf *VAR_4;
 int VAR_5;




 VAR_5 = VAR_0->bc_ptrs[0];
 VAR_3 = FUNC_1(VAR_0, 0, &VAR_4);
 if (VAR_5 > FUNC_2(VAR_3) || VAR_5 <= 0) {
  *VAR_2 = 0;
  return 0;
 }




 *VAR_1 = FUNC_3(VAR_0, VAR_5, VAR_3);
 *VAR_2 = 1;
 return 0;
}
