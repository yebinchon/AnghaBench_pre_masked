
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_pauseparam {scalar_t__ autoneg; scalar_t__ tx_pause; scalar_t__ rx_pause; } ;
struct bnx2 {int phy_lock; int phy_port; int autoneg; int req_flow_ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bnx2*,int ) ;
 struct bnx2* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct net_device *VAR_3, struct ethtool_pauseparam *VAR_4)
{
 struct bnx2 *VAR_5 = FUNC_1(VAR_3);

 VAR_5->req_flow_ctrl = 0;
 if (VAR_4->rx_pause)
  VAR_5->req_flow_ctrl |= VAR_1;
 if (VAR_4->tx_pause)
  VAR_5->req_flow_ctrl |= VAR_2;

 if (VAR_4->autoneg) {
  VAR_5->autoneg |= VAR_0;
 }
 else {
  VAR_5->autoneg &= ~VAR_0;
 }

 if (FUNC_2(VAR_3)) {
  FUNC_3(&VAR_5->phy_lock);
  FUNC_0(VAR_5, VAR_5->phy_port);
  FUNC_4(&VAR_5->phy_lock);
 }

 return 0;
}
