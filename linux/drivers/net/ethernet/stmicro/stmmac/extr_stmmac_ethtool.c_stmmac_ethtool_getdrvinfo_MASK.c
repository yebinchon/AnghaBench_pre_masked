
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stmmac_priv {TYPE_1__* plat; } ;
struct net_device {int dummy; } ;
struct ethtool_drvinfo {int version; int driver; } ;
struct TYPE_2__ {scalar_t__ has_xgmac; scalar_t__ has_gmac4; scalar_t__ has_gmac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct stmmac_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_4,
          struct ethtool_drvinfo *VAR_5)
{
 struct stmmac_priv *VAR_6 = FUNC_0(VAR_4);

 if (VAR_6->plat->has_gmac || VAR_6->plat->has_gmac4)
  FUNC_1(VAR_5->driver, VAR_1, sizeof(VAR_5->driver));
 else if (VAR_6->plat->has_xgmac)
  FUNC_1(VAR_5->driver, VAR_3, sizeof(VAR_5->driver));
 else
  FUNC_1(VAR_5->driver, VAR_2,
   sizeof(VAR_5->driver));

 FUNC_1(VAR_5->version, VAR_0, sizeof(VAR_5->version));
}
