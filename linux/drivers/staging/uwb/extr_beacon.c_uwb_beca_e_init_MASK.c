
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_beca_e {int rssi_stats; int lqe_stats; int refcnt; int mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct uwb_beca_e *VAR_0)
{
 FUNC_1(&VAR_0->mutex);
 FUNC_0(&VAR_0->refcnt);
 FUNC_2(&VAR_0->lqe_stats);
 FUNC_2(&VAR_0->rssi_stats);
}
