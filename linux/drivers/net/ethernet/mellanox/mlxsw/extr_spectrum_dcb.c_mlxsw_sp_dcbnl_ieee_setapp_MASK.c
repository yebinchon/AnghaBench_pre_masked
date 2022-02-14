
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlxsw_sp_port {int dummy; } ;
struct dcb_app {int dummy; } ;


 int FUNC_0 (struct net_device*,struct dcb_app*) ;
 int FUNC_1 (struct net_device*,struct dcb_app*) ;
 int FUNC_2 (struct net_device*,struct dcb_app*) ;
 int FUNC_3 (struct mlxsw_sp_port*) ;
 struct mlxsw_sp_port* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_0,
          struct dcb_app *VAR_1)
{
 struct mlxsw_sp_port *VAR_2 = FUNC_4(VAR_0);
 int VAR_3;

 VAR_3 = FUNC_2(VAR_0, VAR_1);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3)
  goto err_update;

 return 0;

err_update:
 FUNC_0(VAR_0, VAR_1);
 return VAR_3;
}
