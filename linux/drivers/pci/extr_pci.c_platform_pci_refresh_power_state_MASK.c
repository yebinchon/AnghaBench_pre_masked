
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_2__ {int (* refresh_state ) (struct pci_dev*) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct pci_dev*) ;

__attribute__((used)) static inline void FUNC_1(struct pci_dev *VAR_1)
{
 if (VAR_0 && VAR_0->refresh_state)
  VAR_0->refresh_state(VAR_1);
}
