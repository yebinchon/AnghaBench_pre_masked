
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_fsblock_t ;
struct xfs_buf {int b_bn; } ;
struct xfs_btree_cur {int bc_nlevels; int* bc_ptrs; int bc_mp; } ;
struct xfs_bitmap {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct xfs_bitmap*,int ,int) ;
 int FUNC_2 (struct xfs_btree_cur*,int,struct xfs_buf**) ;

int
FUNC_3(
 struct xfs_bitmap *VAR_0,
 struct xfs_btree_cur *VAR_1)
{
 struct xfs_buf *VAR_2;
 xfs_fsblock_t VAR_3;
 int VAR_4;
 int VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_1->bc_nlevels && VAR_1->bc_ptrs[VAR_4] == 1; VAR_4++) {
  FUNC_2(VAR_1, VAR_4, &VAR_2);
  if (!VAR_2)
   continue;
  VAR_3 = FUNC_0(VAR_1->bc_mp, VAR_2->b_bn);
  VAR_5 = FUNC_1(VAR_0, VAR_3, 1);
  if (VAR_5)
   return VAR_5;
 }

 return 0;
}
