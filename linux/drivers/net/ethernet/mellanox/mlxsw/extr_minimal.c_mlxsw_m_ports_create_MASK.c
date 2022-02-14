
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct mlxsw_m {int* ports; int* module_to_port; int max_ports; int core; } ;


 int VAR_0 ;
 int VAR_1 ;
 int* FUNC_0 (unsigned int,int,int ) ;
 int FUNC_1 (int*) ;
 int* FUNC_2 (unsigned int,int,int ) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (struct mlxsw_m*,int,int) ;
 int FUNC_5 (struct mlxsw_m*,int,unsigned int*) ;
 int FUNC_6 (struct mlxsw_m*,int) ;
 int FUNC_7 (struct mlxsw_m*,int) ;

__attribute__((used)) static int FUNC_8(struct mlxsw_m *VAR_2)
{
 unsigned int VAR_3 = FUNC_3(VAR_2->core);
 u8 VAR_4 = VAR_3;
 int VAR_5;
 int VAR_6;

 VAR_2->ports = FUNC_0(VAR_3, sizeof(*VAR_2->ports),
     VAR_1);
 if (!VAR_2->ports)
  return -VAR_0;

 VAR_2->module_to_port = FUNC_2(VAR_3, sizeof(int),
      VAR_1);
 if (!VAR_2->module_to_port) {
  VAR_6 = -VAR_0;
  goto err_module_to_port_alloc;
 }


 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
  VAR_2->module_to_port[VAR_5] = -1;


 for (VAR_5 = 1; VAR_5 < VAR_3; VAR_5++) {
  VAR_6 = FUNC_5(VAR_2, VAR_5, &VAR_4);
  if (VAR_6)
   goto err_module_to_port_map;
 }


 for (VAR_5 = 0; VAR_5 < VAR_2->max_ports; VAR_5++) {
  if (VAR_2->module_to_port[VAR_5] > 0) {
   VAR_6 = FUNC_4(VAR_2,
        VAR_2->module_to_port[VAR_5],
        VAR_5);
   if (VAR_6)
    goto err_module_to_port_create;
  }
 }

 return 0;

err_module_to_port_create:
 for (VAR_5--; VAR_5 >= 0; VAR_5--) {
  if (VAR_2->module_to_port[VAR_5] > 0)
   FUNC_7(VAR_2,
         VAR_2->module_to_port[VAR_5]);
 }
 VAR_5 = VAR_3;
err_module_to_port_map:
 for (VAR_5--; VAR_5 > 0; VAR_5--)
  FUNC_6(VAR_2, VAR_5);
 FUNC_1(VAR_2->module_to_port);
err_module_to_port_alloc:
 FUNC_1(VAR_2->ports);
 return VAR_6;
}
