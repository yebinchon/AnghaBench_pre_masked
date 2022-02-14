
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct TYPE_4__ {scalar_t__ addr; } ;
struct phy_device {int mdix_ctrl; scalar_t__ duplex; int advertising; scalar_t__ speed; scalar_t__ autoneg; int supported; TYPE_1__ mdio; } ;
struct TYPE_6__ {scalar_t__ autoneg; scalar_t__ duplex; scalar_t__ speed; scalar_t__ phy_address; int eth_tp_mdix_ctrl; } ;
struct TYPE_5__ {int advertising; } ;
struct ethtool_link_ksettings {TYPE_3__ base; TYPE_2__ link_modes; } ;


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
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (struct phy_device*) ;

int FUNC_6(struct phy_device *VAR_10,
         const struct ethtool_link_ksettings *VAR_11)
{
 FUNC_0(VAR_9);
 u8 VAR_12 = VAR_11->base.autoneg;
 u8 VAR_13 = VAR_11->base.duplex;
 u32 VAR_14 = VAR_11->base.speed;

 if (VAR_11->base.phy_address != VAR_10->mdio.addr)
  return -VAR_4;

 FUNC_2(VAR_9, VAR_11->link_modes.advertising);


 FUNC_1(VAR_9, VAR_9, VAR_10->supported);


 if (VAR_12 != VAR_1 && VAR_12 != VAR_0)
  return -VAR_4;

 if (VAR_12 == VAR_1 && FUNC_3(VAR_9))
  return -VAR_4;

 if (VAR_12 == VAR_0 &&
     ((VAR_14 != VAR_8 &&
       VAR_14 != VAR_7 &&
       VAR_14 != VAR_6) ||
      (VAR_13 != VAR_3 &&
       VAR_13 != VAR_2)))
  return -VAR_4;

 VAR_10->autoneg = VAR_12;

 VAR_10->speed = VAR_14;

 FUNC_2(VAR_10->advertising, VAR_9);

 FUNC_4(VAR_5,
    VAR_10->advertising, VAR_12 == VAR_1);

 VAR_10->duplex = VAR_13;

 VAR_10->mdix_ctrl = VAR_11->base.eth_tp_mdix_ctrl;


 FUNC_5(VAR_10);

 return 0;
}
