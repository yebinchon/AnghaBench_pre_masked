
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_lag_lower_state_info {scalar_t__ tx_enabled; } ;
struct mlxsw_sp_port {int dummy; } ;


 int FUNC_0 (struct mlxsw_sp_port*) ;
 int FUNC_1 (struct mlxsw_sp_port*) ;

__attribute__((used)) static int FUNC_2(struct mlxsw_sp_port *VAR_0,
         struct netdev_lag_lower_state_info *VAR_1)
{
 if (VAR_1->tx_enabled)
  return FUNC_1(VAR_0);
 else
  return FUNC_0(VAR_0);
}
