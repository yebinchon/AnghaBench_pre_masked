
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_m {int max_ports; scalar_t__* module_to_port; scalar_t__* ports; } ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (struct mlxsw_m*,int) ;
 int FUNC_2 (struct mlxsw_m*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct mlxsw_m *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->max_ports; VAR_1++) {
  if (VAR_0->module_to_port[VAR_1] > 0) {
   FUNC_2(VAR_0,
         VAR_0->module_to_port[VAR_1]);
   FUNC_1(VAR_0, VAR_1);
  }
 }

 FUNC_0(VAR_0->module_to_port);
 FUNC_0(VAR_0->ports);
}
