
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_thermal_module {int * parent; int * tzdev; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct mlxsw_thermal_module *VAR_0)
{
 if (VAR_0 && VAR_0->tzdev) {
  FUNC_0(VAR_0->tzdev);
  VAR_0->tzdev = ((void*)0);
  VAR_0->parent = ((void*)0);
 }
}
