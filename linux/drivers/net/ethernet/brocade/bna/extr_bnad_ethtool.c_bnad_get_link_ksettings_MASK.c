
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int advertising; int supported; } ;
struct TYPE_3__ {int duplex; int speed; scalar_t__ phy_address; int port; int autoneg; } ;
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
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct net_device*) ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_10,
   struct ethtool_link_ksettings *VAR_11)
{
 u32 VAR_12, VAR_13;

 VAR_12 = VAR_8;
 VAR_13 = VAR_0;
 VAR_11->base.autoneg = VAR_2;
 VAR_12 |= VAR_9;
 VAR_13 |= VAR_1;
 VAR_11->base.port = VAR_5;
 VAR_11->base.phy_address = 0;

 if (FUNC_1(VAR_10)) {
  VAR_11->base.speed = VAR_6;
  VAR_11->base.duplex = VAR_3;
 } else {
  VAR_11->base.speed = VAR_7;
  VAR_11->base.duplex = VAR_4;
 }

 FUNC_0(VAR_11->link_modes.supported,
      VAR_12);
 FUNC_0(VAR_11->link_modes.advertising,
      VAR_13);

 return 0;
}
