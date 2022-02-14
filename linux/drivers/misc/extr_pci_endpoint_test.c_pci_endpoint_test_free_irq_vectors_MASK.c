
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_endpoint_test {struct pci_dev* pdev; } ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_1(struct pci_endpoint_test *VAR_0)
{
 struct pci_dev *VAR_1 = VAR_0->pdev;

 FUNC_0(VAR_1);
}
