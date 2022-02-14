
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {struct lan88xx_priv* priv; } ;
struct lan88xx_priv {int wolopts; } ;
struct ethtool_wolinfo {int wolopts; } ;



__attribute__((used)) static int FUNC_0(struct phy_device *VAR_0,
      struct ethtool_wolinfo *VAR_1)
{
 struct lan88xx_priv *VAR_2 = VAR_0->priv;

 VAR_2->wolopts = VAR_1->wolopts;

 return 0;
}
