
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stmmac_priv {TYPE_1__* plat; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ has_xgmac; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct stmmac_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_2)
{
 struct stmmac_priv *VAR_3 = FUNC_0(VAR_2);

 if (VAR_3->plat->has_xgmac)
  return VAR_1 * 4;
 return VAR_0;
}
