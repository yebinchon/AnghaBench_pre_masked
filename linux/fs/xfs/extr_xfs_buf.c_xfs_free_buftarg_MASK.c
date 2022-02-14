
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_buftarg {int bt_lru; int bt_io_count; int bt_shrinker; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct xfs_buftarg*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct xfs_buftarg*) ;

void
FUNC_7(
 struct xfs_buftarg *VAR_0)
{
 FUNC_5(&VAR_0->bt_shrinker);
 FUNC_0(FUNC_4(&VAR_0->bt_io_count) == 0);
 FUNC_3(&VAR_0->bt_io_count);
 FUNC_2(&VAR_0->bt_lru);

 FUNC_6(VAR_0);

 FUNC_1(VAR_0);
}
