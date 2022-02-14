
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct e1000_rx_ring {int dummy; } ;
struct e1000_hw {int pci_cmd_word; } ;
struct e1000_adapter {int (* alloc_rx_buf ) (struct e1000_adapter*,struct e1000_rx_ring*,int ) ;struct e1000_rx_ring* rx_ring; struct net_device* netdev; struct e1000_hw hw; } ;


 int FUNC_0 (struct e1000_rx_ring*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct e1000_adapter*) ;
 int FUNC_3 (struct e1000_hw*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct e1000_adapter*,struct e1000_rx_ring*,int ) ;

__attribute__((used)) static void FUNC_9(struct e1000_adapter *VAR_3)
{
 struct e1000_hw *VAR_4 = &VAR_3->hw;
 struct net_device *VAR_5 = VAR_3->netdev;
 u32 VAR_6;

 VAR_6 = FUNC_4(VAR_2);
 VAR_6 &= ~VAR_0;
 FUNC_5(VAR_2, VAR_6);
 FUNC_1();
 FUNC_6(5);

 if (VAR_4->pci_cmd_word & VAR_1)
  FUNC_3(VAR_4);

 if (FUNC_7(VAR_5)) {

  struct e1000_rx_ring *VAR_7 = &VAR_3->rx_ring[0];
  FUNC_2(VAR_3);
  VAR_3->alloc_rx_buf(VAR_3, VAR_7, FUNC_0(VAR_7));
 }
}
