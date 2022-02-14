
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct gfar_private {int tx_pause_en; int rx_pause_en; int pause_aneg_en; } ;
struct ethtool_pauseparam {int autoneg; int rx_pause; int tx_pause; } ;


 struct gfar_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0,
        struct ethtool_pauseparam *VAR_1)
{
 struct gfar_private *VAR_2 = FUNC_0(VAR_0);

 VAR_1->autoneg = !!VAR_2->pause_aneg_en;
 VAR_1->rx_pause = !!VAR_2->rx_pause_en;
 VAR_1->tx_pause = !!VAR_2->tx_pause_en;
}
