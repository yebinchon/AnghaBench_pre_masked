
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {scalar_t__ type; } ;
struct TYPE_4__ {scalar_t__ flash_address; TYPE_1__ mac; scalar_t__ hw_addr; } ;
struct e1000_adapter {int flags; TYPE_2__ hw; int rx_ring; int tx_ring; int state; int * tx_hwtstamp_skb; int tx_hwtstamp_work; int e1000_workqueue; int watchdog_task; int print_hang_task; int update_phy_task; int downshift_task; int reset_task; int phy_info_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (struct e1000_adapter*) ;
 int FUNC_7 (struct e1000_adapter*) ;
 int FUNC_8 (struct e1000_adapter*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (int ) ;
 struct e1000_adapter* FUNC_13 (struct net_device*) ;
 scalar_t__ FUNC_14 (struct pci_dev*) ;
 int FUNC_15 (struct pci_dev*) ;
 int FUNC_16 (struct pci_dev*) ;
 struct net_device* FUNC_17 (struct pci_dev*) ;
 int FUNC_18 (struct pci_dev*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int ,int *) ;
 int FUNC_21 (int ,int *) ;
 int FUNC_22 (struct net_device*) ;

__attribute__((used)) static void FUNC_23(struct pci_dev *VAR_3)
{
 struct net_device *VAR_4 = FUNC_17(VAR_3);
 struct e1000_adapter *VAR_5 = FUNC_13(VAR_4);
 bool VAR_6 = FUNC_21(VAR_1, &VAR_5->state);

 FUNC_6(VAR_5);




 if (!VAR_6)
  FUNC_20(VAR_1, &VAR_5->state);
 FUNC_3(&VAR_5->phy_info_timer);

 FUNC_1(&VAR_5->reset_task);
 FUNC_1(&VAR_5->downshift_task);
 FUNC_1(&VAR_5->update_phy_task);
 FUNC_1(&VAR_5->print_hang_task);

 FUNC_0(&VAR_5->watchdog_task);
 FUNC_9(VAR_5->e1000_workqueue);
 FUNC_4(VAR_5->e1000_workqueue);

 if (VAR_5->flags & VAR_0) {
  FUNC_1(&VAR_5->tx_hwtstamp_work);
  if (VAR_5->tx_hwtstamp_skb) {
   FUNC_5(VAR_5->tx_hwtstamp_skb);
   VAR_5->tx_hwtstamp_skb = ((void*)0);
  }
 }


 if (!VAR_6)
  FUNC_2(VAR_1, &VAR_5->state);
 FUNC_22(VAR_4);

 if (FUNC_14(VAR_3))
  FUNC_19(&VAR_3->dev);




 FUNC_7(VAR_5);

 FUNC_8(VAR_5);
 FUNC_12(VAR_5->tx_ring);
 FUNC_12(VAR_5->rx_ring);

 FUNC_11(VAR_5->hw.hw_addr);
 if ((VAR_5->hw.flash_address) &&
     (VAR_5->hw.mac.type < VAR_2))
  FUNC_11(VAR_5->hw.flash_address);
 FUNC_18(VAR_3);

 FUNC_10(VAR_4);


 FUNC_16(VAR_3);

 FUNC_15(VAR_3);
}
