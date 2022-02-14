
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int pcie_mpss; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct pci_dev*,char*,int,int,int,int ) ;
 int FUNC_1 (struct pci_dev*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,int) ;
 int FUNC_5 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_6(struct pci_dev *VAR_3, void *VAR_4)
{
 int VAR_5, VAR_6;

 if (!FUNC_1(VAR_3))
  return 0;

 if (VAR_2 == VAR_1 ||
     VAR_2 == VAR_0)
  return 0;

 VAR_5 = 128 << *(u8 *)VAR_4;
 VAR_6 = FUNC_2(VAR_3);

 FUNC_4(VAR_3, VAR_5);
 FUNC_5(VAR_3);

 FUNC_0(VAR_3, "Max Payload Size set to %4d/%4d (was %4d), Max Read Rq %4d\n",
   FUNC_2(VAR_3), 128 << VAR_3->pcie_mpss,
   VAR_6, FUNC_3(VAR_3));

 return 0;
}
