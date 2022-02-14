
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int current_state; scalar_t__ pm_cap; } ;
typedef int pci_power_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,int*) ;
 scalar_t__ FUNC_2 (struct pci_dev*) ;

void FUNC_3(struct pci_dev *VAR_3, pci_power_t VAR_4)
{
 if (FUNC_2(VAR_3) == VAR_0 ||
     !FUNC_0(VAR_3)) {
  VAR_3->current_state = VAR_0;
 } else if (VAR_3->pm_cap) {
  u16 VAR_5;

  FUNC_1(VAR_3, VAR_3->pm_cap + VAR_1, &VAR_5);
  VAR_3->current_state = (VAR_5 & VAR_2);
 } else {
  VAR_3->current_state = VAR_4;
 }
}
