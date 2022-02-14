
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct ixgbe_hw {struct ixgbe_adapter* back; } ;
struct ixgbe_adapter {struct pci_dev* pdev; } ;


 int FUNC_0 (int,int ) ;
 struct pci_dev* FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct ixgbe_hw *VAR_0)
{
 struct ixgbe_adapter *VAR_1 = VAR_0->back;
 struct pci_dev *VAR_2 = VAR_1->pdev;
 struct pci_dev *VAR_3;







 VAR_3 = FUNC_1(FUNC_0(0x16, 0));
 if (VAR_3) {
  if (VAR_3 == VAR_2)
   return 1;
  else
   return 0;
 }
 VAR_3 = FUNC_1(FUNC_0(0x17, 0));
 if (VAR_3 == VAR_2)
  return 1;

 return 0;
}
