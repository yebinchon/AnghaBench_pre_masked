
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct skge_port {int duplex; int speed; int autoneg; int advertising; struct skge_hw* hw; } ;
struct skge_hw {int phy_addr; scalar_t__ copper; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int advertising; int supported; } ;
struct TYPE_3__ {int duplex; int speed; int autoneg; int port; int phy_address; } ;
struct ethtool_link_ksettings {TYPE_2__ link_modes; TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 struct skge_port* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct skge_hw*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2,
       struct ethtool_link_ksettings *VAR_3)
{
 struct skge_port *VAR_4 = FUNC_1(VAR_2);
 struct skge_hw *VAR_5 = VAR_4->hw;
 u32 VAR_6, VAR_7;

 VAR_6 = FUNC_2(VAR_5);

 if (VAR_5->copper) {
  VAR_3->base.port = VAR_1;
  VAR_3->base.phy_address = VAR_5->phy_addr;
 } else
  VAR_3->base.port = VAR_0;

 VAR_7 = VAR_4->advertising;
 VAR_3->base.autoneg = VAR_4->autoneg;
 VAR_3->base.speed = VAR_4->speed;
 VAR_3->base.duplex = VAR_4->duplex;

 FUNC_0(VAR_3->link_modes.supported,
      VAR_6);
 FUNC_0(VAR_3->link_modes.advertising,
      VAR_7);

 return 0;
}
