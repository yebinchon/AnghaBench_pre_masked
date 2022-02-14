
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int pcie_mpss; TYPE_1__* bus; } ;
struct TYPE_2__ {struct pci_dev* self; } ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,int) ;
 int FUNC_4 (char*,int,int,int) ;
 int FUNC_5 (char*,int,int) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_0)
{
 struct pci_dev *VAR_1;
 int VAR_2, VAR_3, VAR_4, VAR_5;
 int VAR_6;


 VAR_3 = FUNC_2(VAR_0);


 VAR_4 = 128 << VAR_0->pcie_mpss;


 VAR_5 = VAR_4;

 if (VAR_0->bus && VAR_0->bus->self) {

  VAR_1 = VAR_0->bus->self;

  if (FUNC_1(VAR_1)) {
   VAR_2 = FUNC_2(VAR_1);
   VAR_5 = FUNC_0(VAR_4, VAR_2);
  }
 }

 VAR_6 = FUNC_3(VAR_0, VAR_5);
 if (VAR_6) {
  FUNC_5("failed to set mps to %d, keep using current %d\n",
         VAR_5, VAR_3);
  return;
 }

 FUNC_4("set mps to %d (was %d, max %d)\n", VAR_5, VAR_3, VAR_4);
}
