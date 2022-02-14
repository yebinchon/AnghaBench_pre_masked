
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int mtu; } ;
struct TYPE_6__ {scalar_t__ tx_pause; scalar_t__ rx_pause; } ;
struct TYPE_5__ {TYPE_1__* pfc; } ;
struct mlxsw_sp_port {TYPE_3__ link; TYPE_2__ dcb; } ;
struct ethtool_pauseparam {scalar_t__ tx_pause; scalar_t__ rx_pause; scalar_t__ autoneg; } ;
struct TYPE_4__ {scalar_t__ pfc_en; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlxsw_sp_port*,int ,int) ;
 int FUNC_1 (struct mlxsw_sp_port*) ;
 int FUNC_2 (struct mlxsw_sp_port*,struct ethtool_pauseparam*) ;
 int FUNC_3 (struct net_device*,char*) ;
 struct mlxsw_sp_port* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1,
     struct ethtool_pauseparam *VAR_2)
{
 struct mlxsw_sp_port *VAR_3 = FUNC_4(VAR_1);
 bool VAR_4 = VAR_2->tx_pause || VAR_2->rx_pause;
 int VAR_5;

 if (VAR_3->dcb.pfc && VAR_3->dcb.pfc->pfc_en) {
  FUNC_3(VAR_1, "PFC already enabled on port\n");
  return -VAR_0;
 }

 if (VAR_2->autoneg) {
  FUNC_3(VAR_1, "PAUSE frames autonegotiation isn't supported\n");
  return -VAR_0;
 }

 VAR_5 = FUNC_0(VAR_3, VAR_1->mtu, VAR_4);
 if (VAR_5) {
  FUNC_3(VAR_1, "Failed to configure port's headroom\n");
  return VAR_5;
 }

 VAR_5 = FUNC_2(VAR_3, VAR_2);
 if (VAR_5) {
  FUNC_3(VAR_1, "Failed to set PAUSE parameters\n");
  goto err_port_pause_configure;
 }

 VAR_3->link.rx_pause = VAR_2->rx_pause;
 VAR_3->link.tx_pause = VAR_2->tx_pause;

 return 0;

err_port_pause_configure:
 VAR_4 = FUNC_1(VAR_3);
 FUNC_0(VAR_3, VAR_1->mtu, VAR_4);
 return VAR_5;
}
