
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct pci_dev {int dummy; } ;
struct macb_platform_data {int hclk; int pclk; } ;


 int FUNC_0 (int ) ;
 struct macb_platform_data* FUNC_1 (int *) ;
 struct platform_device* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct platform_device*) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_0)
{
 struct platform_device *VAR_1 = FUNC_2(VAR_0);
 struct macb_platform_data *VAR_2 = FUNC_1(&VAR_1->dev);

 FUNC_3(VAR_1);
 FUNC_0(VAR_2->pclk);
 FUNC_0(VAR_2->hclk);
}
