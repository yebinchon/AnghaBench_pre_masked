
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ethtool_pauseparam {scalar_t__ autoneg; int rx_pause; int tx_pause; } ;
struct TYPE_3__ {scalar_t__ fc_autoneg; } ;
struct be_adapter {int rx_fc; int tx_fc; TYPE_2__* pdev; TYPE_1__ phy; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct be_adapter*,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,char*) ;
 struct be_adapter* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int
FUNC_4(struct net_device *VAR_1, struct ethtool_pauseparam *VAR_2)
{
 struct be_adapter *VAR_3 = FUNC_3(VAR_1);
 int VAR_4;

 if (VAR_2->autoneg != VAR_3->phy.fc_autoneg)
  return -VAR_0;

 VAR_4 = FUNC_0(VAR_3, VAR_2->tx_pause,
      VAR_2->rx_pause);
 if (VAR_4) {
  FUNC_2(&VAR_3->pdev->dev, "Pause param set failed\n");
  return FUNC_1(VAR_4);
 }

 VAR_3->tx_fc = VAR_2->tx_pause;
 VAR_3->rx_fc = VAR_2->rx_pause;
 return 0;
}
