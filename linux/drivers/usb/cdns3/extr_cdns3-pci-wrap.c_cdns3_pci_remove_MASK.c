
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {scalar_t__ devfn; } ;
struct cdns3_wrap {scalar_t__ devfn; int plat_dev; } ;


 struct pci_dev* FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct cdns3_wrap*) ;
 scalar_t__ FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_0)
{
 struct cdns3_wrap *VAR_1;
 struct pci_dev *VAR_2;

 VAR_2 = FUNC_0(VAR_0);

 VAR_1 = (struct cdns3_wrap *)FUNC_2(VAR_0);
 if (VAR_1->devfn == VAR_0->devfn)
  FUNC_4(VAR_1->plat_dev);

 if (!FUNC_3(VAR_2))
  FUNC_1(VAR_1);
}
