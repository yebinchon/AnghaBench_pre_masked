
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct netdev_private {int an_enable; int speed; int full_duplex; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int speed; scalar_t__ autoneg; int duplex; } ;
struct ethtool_link_ksettings {TYPE_1__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (struct net_device*) ;
 struct netdev_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3,
      const struct ethtool_link_ksettings *VAR_4)
{
 struct netdev_private *VAR_5 = FUNC_1(VAR_3);
 u32 VAR_6 = VAR_4->base.speed;
 u8 VAR_7 = VAR_4->base.duplex;

 FUNC_2(VAR_3);
 if (VAR_4->base.autoneg == VAR_0) {
  if (VAR_5->an_enable) {
   return 0;
  } else {
   VAR_5->an_enable = 1;
   FUNC_0(VAR_3);
   return 0;
  }
 } else {
  VAR_5->an_enable = 0;
  if (VAR_5->speed == 1000) {
   VAR_6 = 129;
   VAR_7 = VAR_1;
   FUNC_3("Warning!! Can't disable Auto negotiation in 1000Mbps, change to Manual 100Mbps, Full duplex.\n");
  }
  switch (VAR_6) {
  case 130:
   VAR_5->speed = 10;
   VAR_5->full_duplex = (VAR_7 == VAR_1);
   break;
  case 129:
   VAR_5->speed = 100;
   VAR_5->full_duplex = (VAR_7 == VAR_1);
   break;
  case 128:
  default:
   return -VAR_2;
  }
  FUNC_0(VAR_3);
 }
 return 0;
}
