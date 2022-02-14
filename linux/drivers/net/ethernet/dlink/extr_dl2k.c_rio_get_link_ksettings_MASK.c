
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct netdev_private {int phy_addr; scalar_t__ an_enable; scalar_t__ full_duplex; int speed; scalar_t__ link_status; scalar_t__ phy_media; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int advertising; int supported; } ;
struct TYPE_3__ {int phy_address; int autoneg; int duplex; int speed; int port; } ;
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (int ,int) ;
 struct netdev_private* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_24,
      struct ethtool_link_ksettings *VAR_25)
{
 struct netdev_private *VAR_26 = FUNC_1(VAR_24);
 u32 VAR_27, VAR_28;

 if (VAR_26->phy_media) {

  VAR_27 = VAR_21 | VAR_22;
  VAR_28 = VAR_5 | VAR_6;
  VAR_25->base.port = VAR_13;
 } else {

  VAR_27 = VAR_20 |
   VAR_19 | VAR_18
   | VAR_17 | VAR_16 |
   VAR_21 | VAR_23;
  VAR_28 = VAR_4 |
   VAR_3 | VAR_2 |
   VAR_1 | VAR_0 |
   VAR_5 | VAR_7;
  VAR_25->base.port = VAR_14;
 }
 if (VAR_26->link_status) {
  VAR_25->base.speed = VAR_26->speed;
  VAR_25->base.duplex = VAR_26->full_duplex ? VAR_10 : VAR_11;
 } else {
  VAR_25->base.speed = VAR_15;
  VAR_25->base.duplex = VAR_12;
 }
 if (VAR_26->an_enable)
  VAR_25->base.autoneg = VAR_9;
 else
  VAR_25->base.autoneg = VAR_8;

 VAR_25->base.phy_address = VAR_26->phy_addr;

 FUNC_0(VAR_25->link_modes.supported,
      VAR_27);
 FUNC_0(VAR_25->link_modes.advertising,
      VAR_28);

 return 0;
}
