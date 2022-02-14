
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_pauseparam {int autoneg; int rx_pause; int tx_pause; } ;
struct bnxt_link_info {int autoneg; int req_flow_ctrl; } ;
struct bnxt {struct bnxt_link_info link_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct bnxt*) ;
 struct bnxt* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_3,
    struct ethtool_pauseparam *VAR_4)
{
 struct bnxt *VAR_5 = FUNC_1(VAR_3);
 struct bnxt_link_info *VAR_6 = &VAR_5->link_info;

 if (FUNC_0(VAR_5))
  return;
 VAR_4->autoneg = !!(VAR_6->autoneg & VAR_0);
 VAR_4->rx_pause = !!(VAR_6->req_flow_ctrl & VAR_1);
 VAR_4->tx_pause = !!(VAR_6->req_flow_ctrl & VAR_2);
}
