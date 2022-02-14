
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stmmac_priv {TYPE_1__* plat; } ;
struct stm32_dwmac {scalar_t__ irq_pwr_wakeup; } ;
struct platform_device {int dev; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {struct stm32_dwmac* bsp_priv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 struct stmmac_priv* FUNC_2 (struct net_device*) ;
 struct net_device* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct stm32_dwmac*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct net_device *VAR_1 = FUNC_3(VAR_0);
 struct stmmac_priv *VAR_2 = FUNC_2(VAR_1);
 int VAR_3 = FUNC_5(&VAR_0->dev);
 struct stm32_dwmac *VAR_4 = VAR_2->plat->bsp_priv;

 FUNC_4(VAR_2->plat->bsp_priv);

 if (VAR_4->irq_pwr_wakeup >= 0) {
  FUNC_0(&VAR_0->dev);
  FUNC_1(&VAR_0->dev, 0);
 }

 return VAR_3;
}
