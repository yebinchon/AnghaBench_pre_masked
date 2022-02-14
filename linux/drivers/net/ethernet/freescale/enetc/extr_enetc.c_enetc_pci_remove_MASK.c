
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct enetc_hw {int reg; } ;
struct enetc_si {struct enetc_hw hw; } ;


 int FUNC_0 (struct enetc_si*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pci_dev*) ;
 struct enetc_si* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;

void FUNC_5(struct pci_dev *VAR_0)
{
 struct enetc_si *VAR_1 = FUNC_3(VAR_0);
 struct enetc_hw *VAR_2 = &VAR_1->hw;

 FUNC_1(VAR_2->reg);
 FUNC_0(VAR_1);
 FUNC_4(VAR_0);
 FUNC_2(VAR_0);
}
