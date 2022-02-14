
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ function; } ;
struct adapter {int tc_flower_initialized; int flower_tbl; int flower_stats_work; TYPE_1__ flower_stats_timer; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct adapter *VAR_0)
{
 if (!VAR_0->tc_flower_initialized)
  return;

 if (VAR_0->flower_stats_timer.function)
  FUNC_1(&VAR_0->flower_stats_timer);
 FUNC_0(&VAR_0->flower_stats_work);
 FUNC_2(&VAR_0->flower_tbl);
 VAR_0->tc_flower_initialized = 0;
}
