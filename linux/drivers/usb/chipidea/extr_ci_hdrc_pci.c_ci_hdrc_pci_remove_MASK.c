
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct ci_hdrc_pci {int phy; int ci; } ;


 int FUNC_0 (int ) ;
 struct ci_hdrc_pci* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_0)
{
 struct ci_hdrc_pci *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->ci);
 FUNC_2(VAR_1->phy);
}
