
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct mlxsw_m {scalar_t__ max_ports; scalar_t__* module_to_port; } ;


 int FUNC_0 (struct mlxsw_m*,size_t,size_t*,size_t*) ;

__attribute__((used)) static int FUNC_1(struct mlxsw_m *VAR_0, u8 VAR_1,
       u8 *VAR_2)
{
 u8 VAR_3, VAR_4;
 int VAR_5;


 VAR_5 = FUNC_0(VAR_0, VAR_1, &VAR_3,
        &VAR_4);
 if (VAR_5)
  return VAR_5;

 if (!VAR_4)
  return 0;

 if (VAR_3 == *VAR_2)
  return 0;
 *VAR_2 = VAR_3;
 VAR_0->module_to_port[VAR_3] = ++VAR_0->max_ports;

 return 0;
}
