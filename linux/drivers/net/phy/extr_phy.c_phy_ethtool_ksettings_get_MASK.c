
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int addr; } ;
struct phy_device {scalar_t__ interface; int mdix; int mdix_ctrl; int autoneg; TYPE_2__ mdio; int duplex; int speed; int lp_advertising; int advertising; int supported; } ;
struct TYPE_6__ {int eth_tp_mdix; int eth_tp_mdix_ctrl; int autoneg; int phy_address; int transceiver; int port; int duplex; int speed; } ;
struct TYPE_4__ {int lp_advertising; int advertising; int supported; } ;
struct ethtool_link_ksettings {TYPE_3__ base; TYPE_1__ link_modes; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct phy_device*) ;

void FUNC_2(struct phy_device *VAR_5,
          struct ethtool_link_ksettings *VAR_6)
{
 FUNC_0(VAR_6->link_modes.supported, VAR_5->supported);
 FUNC_0(VAR_6->link_modes.advertising, VAR_5->advertising);
 FUNC_0(VAR_6->link_modes.lp_advertising, VAR_5->lp_advertising);

 VAR_6->base.speed = VAR_5->speed;
 VAR_6->base.duplex = VAR_5->duplex;
 if (VAR_5->interface == VAR_0)
  VAR_6->base.port = VAR_1;
 else
  VAR_6->base.port = VAR_2;
 VAR_6->base.transceiver = FUNC_1(VAR_5) ?
    VAR_4 : VAR_3;
 VAR_6->base.phy_address = VAR_5->mdio.addr;
 VAR_6->base.autoneg = VAR_5->autoneg;
 VAR_6->base.eth_tp_mdix_ctrl = VAR_5->mdix_ctrl;
 VAR_6->base.eth_tp_mdix = VAR_5->mdix;
}
