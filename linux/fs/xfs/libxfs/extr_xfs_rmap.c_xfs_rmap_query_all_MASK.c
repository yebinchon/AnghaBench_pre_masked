
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_rmap_query_range_fn ;
struct xfs_rmap_query_range_info {int fn; void* priv; } ;
struct xfs_btree_cur {int dummy; } ;


 int FUNC_0 (struct xfs_btree_cur*,int ,struct xfs_rmap_query_range_info*) ;
 int VAR_0 ;

int
FUNC_1(
 struct xfs_btree_cur *VAR_1,
 xfs_rmap_query_range_fn VAR_2,
 void *VAR_3)
{
 struct xfs_rmap_query_range_info VAR_4;

 VAR_4.priv = VAR_3;
 VAR_4.fn = VAR_2;
 return FUNC_0(VAR_1, VAR_0, &VAR_4);
}
