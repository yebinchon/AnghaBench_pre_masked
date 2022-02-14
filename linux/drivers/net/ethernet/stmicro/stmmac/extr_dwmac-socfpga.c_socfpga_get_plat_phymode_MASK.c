
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stmmac_priv {TYPE_1__* plat; } ;
struct socfpga_dwmac {int dev; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int interface; } ;


 struct net_device* FUNC_0 (int ) ;
 struct stmmac_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct socfpga_dwmac *VAR_0)
{
 struct net_device *VAR_1 = FUNC_0(VAR_0->dev);
 struct stmmac_priv *VAR_2 = FUNC_1(VAR_1);

 return VAR_2->plat->interface;
}
