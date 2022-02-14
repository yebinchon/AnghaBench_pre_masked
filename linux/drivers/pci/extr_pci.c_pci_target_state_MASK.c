
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {scalar_t__ current_state; int pme_support; int pm_cap; } ;
typedef int pci_power_t ;


 int VAR_0 ;


 scalar_t__ VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*) ;
 scalar_t__ FUNC_2 (struct pci_dev*) ;

__attribute__((used)) static pci_power_t FUNC_3(struct pci_dev *VAR_3, bool VAR_4)
{
 pci_power_t VAR_5 = VAR_2;

 if (FUNC_2(VAR_3)) {



  pci_power_t VAR_6 = FUNC_1(VAR_3);

  switch (VAR_6) {
  case 129:
  case 128:
   break;
  case 131:
  case 130:
   if (FUNC_0(VAR_3))
    break;

  default:
   VAR_5 = VAR_6;
  }

  return VAR_5;
 }

 if (!VAR_3->pm_cap)
  VAR_5 = VAR_0;






 if (VAR_3->current_state == VAR_1)
  VAR_5 = VAR_1;

 if (VAR_4) {




  if (VAR_3->pme_support) {
   while (VAR_5
         && !(VAR_3->pme_support & (1 << VAR_5)))
    VAR_5--;
  }
 }

 return VAR_5;
}
