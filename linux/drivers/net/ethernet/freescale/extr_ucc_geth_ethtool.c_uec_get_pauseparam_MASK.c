
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ucc_geth_private {TYPE_2__* ug_info; TYPE_1__* phydev; } ;
struct net_device {int dummy; } ;
struct ethtool_pauseparam {int rx_pause; int tx_pause; int autoneg; } ;
struct TYPE_4__ {scalar_t__ transmitFlowControl; scalar_t__ receiveFlowControl; } ;
struct TYPE_3__ {int autoneg; } ;


 struct ucc_geth_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void
FUNC_1(struct net_device *VAR_0,
                     struct ethtool_pauseparam *VAR_1)
{
 struct ucc_geth_private *VAR_2 = FUNC_0(VAR_0);

 VAR_1->autoneg = VAR_2->phydev->autoneg;

 if (VAR_2->ug_info->receiveFlowControl)
  VAR_1->rx_pause = 1;
 if (VAR_2->ug_info->transmitFlowControl)
  VAR_1->tx_pause = 1;
}
