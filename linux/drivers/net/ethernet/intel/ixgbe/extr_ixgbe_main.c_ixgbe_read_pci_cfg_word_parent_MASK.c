
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct pci_dev {int dummy; } ;
struct pci_bus {struct pci_dev* self; } ;
struct ixgbe_adapter {int hw; TYPE_2__* pdev; } ;
struct TYPE_4__ {TYPE_1__* bus; } ;
struct TYPE_3__ {struct pci_bus* parent; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_3(struct ixgbe_adapter *VAR_1,
       u32 VAR_2, u16 *VAR_3)
{
 struct pci_dev *VAR_4;
 struct pci_bus *VAR_5;

 VAR_5 = VAR_1->pdev->bus->parent;
 if (!VAR_5)
  return -1;

 VAR_4 = VAR_5->self;
 if (!VAR_4)
  return -1;

 if (!FUNC_1(VAR_4))
  return -1;

 FUNC_2(VAR_4, VAR_2, VAR_3);
 if (*VAR_3 == VAR_0 &&
     FUNC_0(&VAR_1->hw, VAR_4))
  return -1;
 return 0;
}
