
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct atl1c_adapter {TYPE_1__* netdev; struct pci_dev* pdev; } ;
struct TYPE_2__ {int features; } ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (struct atl1c_adapter*) ;

__attribute__((used)) static void FUNC_3(struct atl1c_adapter *VAR_0)
{
 struct pci_dev *VAR_1 = VAR_0->pdev;

 if (FUNC_2(VAR_0))
  FUNC_1(&VAR_1->dev, "atl1c_restore_vlan\n");
 FUNC_0(VAR_0->netdev, VAR_0->netdev->features);
}
