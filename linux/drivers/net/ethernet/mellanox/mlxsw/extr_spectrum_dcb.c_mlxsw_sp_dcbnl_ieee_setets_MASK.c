
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_3__ {TYPE_2__* ets; } ;
struct mlxsw_sp_port {TYPE_1__ dcb; } ;
struct ieee_ets {int dummy; } ;
struct TYPE_4__ {int ets_cap; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlxsw_sp_port*,struct ieee_ets*) ;
 int FUNC_1 (TYPE_2__*,struct ieee_ets*,int) ;
 int FUNC_2 (struct mlxsw_sp_port*,struct ieee_ets*) ;
 struct mlxsw_sp_port* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1,
          struct ieee_ets *VAR_2)
{
 struct mlxsw_sp_port *VAR_3 = FUNC_3(VAR_1);
 int VAR_4;

 VAR_4 = FUNC_2(VAR_3, VAR_2);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_2);
 if (VAR_4)
  return VAR_4;

 FUNC_1(VAR_3->dcb.ets, VAR_2, sizeof(*VAR_2));
 VAR_3->dcb.ets->ets_cap = VAR_0;

 return 0;
}
