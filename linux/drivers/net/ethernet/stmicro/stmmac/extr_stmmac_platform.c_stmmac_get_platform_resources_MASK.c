
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmmac_resources {int irq; int wol_irq; int lpi_irq; int addr; } ;
struct resource {int dummy; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,struct resource*) ;
 int FUNC_2 (struct stmmac_resources*,int ,int) ;
 void* FUNC_3 (struct platform_device*,char*) ;
 struct resource* FUNC_4 (struct platform_device*,int ,int ) ;

int FUNC_5(struct platform_device *VAR_2,
      struct stmmac_resources *VAR_3)
{
 struct resource *VAR_4;

 FUNC_2(VAR_3, 0, sizeof(*VAR_3));




 VAR_3->irq = FUNC_3(VAR_2, "macirq");
 if (VAR_3->irq < 0)
  return VAR_3->irq;
 VAR_3->wol_irq = FUNC_3(VAR_2, "eth_wake_irq");
 if (VAR_3->wol_irq < 0) {
  if (VAR_3->wol_irq == -VAR_0)
   return -VAR_0;
  VAR_3->wol_irq = VAR_3->irq;
 }

 VAR_3->lpi_irq = FUNC_3(VAR_2, "eth_lpi");
 if (VAR_3->lpi_irq == -VAR_0)
  return -VAR_0;

 VAR_4 = FUNC_4(VAR_2, VAR_1, 0);
 VAR_3->addr = FUNC_1(&VAR_2->dev, VAR_4);

 return FUNC_0(VAR_3->addr);
}
