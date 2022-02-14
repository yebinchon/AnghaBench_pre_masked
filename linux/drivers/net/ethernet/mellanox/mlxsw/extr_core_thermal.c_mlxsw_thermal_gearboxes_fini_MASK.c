
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_thermal {int tz_gearbox_num; int * tz_gearbox_arr; int core; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct mlxsw_thermal *VAR_0)
{
 int VAR_1;

 if (!FUNC_1(VAR_0->core))
  return;

 for (VAR_1 = VAR_0->tz_gearbox_num - 1; VAR_1 >= 0; VAR_1--)
  FUNC_2(&VAR_0->tz_gearbox_arr[VAR_1]);
 FUNC_0(VAR_0->tz_gearbox_arr);
}
