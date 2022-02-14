
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_endpoint_test {int num_irqs; struct pci_dev* pdev; } ;
struct device {int dummy; } ;
struct pci_dev {struct device dev; } ;


 int FUNC_0 (struct device*,int ,struct pci_endpoint_test*) ;
 int FUNC_1 (struct pci_dev*,int) ;

__attribute__((used)) static void FUNC_2(struct pci_endpoint_test *VAR_0)
{
 int VAR_1;
 struct pci_dev *VAR_2 = VAR_0->pdev;
 struct device *VAR_3 = &VAR_2->dev;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_irqs; VAR_1++)
  FUNC_0(VAR_3, FUNC_1(VAR_2, VAR_1), VAR_0);

 VAR_0->num_irqs = 0;
}
