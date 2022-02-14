
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int pcie_mpss; TYPE_1__* bus; } ;
struct TYPE_2__ {scalar_t__ self; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct pci_dev*,char*) ;
 scalar_t__ FUNC_2 (struct pci_dev*) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct pci_dev*,int) ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_3, int VAR_4)
{
 int VAR_5;

 if (VAR_2 == VAR_0) {
  VAR_4 = 128 << VAR_3->pcie_mpss;

  if (FUNC_2(VAR_3) != VAR_1 &&
      VAR_3->bus->self)
   VAR_4 = FUNC_0(VAR_4, FUNC_3(VAR_3->bus->self));
 }

 VAR_5 = FUNC_4(VAR_3, VAR_4);
 if (VAR_5)
  FUNC_1(VAR_3, "Failed attempting to set the MPS\n");
}
