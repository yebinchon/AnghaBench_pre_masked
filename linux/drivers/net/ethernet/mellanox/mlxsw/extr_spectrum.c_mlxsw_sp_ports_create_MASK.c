
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlxsw_sp_port {int dummy; } ;
struct mlxsw_sp {int* ports; int* port_to_module; int core; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*) ;
 int* FUNC_1 (unsigned int,int,int ) ;
 int* FUNC_2 (size_t,int ) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (struct mlxsw_sp*) ;
 int FUNC_5 (struct mlxsw_sp*) ;
 int FUNC_6 (struct mlxsw_sp*,int,int,int,int,int) ;
 scalar_t__ FUNC_7 (struct mlxsw_sp*,int) ;
 int FUNC_8 (struct mlxsw_sp*,int,int*,int*,int*) ;
 int FUNC_9 (struct mlxsw_sp*,int) ;

__attribute__((used)) static int FUNC_10(struct mlxsw_sp *VAR_2)
{
 unsigned int VAR_3 = FUNC_3(VAR_2->core);
 u8 VAR_4, VAR_5, VAR_6;
 size_t VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_7 = sizeof(struct mlxsw_sp_port *) * VAR_3;
 VAR_2->ports = FUNC_2(VAR_7, VAR_1);
 if (!VAR_2->ports)
  return -VAR_0;

 VAR_2->port_to_module = FUNC_1(VAR_3, sizeof(int),
       VAR_1);
 if (!VAR_2->port_to_module) {
  VAR_9 = -VAR_0;
  goto err_port_to_module_alloc;
 }

 VAR_9 = FUNC_4(VAR_2);
 if (VAR_9)
  goto err_cpu_port_create;

 for (VAR_8 = 1; VAR_8 < VAR_3; VAR_8++) {

  VAR_2->port_to_module[VAR_8] = -1;

  VAR_9 = FUNC_8(VAR_2, VAR_8, &VAR_4,
          &VAR_5, &VAR_6);
  if (VAR_9)
   goto err_port_module_info_get;
  if (!VAR_5)
   continue;
  VAR_2->port_to_module[VAR_8] = VAR_4;
  VAR_9 = FUNC_6(VAR_2, VAR_8, 0,
        VAR_4, VAR_5, VAR_6);
  if (VAR_9)
   goto err_port_create;
 }
 return 0;

err_port_create:
err_port_module_info_get:
 for (VAR_8--; VAR_8 >= 1; VAR_8--)
  if (FUNC_7(VAR_2, VAR_8))
   FUNC_9(VAR_2, VAR_8);
 FUNC_5(VAR_2);
err_cpu_port_create:
 FUNC_0(VAR_2->port_to_module);
err_port_to_module_alloc:
 FUNC_0(VAR_2->ports);
 return VAR_9;
}
