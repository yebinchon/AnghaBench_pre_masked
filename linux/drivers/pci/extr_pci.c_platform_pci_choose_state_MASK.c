
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
typedef int pci_power_t ;
struct TYPE_2__ {int (* choose_state ) (struct pci_dev*) ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct pci_dev*) ;

__attribute__((used)) static inline pci_power_t FUNC_1(struct pci_dev *VAR_2)
{
 return VAR_1 ?
   VAR_1->choose_state(VAR_2) : VAR_0;
}
