
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_endpoint_test {int num_irqs; struct pci_dev* pdev; } ;
struct device {int dummy; } ;
struct pci_dev {struct device dev; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct pci_dev*,int,int,int ) ;

__attribute__((used)) static bool FUNC_2(struct pci_endpoint_test *VAR_3,
      int VAR_4)
{
 int VAR_5 = -1;
 struct pci_dev *VAR_6 = VAR_3->pdev;
 struct device *VAR_7 = &VAR_6->dev;
 bool VAR_8 = 1;

 switch (VAR_4) {
 case 130:
  VAR_5 = FUNC_1(VAR_6, 1, 1, VAR_0);
  if (VAR_5 < 0)
   FUNC_0(VAR_7, "Failed to get Legacy interrupt\n");
  break;
 case 129:
  VAR_5 = FUNC_1(VAR_6, 1, 32, VAR_1);
  if (VAR_5 < 0)
   FUNC_0(VAR_7, "Failed to get MSI interrupts\n");
  break;
 case 128:
  VAR_5 = FUNC_1(VAR_6, 1, 2048, VAR_2);
  if (VAR_5 < 0)
   FUNC_0(VAR_7, "Failed to get MSI-X interrupts\n");
  break;
 default:
  FUNC_0(VAR_7, "Invalid IRQ type selected\n");
 }

 if (VAR_5 < 0) {
  VAR_5 = 0;
  VAR_8 = 0;
 }
 VAR_3->num_irqs = VAR_5;

 return VAR_8;
}
