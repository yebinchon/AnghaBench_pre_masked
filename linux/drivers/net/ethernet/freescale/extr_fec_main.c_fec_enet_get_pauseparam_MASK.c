
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct fec_enet_private {int pause_flag; } ;
struct ethtool_pauseparam {int autoneg; int tx_pause; int rx_pause; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct fec_enet_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_2,
        struct ethtool_pauseparam *VAR_3)
{
 struct fec_enet_private *VAR_4 = FUNC_0(VAR_2);

 VAR_3->autoneg = (VAR_4->pause_flag & VAR_0) != 0;
 VAR_3->tx_pause = (VAR_4->pause_flag & VAR_1) != 0;
 VAR_3->rx_pause = VAR_3->tx_pause;
}
