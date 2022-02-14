
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stmmac_priv {TYPE_1__* plat; } ;
struct platform_device {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int stmmac_clk; int pclk; } ;


 int FUNC_0 (int ) ;
 struct stmmac_priv* FUNC_1 (struct net_device*) ;
 struct net_device* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct net_device *VAR_1 = FUNC_2(VAR_0);
 struct stmmac_priv *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_2->plat->pclk);
 FUNC_0(VAR_2->plat->stmmac_clk);

 return 0;
}
