
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pci_dev {TYPE_3__* bus; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct ixgbe_hw {TYPE_1__ bus; } ;
struct ixgbe_adapter {struct pci_dev* pdev; struct ixgbe_hw hw; } ;
struct TYPE_6__ {TYPE_2__* parent; } ;
struct TYPE_5__ {struct pci_dev* self; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct ixgbe_hw*) ;
 int FUNC_1 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_2(struct ixgbe_adapter *VAR_1,
         int VAR_2)
{
 struct ixgbe_hw *VAR_3 = &VAR_1->hw;
 struct pci_dev *VAR_4;





 if (VAR_3->bus.type == VAR_0)
  return;


 if (FUNC_0(&VAR_1->hw))
  VAR_4 = VAR_1->pdev->bus->parent->self;
 else
  VAR_4 = VAR_1->pdev;

 FUNC_1(VAR_4);
}
