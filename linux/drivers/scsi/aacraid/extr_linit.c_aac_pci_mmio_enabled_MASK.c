
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
typedef int pci_ers_result_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;

__attribute__((used)) static pci_ers_result_t FUNC_1(struct pci_dev *VAR_1)
{
 FUNC_0(&VAR_1->dev, "aacraid: PCI error - mmio enabled\n");
 return VAR_0;
}
