
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ addr; } ;
struct phy_device {scalar_t__ autoneg; scalar_t__ duplex; int mdix_ctrl; int advertising; scalar_t__ speed; int supported; TYPE_1__ mdio; } ;
struct ethtool_cmd {scalar_t__ phy_address; scalar_t__ advertising; scalar_t__ autoneg; scalar_t__ duplex; int eth_tp_mdix_ctrl; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ) ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (struct ethtool_cmd*) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (struct phy_device*) ;

int FUNC_7(struct phy_device *VAR_10, struct ethtool_cmd *VAR_11)
{
 FUNC_0(VAR_9);
 u32 VAR_12 = FUNC_1(VAR_11);

 if (VAR_11->phy_address != VAR_10->mdio.addr)
  return -VAR_4;


 FUNC_2(VAR_9, VAR_11->advertising);
 FUNC_3(VAR_9, VAR_9, VAR_10->supported);


 if (VAR_11->autoneg != VAR_1 && VAR_11->autoneg != VAR_0)
  return -VAR_4;

 if (VAR_11->autoneg == VAR_1 && VAR_11->advertising == 0)
  return -VAR_4;

 if (VAR_11->autoneg == VAR_0 &&
     ((VAR_12 != VAR_8 &&
       VAR_12 != VAR_7 &&
       VAR_12 != VAR_6) ||
      (VAR_11->duplex != VAR_3 &&
       VAR_11->duplex != VAR_2)))
  return -VAR_4;

 VAR_10->autoneg = VAR_11->autoneg;

 VAR_10->speed = VAR_12;

 FUNC_4(VAR_10->advertising, VAR_9);

 FUNC_5(VAR_5,
    VAR_10->advertising, VAR_1 == VAR_11->autoneg);

 VAR_10->duplex = VAR_11->duplex;

 VAR_10->mdix_ctrl = VAR_11->eth_tp_mdix_ctrl;


 FUNC_6(VAR_10);

 return 0;
}
