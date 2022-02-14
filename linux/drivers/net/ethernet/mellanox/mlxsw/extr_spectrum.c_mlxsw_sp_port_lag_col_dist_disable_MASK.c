
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_port {int lag_id; } ;


 int FUNC_0 (struct mlxsw_sp_port*,int ) ;
 int FUNC_1 (struct mlxsw_sp_port*,int ) ;
 int FUNC_2 (struct mlxsw_sp_port*,int ) ;

__attribute__((used)) static int
FUNC_3(struct mlxsw_sp_port *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_2(VAR_0,
         VAR_0->lag_id);
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_0(VAR_0,
         VAR_0->lag_id);
 if (VAR_1)
  goto err_col_port_disable;

 return 0;

err_col_port_disable:
 FUNC_1(VAR_0, VAR_0->lag_id);
 return VAR_1;
}
