
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sky2_port {int advertising; int flags; int duplex; int speed; struct sky2_hw* hw; } ;
struct sky2_hw {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int advertising; int supported; } ;
struct TYPE_3__ {int duplex; int autoneg; int port; int speed; int phy_address; } ;
struct ethtool_link_ksettings {TYPE_2__ link_modes; TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int) ;
 struct sky2_port* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct sky2_hw*) ;
 int FUNC_3 (struct sky2_hw*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_10,
       struct ethtool_link_ksettings *VAR_11)
{
 struct sky2_port *VAR_12 = FUNC_1(VAR_10);
 struct sky2_hw *VAR_13 = VAR_12->hw;
 u32 VAR_14, VAR_15;

 VAR_14 = FUNC_3(VAR_13);
 VAR_11->base.phy_address = VAR_2;
 if (FUNC_2(VAR_13)) {
  VAR_11->base.port = VAR_4;
  VAR_11->base.speed = VAR_12->speed;
  VAR_14 |= VAR_7 | VAR_9;
 } else {
  VAR_11->base.speed = VAR_6;
  VAR_11->base.port = VAR_3;
  VAR_14 |= VAR_7 | VAR_8;
 }

 VAR_15 = VAR_12->advertising;
 VAR_11->base.autoneg = (VAR_12->flags & VAR_5)
  ? VAR_1 : VAR_0;
 VAR_11->base.duplex = VAR_12->duplex;

 FUNC_0(VAR_11->link_modes.supported,
      VAR_14);
 FUNC_0(VAR_11->link_modes.advertising,
      VAR_15);

 return 0;
}
