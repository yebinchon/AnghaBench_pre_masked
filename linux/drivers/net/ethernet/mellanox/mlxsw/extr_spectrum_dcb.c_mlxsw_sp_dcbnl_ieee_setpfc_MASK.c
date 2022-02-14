
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int mtu; } ;
struct TYPE_4__ {struct ieee_pfc* pfc; TYPE_1__* ets; } ;
struct mlxsw_sp_port {TYPE_2__ dcb; } ;
struct ieee_pfc {int pfc_cap; scalar_t__ pfc_en; } ;
struct TYPE_3__ {int prio_tc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlxsw_sp_port*,int ,int ,int,struct ieee_pfc*) ;
 int FUNC_1 (struct ieee_pfc*,struct ieee_pfc*,int) ;
 int FUNC_2 (struct mlxsw_sp_port*) ;
 int FUNC_3 (struct mlxsw_sp_port*,struct ieee_pfc*) ;
 int FUNC_4 (struct net_device*,char*) ;
 struct mlxsw_sp_port* FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_2,
          struct ieee_pfc *VAR_3)
{
 struct mlxsw_sp_port *VAR_4 = FUNC_5(VAR_2);
 bool VAR_5 = FUNC_2(VAR_4);
 int VAR_6;

 if (VAR_5 && VAR_3->pfc_en) {
  FUNC_4(VAR_2, "PAUSE frames already enabled on port\n");
  return -VAR_0;
 }

 VAR_6 = FUNC_0(VAR_4, VAR_2->mtu,
        VAR_4->dcb.ets->prio_tc,
        VAR_5, VAR_3);
 if (VAR_6) {
  FUNC_4(VAR_2, "Failed to configure port's headroom for PFC\n");
  return VAR_6;
 }

 VAR_6 = FUNC_3(VAR_4, VAR_3);
 if (VAR_6) {
  FUNC_4(VAR_2, "Failed to configure PFC\n");
  goto err_port_pfc_set;
 }

 FUNC_1(VAR_4->dcb.pfc, VAR_3, sizeof(*VAR_3));
 VAR_4->dcb.pfc->pfc_cap = VAR_1;

 return 0;

err_port_pfc_set:
 FUNC_0(VAR_4, VAR_2->mtu,
         VAR_4->dcb.ets->prio_tc, VAR_5,
         VAR_4->dcb.pfc);
 return VAR_6;
}
