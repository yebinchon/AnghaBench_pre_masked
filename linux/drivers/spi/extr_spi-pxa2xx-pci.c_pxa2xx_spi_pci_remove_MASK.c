
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int clk; } ;
struct pxa2xx_spi_controller {TYPE_1__ ssp; } ;
struct platform_device {int dev; } ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (int ) ;
 struct pxa2xx_spi_controller* FUNC_1 (int *) ;
 struct platform_device* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct platform_device*) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_0)
{
 struct platform_device *VAR_1 = FUNC_2(VAR_0);
 struct pxa2xx_spi_controller *VAR_2;

 VAR_2 = FUNC_1(&VAR_1->dev);

 FUNC_3(VAR_1);
 FUNC_0(VAR_2->ssp.clk);
}
