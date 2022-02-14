
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int ats_cap; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct pci_dev*,int ) ;

void FUNC_2(struct pci_dev *VAR_1)
{
 int VAR_2;

 if (FUNC_0())
  return;

 VAR_2 = FUNC_1(VAR_1, VAR_0);
 if (!VAR_2)
  return;

 VAR_1->ats_cap = VAR_2;
}
