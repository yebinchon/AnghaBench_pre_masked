
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_thermal {int * tz_module_arr; int core; } ;


 int FUNC_0 (int *) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct mlxsw_thermal *VAR_0)
{
 unsigned int VAR_1 = FUNC_1(VAR_0->core);
 int VAR_2;

 if (!FUNC_2(VAR_0->core))
  return;

 for (VAR_2 = VAR_1 - 1; VAR_2 >= 0; VAR_2--)
  FUNC_3(&VAR_0->tz_module_arr[VAR_2]);
 FUNC_0(VAR_0->tz_module_arr);
}
