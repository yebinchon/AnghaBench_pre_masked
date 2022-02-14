
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int supported; } ;
struct ethtool_pauseparam {scalar_t__ rx_pause; scalar_t__ tx_pause; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;

bool FUNC_1(struct phy_device *VAR_2,
   struct ethtool_pauseparam *VAR_3)
{
 if (!FUNC_0(VAR_1,
          VAR_2->supported) && VAR_3->rx_pause)
  return 0;

 if (!FUNC_0(VAR_0,
          VAR_2->supported) &&
     VAR_3->rx_pause != VAR_3->tx_pause)
  return 0;

 return 1;
}
