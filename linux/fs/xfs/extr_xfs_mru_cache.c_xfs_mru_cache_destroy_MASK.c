
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_mru_cache {struct xfs_mru_cache* lists; } ;


 int FUNC_0 (struct xfs_mru_cache*) ;
 int FUNC_1 (struct xfs_mru_cache*) ;

void
FUNC_2(
 struct xfs_mru_cache *VAR_0)
{
 if (!VAR_0 || !VAR_0->lists)
  return;

 FUNC_1(VAR_0);

 FUNC_0(VAR_0->lists);
 FUNC_0(VAR_0);
}
