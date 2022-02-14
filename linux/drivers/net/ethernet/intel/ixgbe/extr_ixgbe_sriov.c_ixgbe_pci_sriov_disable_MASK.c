
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct pci_dev {int dummy; } ;
struct ixgbe_adapter {scalar_t__ flags; } ;


 int FUNC_0 (struct ixgbe_adapter*) ;
 int FUNC_1 (struct ixgbe_adapter*) ;
 struct ixgbe_adapter* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_4(struct pci_dev *VAR_0)
{
 struct ixgbe_adapter *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;





 VAR_2 = FUNC_0(VAR_1);
 return VAR_2;
}
