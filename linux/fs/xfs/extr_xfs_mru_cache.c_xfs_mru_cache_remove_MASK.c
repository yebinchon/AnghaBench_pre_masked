
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_mru_cache_elem {int list_node; } ;
struct xfs_mru_cache {int lock; int store; scalar_t__ lists; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 struct xfs_mru_cache_elem* FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

struct xfs_mru_cache_elem *
FUNC_5(
 struct xfs_mru_cache *VAR_0,
 unsigned long VAR_1)
{
 struct xfs_mru_cache_elem *VAR_2;

 FUNC_0(VAR_0 && VAR_0->lists);
 if (!VAR_0 || !VAR_0->lists)
  return ((void*)0);

 FUNC_3(&VAR_0->lock);
 VAR_2 = FUNC_2(&VAR_0->store, VAR_1);
 if (VAR_2)
  FUNC_1(&VAR_2->list_node);
 FUNC_4(&VAR_0->lock);

 return VAR_2;
}
