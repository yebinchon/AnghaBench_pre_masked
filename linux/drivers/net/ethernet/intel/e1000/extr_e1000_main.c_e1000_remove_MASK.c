
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct e1000_hw {scalar_t__ mac_type; scalar_t__ flash_address; scalar_t__ hw_addr; scalar_t__ ce4100_gbe_mdio_base_virt; } ;
struct e1000_adapter {int flags; int bars; int rx_ring; int tx_ring; struct e1000_hw hw; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct e1000_adapter*) ;
 int FUNC_1 (struct e1000_hw*) ;
 int FUNC_2 (struct e1000_adapter*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 struct e1000_adapter* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct pci_dev*) ;
 struct net_device* FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*,int ) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (struct net_device*) ;

__attribute__((used)) static void FUNC_12(struct pci_dev *VAR_2)
{
 struct net_device *VAR_3 = FUNC_8(VAR_2);
 struct e1000_adapter *VAR_4 = FUNC_6(VAR_3);
 struct e1000_hw *VAR_5 = &VAR_4->hw;
 bool VAR_6;

 FUNC_0(VAR_4);
 FUNC_2(VAR_4);

 FUNC_11(VAR_3);

 FUNC_1(VAR_5);

 FUNC_5(VAR_4->tx_ring);
 FUNC_5(VAR_4->rx_ring);

 if (VAR_5->mac_type == VAR_1)
  FUNC_4(VAR_5->ce4100_gbe_mdio_base_virt);
 FUNC_4(VAR_5->hw_addr);
 if (VAR_5->flash_address)
  FUNC_4(VAR_5->flash_address);
 FUNC_9(VAR_2, VAR_4->bars);

 VAR_6 = !FUNC_10(VAR_0, &VAR_4->flags);
 FUNC_3(VAR_3);

 if (VAR_6)
  FUNC_7(VAR_2);
}
