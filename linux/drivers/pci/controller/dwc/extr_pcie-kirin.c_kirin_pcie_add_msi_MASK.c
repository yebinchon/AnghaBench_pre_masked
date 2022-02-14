
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_2__ {int msi_irq; } ;
struct dw_pcie {TYPE_1__ pp; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct platform_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct dw_pcie *VAR_1,
    struct platform_device *VAR_2)
{
 int VAR_3;

 if (FUNC_0(VAR_0)) {
  VAR_3 = FUNC_2(VAR_2, 0);
  if (VAR_3 < 0) {
   FUNC_1(&VAR_2->dev,
    "failed to get MSI IRQ (%d)\n", VAR_3);
   return VAR_3;
  }

  VAR_1->pp.msi_irq = VAR_3;
 }

 return 0;
}
