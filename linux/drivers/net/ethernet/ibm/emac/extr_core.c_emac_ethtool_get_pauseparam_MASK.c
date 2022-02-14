
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ethtool_pauseparam {int autoneg; int rx_pause; int tx_pause; } ;
struct TYPE_2__ {int features; int advertising; scalar_t__ duplex; scalar_t__ asym_pause; scalar_t__ pause; } ;
struct emac_instance {int link_lock; TYPE_1__ phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct emac_instance* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_4,
     struct ethtool_pauseparam *VAR_5)
{
 struct emac_instance *VAR_6 = FUNC_2(VAR_4);

 FUNC_0(&VAR_6->link_lock);
 if ((VAR_6->phy.features & VAR_3) &&
     (VAR_6->phy.advertising & (VAR_1 | VAR_0)))
  VAR_5->autoneg = 1;

 if (VAR_6->phy.duplex == VAR_2) {
  if (VAR_6->phy.pause)
   VAR_5->rx_pause = VAR_5->tx_pause = 1;
  else if (VAR_6->phy.asym_pause)
   VAR_5->tx_pause = 1;
 }
 FUNC_1(&VAR_6->link_lock);
}
