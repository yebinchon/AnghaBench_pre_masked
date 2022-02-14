
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_2__ {int hw_addr; } ;
struct ixgbe_adapter {TYPE_1__ hw; int io_addr; int state; } ;
typedef int pci_ers_result_t ;


 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct ixgbe_adapter*) ;
 scalar_t__ FUNC_4 (struct pci_dev*) ;
 struct ixgbe_adapter* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*,int) ;
 int VAR_4 ;
 int FUNC_10 () ;

__attribute__((used)) static pci_ers_result_t FUNC_11(struct pci_dev *VAR_5)
{
 struct ixgbe_adapter *VAR_6 = FUNC_5(VAR_5);
 pci_ers_result_t VAR_7;

 if (FUNC_4(VAR_5)) {
  FUNC_2(VAR_4, "Cannot re-enable PCI device after reset.\n");
  VAR_7 = VAR_1;
 } else {
  FUNC_10();
  FUNC_1(VAR_3, &VAR_6->state);
  VAR_6->hw.hw_addr = VAR_6->io_addr;
  FUNC_8(VAR_5);
  FUNC_6(VAR_5);
  FUNC_7(VAR_5);

  FUNC_9(VAR_5, 0);

  FUNC_3(VAR_6);
  FUNC_0(&VAR_6->hw, VAR_0, ~0);
  VAR_7 = VAR_2;
 }

 return VAR_7;
}
