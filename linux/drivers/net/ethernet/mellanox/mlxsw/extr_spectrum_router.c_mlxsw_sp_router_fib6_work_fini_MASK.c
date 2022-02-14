
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_fib6_event_work {int nrt6; int * rt_arr; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct mlxsw_sp_fib6_event_work *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->nrt6; VAR_1++)
  FUNC_1(VAR_0->rt_arr[VAR_1]);
 FUNC_0(VAR_0->rt_arr);
}
