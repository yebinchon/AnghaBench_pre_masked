
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int ets; } ;
struct mlxsw_sp_port {TYPE_1__ dcb; } ;
struct ieee_ets {int dummy; } ;


 int FUNC_0 (struct ieee_ets*,int ,int) ;
 struct mlxsw_sp_port* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0,
          struct ieee_ets *VAR_1)
{
 struct mlxsw_sp_port *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_1, VAR_2->dcb.ets, sizeof(*VAR_1));

 return 0;
}
