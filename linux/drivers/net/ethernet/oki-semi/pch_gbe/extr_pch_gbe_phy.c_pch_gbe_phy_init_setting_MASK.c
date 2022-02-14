
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_5__ {int autoneg; int link_duplex; int link_speed; } ;
struct TYPE_4__ {int autoneg_advertised; } ;
struct pch_gbe_hw {TYPE_2__ mac; TYPE_1__ phy; } ;
struct pch_gbe_adapter {TYPE_3__* pdata; int netdev; int mii; } ;
struct ethtool_cmd {int autoneg; int advertising; int duplex; int cmd; } ;
struct TYPE_6__ {scalar_t__ phy_tx_clk_delay; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ethtool_cmd*,int ) ;
 int FUNC_1 (int *,struct ethtool_cmd*) ;
 int FUNC_2 (int *,struct ethtool_cmd*) ;
 int FUNC_3 (int ,char*) ;
 struct pch_gbe_adapter* FUNC_4 (struct pch_gbe_hw*) ;
 int FUNC_5 (struct pch_gbe_hw*,int ,int *) ;
 int FUNC_6 (struct pch_gbe_hw*) ;
 int FUNC_7 (struct pch_gbe_hw*) ;
 int FUNC_8 (struct pch_gbe_hw*,int ,int ) ;

void FUNC_9(struct pch_gbe_hw *VAR_5)
{
 struct pch_gbe_adapter *VAR_6 = FUNC_4(VAR_5);
 struct ethtool_cmd VAR_7 = { .cmd = VAR_1 };
 int VAR_8;
 u16 VAR_9;

 VAR_8 = FUNC_1(&VAR_6->mii, &VAR_7);
 if (VAR_8)
  FUNC_3(VAR_6->netdev, "Error: mii_ethtool_gset\n");

 FUNC_0(&VAR_7, VAR_5->mac.link_speed);
 VAR_7.duplex = VAR_5->mac.link_duplex;
 VAR_7.advertising = VAR_5->phy.autoneg_advertised;
 VAR_7.autoneg = VAR_5->mac.autoneg;
 FUNC_8(VAR_5, VAR_2, VAR_0);
 VAR_8 = FUNC_2(&VAR_6->mii, &VAR_7);
 if (VAR_8)
  FUNC_3(VAR_6->netdev, "Error: mii_ethtool_sset\n");

 FUNC_6(VAR_5);

 FUNC_5(VAR_5, VAR_4, &VAR_9);
 VAR_9 |= VAR_3;
 FUNC_8(VAR_5, VAR_4, VAR_9);


 if (VAR_6->pdata && VAR_6->pdata->phy_tx_clk_delay)
  FUNC_7(VAR_5);
}
