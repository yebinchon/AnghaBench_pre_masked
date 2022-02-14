
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int n_route_sets; TYPE_1__* routes; } ;
struct TYPE_4__ {int dest; } ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 TYPE_1__* FUNC_0 (int ,TYPE_2__*) ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_1 (int,char*) ;

void FUNC_2(void)
{
 FUNC_1(!FUNC_0(VAR_1, &VAR_0),
   "check for nonexistent route_set\n");
 FUNC_1(FUNC_0(VAR_2, &VAR_0) == &VAR_0.routes[0],
   "find first route_set\n");
 FUNC_1(FUNC_0(VAR_3, &VAR_0) == &VAR_0.routes[VAR_4],
   "find ith route_set\n");
 FUNC_1(FUNC_0(VAR_5, &VAR_0) ==
   &VAR_0.routes[VAR_6],
   "find no_val route_set in spite of missing values\n");
 FUNC_1(FUNC_0(VAR_0.routes[VAR_0.n_route_sets - 1].dest, &VAR_0) ==
   &VAR_0.routes[VAR_0.n_route_sets - 1],
   "find last route_set\n");
}
