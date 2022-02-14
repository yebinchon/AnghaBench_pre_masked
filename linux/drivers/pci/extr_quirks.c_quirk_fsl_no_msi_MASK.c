
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int no_msi; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_1(struct pci_dev *VAR_1)
{
 if (FUNC_0(VAR_1) == VAR_0)
  VAR_1->no_msi = 1;
}
