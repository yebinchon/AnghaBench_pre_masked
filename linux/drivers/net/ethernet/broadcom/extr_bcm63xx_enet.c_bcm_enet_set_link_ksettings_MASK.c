
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int phydev; } ;
struct TYPE_2__ {scalar_t__ speed; scalar_t__ port; scalar_t__ duplex; scalar_t__ autoneg; } ;
struct ethtool_link_ksettings {TYPE_1__ base; } ;
struct bcm_enet_priv {int force_speed_100; int force_duplex_full; scalar_t__ has_phy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct net_device*) ;
 struct bcm_enet_priv* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,struct ethtool_link_ksettings const*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_6,
           const struct ethtool_link_ksettings *VAR_7)
{
 struct bcm_enet_priv *VAR_8;

 VAR_8 = FUNC_1(VAR_6);
 if (VAR_8->has_phy) {
  if (!VAR_6->phydev)
   return -VAR_2;
  return FUNC_3(VAR_6->phydev, VAR_7);
 } else {

  if (VAR_7->base.autoneg ||
      (VAR_7->base.speed != VAR_5 &&
       VAR_7->base.speed != VAR_4) ||
      VAR_7->base.port != VAR_3)
   return -VAR_1;

  VAR_8->force_speed_100 =
   (VAR_7->base.speed == VAR_5) ? 1 : 0;
  VAR_8->force_duplex_full =
   (VAR_7->base.duplex == VAR_0) ? 1 : 0;

  if (FUNC_2(VAR_6))
   FUNC_0(VAR_6);
  return 0;
 }
}
