
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct altera_pcie {int irq; void* hip_base; TYPE_1__* pcie_data; void* cra_base; struct platform_device* pdev; } ;
struct TYPE_2__ {scalar_t__ version; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_2 ;
 int FUNC_2 (struct device*,char*,int) ;
 void* FUNC_3 (struct device*,struct resource*) ;
 int FUNC_4 (int,int ,struct altera_pcie*) ;
 int FUNC_5 (struct platform_device*,int ) ;
 struct resource* FUNC_6 (struct platform_device*,int ,char*) ;

__attribute__((used)) static int FUNC_7(struct altera_pcie *VAR_3)
{
 struct device *VAR_4 = &VAR_3->pdev->dev;
 struct platform_device *VAR_5 = VAR_3->pdev;
 struct resource *VAR_6;
 struct resource *VAR_7;

 VAR_6 = FUNC_6(VAR_5, VAR_1, "Cra");
 VAR_3->cra_base = FUNC_3(VAR_4, VAR_6);
 if (FUNC_0(VAR_3->cra_base))
  return FUNC_1(VAR_3->cra_base);

 if (VAR_3->pcie_data->version == VAR_0) {
  VAR_7 = FUNC_6(VAR_5, VAR_1, "Hip");
  VAR_3->hip_base = FUNC_3(&VAR_5->dev, VAR_7);
  if (FUNC_0(VAR_3->hip_base))
   return FUNC_1(VAR_3->hip_base);
 }


 VAR_3->irq = FUNC_5(VAR_5, 0);
 if (VAR_3->irq < 0) {
  FUNC_2(VAR_4, "failed to get IRQ: %d\n", VAR_3->irq);
  return VAR_3->irq;
 }

 FUNC_4(VAR_3->irq, VAR_2, VAR_3);
 return 0;
}
