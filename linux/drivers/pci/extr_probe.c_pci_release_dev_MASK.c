
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dma_alias_mask; struct pci_dev* driver_override; int bus; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 struct pci_dev* FUNC_6 (struct device*) ;

__attribute__((used)) static void FUNC_7(struct device *VAR_0)
{
 struct pci_dev *VAR_1;

 VAR_1 = FUNC_6(VAR_0);
 FUNC_3(VAR_1);
 FUNC_4(VAR_1);
 FUNC_5(VAR_1);
 FUNC_2(VAR_1->bus);
 FUNC_1(VAR_1->driver_override);
 FUNC_0(VAR_1->dma_alias_mask);
 FUNC_1(VAR_1);
}
