
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_mru_cache {int grp_count; int grp_time; int lock; int work; scalar_t__ queued; int lists; } ;


 int FUNC_0 (struct xfs_mru_cache*) ;
 int FUNC_1 (struct xfs_mru_cache*,scalar_t__) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(
 struct xfs_mru_cache *VAR_1)
{
 if (!VAR_1 || !VAR_1->lists)
  return;

 FUNC_3(&VAR_1->lock);
 if (VAR_1->queued) {
  FUNC_4(&VAR_1->lock);
  FUNC_2(&VAR_1->work);
  FUNC_3(&VAR_1->lock);
 }

 FUNC_1(VAR_1, VAR_0 + VAR_1->grp_count * VAR_1->grp_time);
 FUNC_0(VAR_1);

 FUNC_4(&VAR_1->lock);
}
