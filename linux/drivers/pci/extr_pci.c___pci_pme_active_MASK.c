
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {scalar_t__ pm_cap; int pme_support; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_3, bool VAR_4)
{
 u16 VAR_5;

 if (!VAR_3->pme_support)
  return;

 FUNC_0(VAR_3, VAR_3->pm_cap + VAR_0, &VAR_5);

 VAR_5 |= VAR_2 | VAR_1;
 if (!VAR_4)
  VAR_5 &= ~VAR_1;

 FUNC_1(VAR_3, VAR_3->pm_cap + VAR_0, VAR_5);
}
