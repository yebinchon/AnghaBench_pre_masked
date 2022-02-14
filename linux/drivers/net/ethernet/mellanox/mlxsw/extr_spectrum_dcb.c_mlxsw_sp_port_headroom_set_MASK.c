
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int mtu; } ;
struct TYPE_2__ {int pfc; struct ieee_ets* ets; } ;
struct mlxsw_sp_port {TYPE_1__ dcb; struct net_device* dev; } ;
struct ieee_ets {int prio_tc; } ;


 int FUNC_0 (struct mlxsw_sp_port*,int ,int ,int,int ) ;
 int FUNC_1 (struct mlxsw_sp_port*) ;
 int FUNC_2 (struct mlxsw_sp_port*,int ,int ) ;
 int FUNC_3 (struct mlxsw_sp_port*,int ) ;
 int FUNC_4 (struct net_device*,char*) ;
 int FUNC_5 (struct net_device*,char*) ;

__attribute__((used)) static int FUNC_6(struct mlxsw_sp_port *VAR_0,
          struct ieee_ets *VAR_1)
{
 bool VAR_2 = FUNC_1(VAR_0);
 struct ieee_ets *VAR_3 = VAR_0->dcb.ets;
 struct net_device *VAR_4 = VAR_0->dev;
 int VAR_5;




 VAR_5 = FUNC_0(VAR_0, VAR_4->mtu,
        VAR_1->prio_tc, VAR_2,
        VAR_0->dcb.pfc);
 if (VAR_5) {
  FUNC_4(VAR_4, "Failed to configure port's headroom\n");
  return VAR_5;
 }

 VAR_5 = FUNC_3(VAR_0, VAR_1->prio_tc);
 if (VAR_5) {
  FUNC_4(VAR_4, "Failed to set PG-priority mapping\n");
  goto err_port_prio_pg_map;
 }

 VAR_5 = FUNC_2(VAR_0, VAR_3->prio_tc,
           VAR_1->prio_tc);
 if (VAR_5)
  FUNC_5(VAR_4, "Failed to remove ununsed PGs\n");

 return 0;

err_port_prio_pg_map:
 FUNC_2(VAR_0, VAR_1->prio_tc, VAR_3->prio_tc);
 return VAR_5;
}
