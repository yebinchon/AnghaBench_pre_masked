
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct pci_dev {int dummy; } ;
struct ixgbe_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ixgbe_hw*) ;
 int FUNC_1 (struct pci_dev*,int ,scalar_t__*) ;

__attribute__((used)) static bool FUNC_2(struct ixgbe_hw *VAR_2, struct pci_dev *VAR_3)
{
 u16 VAR_4;

 FUNC_1(VAR_3, VAR_1, &VAR_4);
 if (VAR_4 == VAR_0) {
  FUNC_0(VAR_2);
  return 1;
 }
 return 0;
}
