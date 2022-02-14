
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_mru_cache_elem {unsigned long key; int list_node; } ;
struct xfs_mru_cache {int lock; int store; scalar_t__ lists; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct xfs_mru_cache*,struct xfs_mru_cache_elem*) ;
 int FUNC_3 (int *,unsigned long,struct xfs_mru_cache_elem*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int
FUNC_8(
 struct xfs_mru_cache *VAR_3,
 unsigned long VAR_4,
 struct xfs_mru_cache_elem *VAR_5)
{
 int VAR_6;

 FUNC_0(VAR_3 && VAR_3->lists);
 if (!VAR_3 || !VAR_3->lists)
  return -VAR_0;

 if (FUNC_4(VAR_2))
  return -VAR_1;

 FUNC_1(&VAR_5->list_node);
 VAR_5->key = VAR_4;

 FUNC_6(&VAR_3->lock);
 VAR_6 = FUNC_3(&VAR_3->store, VAR_4, VAR_5);
 FUNC_5();
 if (!VAR_6)
  FUNC_2(VAR_3, VAR_5);
 FUNC_7(&VAR_3->lock);

 return VAR_6;
}
