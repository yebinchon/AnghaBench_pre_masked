
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ethtool_pauseparam {int autoneg; int rx_pause; int tx_pause; int cmd; } ;
struct TYPE_2__ {int* req_flow_ctrl; int req_fc_auto_adv; } ;
struct bnx2x {TYPE_1__ link_params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ,int,int,int) ;
 int FUNC_1 (struct bnx2x*) ;
 struct bnx2x* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_4,
     struct ethtool_pauseparam *VAR_5)
{
 struct bnx2x *VAR_6 = FUNC_2(VAR_4);
 int VAR_7 = FUNC_1(VAR_6);
 int VAR_8;

 VAR_5->autoneg = (VAR_6->link_params.req_flow_ctrl[VAR_7] ==
      VAR_0);

 if (!VAR_5->autoneg)
  VAR_8 = VAR_6->link_params.req_flow_ctrl[VAR_7];
 else
  VAR_8 = VAR_6->link_params.req_fc_auto_adv;

 VAR_5->rx_pause = ((VAR_8 & VAR_1) ==
       VAR_1);
 VAR_5->tx_pause = ((VAR_8 & VAR_2) ==
       VAR_2);

 FUNC_0(VAR_3, "ethtool_pauseparam: cmd %d\n"
    "  autoneg %d  rx_pause %d  tx_pause %d\n",
    VAR_5->cmd, VAR_5->autoneg, VAR_5->rx_pause, VAR_5->tx_pause);
}
