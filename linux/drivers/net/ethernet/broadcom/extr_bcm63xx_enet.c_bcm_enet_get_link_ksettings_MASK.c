
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int phydev; } ;
struct TYPE_4__ {int port; int duplex; int speed; scalar_t__ autoneg; } ;
struct TYPE_3__ {int advertising; int supported; } ;
struct ethtool_link_ksettings {TYPE_2__ base; TYPE_1__ link_modes; } ;
struct bcm_enet_priv {scalar_t__ force_duplex_full; scalar_t__ force_speed_100; scalar_t__ has_phy; } ;


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
 struct bcm_enet_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,struct ethtool_link_ksettings*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_10,
           struct ethtool_link_ksettings *VAR_11)
{
 struct bcm_enet_priv *VAR_12;
 u32 VAR_13, VAR_14;

 VAR_12 = FUNC_1(VAR_10);

 if (VAR_12->has_phy) {
  if (!VAR_10->phydev)
   return -VAR_6;

  FUNC_2(VAR_10->phydev, VAR_11);

  return 0;
 } else {
  VAR_11->base.autoneg = 0;
  VAR_11->base.speed = (VAR_12->force_speed_100) ?
   VAR_9 : VAR_8;
  VAR_11->base.duplex = (VAR_12->force_duplex_full) ?
   VAR_4 : VAR_5;
  VAR_13 = VAR_3 |
   VAR_2 |
   VAR_1 |
   VAR_0;
  VAR_14 = 0;
  FUNC_0(
   VAR_11->link_modes.supported, VAR_13);
  FUNC_0(
   VAR_11->link_modes.advertising, VAR_14);
  VAR_11->base.port = VAR_7;
 }
 return 0;
}
