
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct net_device {int dev_addr; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ mac; } ;
struct igbvf_adapter {struct pci_dev* pdev; struct net_device* netdev; struct e1000_hw hw; } ;


 int FUNC_0 (int *,char*,...) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_1(struct igbvf_adapter *VAR_1)
{
 struct e1000_hw *VAR_2 = &VAR_1->hw;
 struct net_device *VAR_3 = VAR_1->netdev;
 struct pci_dev *VAR_4 = VAR_1->pdev;

 if (VAR_2->mac.type == VAR_0)
  FUNC_0(&VAR_4->dev, "Intel(R) I350 Virtual Function\n");
 else
  FUNC_0(&VAR_4->dev, "Intel(R) 82576 Virtual Function\n");
 FUNC_0(&VAR_4->dev, "Address: %pM\n", VAR_3->dev_addr);
}
