
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int current_state; int pm_cap; } ;
typedef int pci_power_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*,int ) ;
 scalar_t__ FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,int ) ;

__attribute__((used)) static int FUNC_3(struct pci_dev *VAR_2, pci_power_t VAR_3)
{
 int VAR_4;

 if (FUNC_1(VAR_2)) {
  VAR_4 = FUNC_2(VAR_2, VAR_3);
  if (!VAR_4)
   FUNC_0(VAR_2, VAR_3);
 } else
  VAR_4 = -VAR_0;

 if (VAR_4 && !VAR_2->pm_cap)
  VAR_2->current_state = VAR_1;

 return VAR_4;
}
