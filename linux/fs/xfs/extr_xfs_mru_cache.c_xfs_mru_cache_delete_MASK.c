
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_mru_cache_elem {int dummy; } ;
struct xfs_mru_cache {int data; int (* free_func ) (int ,struct xfs_mru_cache_elem*) ;} ;


 int FUNC_0 (int ,struct xfs_mru_cache_elem*) ;
 struct xfs_mru_cache_elem* FUNC_1 (struct xfs_mru_cache*,unsigned long) ;

void
FUNC_2(
 struct xfs_mru_cache *VAR_0,
 unsigned long VAR_1)
{
 struct xfs_mru_cache_elem *VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2)
  VAR_0->free_func(VAR_0->data, VAR_2);
}
