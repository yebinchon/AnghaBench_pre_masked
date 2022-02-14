
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int no_d3cold; } ;


 int FUNC_0 (struct pci_dev*) ;

void FUNC_1(struct pci_dev *VAR_0)
{
 if (!VAR_0->no_d3cold) {
  VAR_0->no_d3cold = 1;
  FUNC_0(VAR_0);
 }
}
