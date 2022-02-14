
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_mru_cache_elem {int list_node; } ;
struct xfs_mru_cache {int lock; int store; scalar_t__ lists; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct xfs_mru_cache*,struct xfs_mru_cache_elem*) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 struct xfs_mru_cache_elem* FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

struct xfs_mru_cache_elem *
FUNC_7(
 struct xfs_mru_cache *VAR_1,
 unsigned long VAR_2)
{
 struct xfs_mru_cache_elem *VAR_3;

 FUNC_0(VAR_1 && VAR_1->lists);
 if (!VAR_1 || !VAR_1->lists)
  return ((void*)0);

 FUNC_5(&VAR_1->lock);
 VAR_3 = FUNC_4(&VAR_1->store, VAR_2);
 if (VAR_3) {
  FUNC_3(&VAR_3->list_node);
  FUNC_2(VAR_1, VAR_3);
  FUNC_1(VAR_0);
 } else
  FUNC_6(&VAR_1->lock);

 return VAR_3;
}
