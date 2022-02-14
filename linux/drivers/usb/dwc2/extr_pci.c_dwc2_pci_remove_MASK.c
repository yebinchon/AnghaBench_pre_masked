
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct dwc2_pci_glue {int phy; int dwc2; } ;


 struct dwc2_pci_glue* FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_0)
{
 struct dwc2_pci_glue *VAR_1 = FUNC_0(VAR_0);

 FUNC_2(VAR_1->dwc2);
 FUNC_3(VAR_1->phy);
 FUNC_1(VAR_0, ((void*)0));
}
