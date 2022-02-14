
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int hw_addr; } ;
struct ixgb_adapter {TYPE_1__ hw; int tx_timeout_task; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 struct ixgb_adapter* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct pci_dev*) ;
 struct net_device* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static void
FUNC_8(struct pci_dev *VAR_0)
{
 struct net_device *VAR_1 = FUNC_5(VAR_0);
 struct ixgb_adapter *VAR_2 = FUNC_3(VAR_1);

 FUNC_0(&VAR_2->tx_timeout_task);

 FUNC_7(VAR_1);

 FUNC_2(VAR_2->hw.hw_addr);
 FUNC_6(VAR_0);

 FUNC_1(VAR_1);
 FUNC_4(VAR_0);
}
