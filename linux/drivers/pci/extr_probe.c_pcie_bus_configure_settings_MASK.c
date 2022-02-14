
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct pci_bus {TYPE_1__* self; } ;
struct TYPE_5__ {scalar_t__ pcie_mpss; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct pci_bus*,int (*) (TYPE_1__*,scalar_t__*),scalar_t__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_1__*,scalar_t__*) ;
 int FUNC_3 (TYPE_1__*,scalar_t__*) ;

void FUNC_4(struct pci_bus *VAR_3)
{
 u8 VAR_4 = 0;

 if (!VAR_3->self)
  return;

 if (!FUNC_0(VAR_3->self))
  return;






 if (VAR_2 == VAR_0)
  VAR_4 = 0;

 if (VAR_2 == VAR_1) {
  VAR_4 = VAR_3->self->pcie_mpss;

  FUNC_3(VAR_3->self, &VAR_4);
  FUNC_1(VAR_3, FUNC_3, &VAR_4);
 }

 FUNC_2(VAR_3->self, &VAR_4);
 FUNC_1(VAR_3, FUNC_2, &VAR_4);
}
