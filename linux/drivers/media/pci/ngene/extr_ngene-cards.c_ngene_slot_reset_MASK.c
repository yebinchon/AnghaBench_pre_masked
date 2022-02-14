
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
typedef int pci_ers_result_t ;


 int FUNC_0 (int *,char*) ;

__attribute__((used)) static pci_ers_result_t FUNC_1(struct pci_dev *VAR_0)
{
 FUNC_0(&VAR_0->dev, "slot reset\n");
 return 0;
}
