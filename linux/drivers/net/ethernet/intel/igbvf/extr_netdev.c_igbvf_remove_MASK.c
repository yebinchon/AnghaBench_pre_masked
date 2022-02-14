
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct e1000_hw {scalar_t__ flash_address; scalar_t__ hw_addr; } ;
struct igbvf_adapter {TYPE_1__* rx_ring; TYPE_1__* tx_ring; int watchdog_task; int reset_task; int watchdog_timer; int state; struct e1000_hw hw; } ;
struct TYPE_2__ {int napi; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct igbvf_adapter*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_1__*) ;
 struct igbvf_adapter* FUNC_6 (struct net_device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct pci_dev*) ;
 struct net_device* FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (struct net_device*) ;

__attribute__((used)) static void FUNC_13(struct pci_dev *VAR_1)
{
 struct net_device *VAR_2 = FUNC_9(VAR_1);
 struct igbvf_adapter *VAR_3 = FUNC_6(VAR_2);
 struct e1000_hw *VAR_4 = &VAR_3->hw;




 FUNC_11(VAR_0, &VAR_3->state);
 FUNC_1(&VAR_3->watchdog_timer);

 FUNC_0(&VAR_3->reset_task);
 FUNC_0(&VAR_3->watchdog_task);

 FUNC_12(VAR_2);

 FUNC_3(VAR_3);




 FUNC_7(&VAR_3->rx_ring->napi);
 FUNC_5(VAR_3->tx_ring);
 FUNC_5(VAR_3->rx_ring);

 FUNC_4(VAR_4->hw_addr);
 if (VAR_4->flash_address)
  FUNC_4(VAR_4->flash_address);
 FUNC_10(VAR_1);

 FUNC_2(VAR_2);

 FUNC_8(VAR_1);
}
