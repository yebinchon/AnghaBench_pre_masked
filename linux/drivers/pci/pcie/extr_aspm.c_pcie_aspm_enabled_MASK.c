
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {TYPE_1__* link_state; } ;
struct TYPE_2__ {int aspm_enabled; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct pci_dev* FUNC_2 (struct pci_dev*) ;

bool FUNC_3(struct pci_dev *VAR_1)
{
 struct pci_dev *VAR_2 = FUNC_2(VAR_1);
 bool VAR_3;

 if (!VAR_2)
  return 0;

 FUNC_0(&VAR_0);
 VAR_3 = VAR_2->link_state ? !!VAR_2->link_state->aspm_enabled : 0;
 FUNC_1(&VAR_0);

 return VAR_3;
}
