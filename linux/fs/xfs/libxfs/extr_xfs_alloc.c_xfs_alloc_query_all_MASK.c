
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_alloc_query_range_fn ;
struct xfs_btree_cur {scalar_t__ bc_btnum; } ;
struct xfs_alloc_query_range_info {int fn; void* priv; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct xfs_btree_cur*,int ,struct xfs_alloc_query_range_info*) ;

int
FUNC_2(
 struct xfs_btree_cur *VAR_2,
 xfs_alloc_query_range_fn VAR_3,
 void *VAR_4)
{
 struct xfs_alloc_query_range_info VAR_5;

 FUNC_0(VAR_2->bc_btnum == VAR_0);
 VAR_5.priv = VAR_4;
 VAR_5.fn = VAR_3;
 return FUNC_1(VAR_2, VAR_1, &VAR_5);
}
