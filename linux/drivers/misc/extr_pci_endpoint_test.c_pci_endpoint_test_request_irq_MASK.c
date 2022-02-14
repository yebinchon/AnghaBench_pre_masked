
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_endpoint_test {int num_irqs; struct pci_dev* pdev; } ;
struct device {int dummy; } ;
struct pci_dev {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (struct device*,char*,int ,...) ;
 int FUNC_1 (struct device*,int ,int ,int ,int ,struct pci_endpoint_test*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct pci_dev*,int) ;

__attribute__((used)) static bool FUNC_3(struct pci_endpoint_test *VAR_4)
{
 int VAR_5;
 int VAR_6;
 struct pci_dev *VAR_7 = VAR_4->pdev;
 struct device *VAR_8 = &VAR_7->dev;

 for (VAR_5 = 0; VAR_5 < VAR_4->num_irqs; VAR_5++) {
  VAR_6 = FUNC_1(VAR_8, FUNC_2(VAR_7, VAR_5),
           VAR_3,
           VAR_1, VAR_0, VAR_4);
  if (VAR_6)
   goto fail;
 }

 return 1;

fail:
 switch (VAR_2) {
 case 130:
  FUNC_0(VAR_8, "Failed to request IRQ %d for Legacy\n",
   FUNC_2(VAR_7, VAR_5));
  break;
 case 129:
  FUNC_0(VAR_8, "Failed to request IRQ %d for MSI %d\n",
   FUNC_2(VAR_7, VAR_5),
   VAR_5 + 1);
  break;
 case 128:
  FUNC_0(VAR_8, "Failed to request IRQ %d for MSI-X %d\n",
   FUNC_2(VAR_7, VAR_5),
   VAR_5 + 1);
  break;
 }

 return 0;
}
