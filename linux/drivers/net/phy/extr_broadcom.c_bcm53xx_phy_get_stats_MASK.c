
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct phy_device {struct bcm53xx_phy_priv* priv; } ;
struct ethtool_stats {int dummy; } ;
struct bcm53xx_phy_priv {int stats; } ;


 int FUNC_0 (struct phy_device*,int ,struct ethtool_stats*,int *) ;

__attribute__((used)) static void FUNC_1(struct phy_device *VAR_0,
      struct ethtool_stats *VAR_1, u64 *VAR_2)
{
 struct bcm53xx_phy_priv *VAR_3 = VAR_0->priv;

 FUNC_0(VAR_0, VAR_3->stats, VAR_1, VAR_2);
}
