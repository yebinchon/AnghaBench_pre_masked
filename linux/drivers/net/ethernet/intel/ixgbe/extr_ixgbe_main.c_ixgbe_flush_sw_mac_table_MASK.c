
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ixgbe_mac_addr {int state; } ;
struct TYPE_2__ {int num_rar_entries; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
struct ixgbe_adapter {struct ixgbe_hw hw; struct ixgbe_mac_addr* mac_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ixgbe_adapter*) ;

__attribute__((used)) static void FUNC_1(struct ixgbe_adapter *VAR_2)
{
 struct ixgbe_mac_addr *VAR_3 = &VAR_2->mac_table[0];
 struct ixgbe_hw *VAR_4 = &VAR_2->hw;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4->mac.num_rar_entries; VAR_5++, VAR_3++) {
  VAR_3->state |= VAR_1;
  VAR_3->state &= ~VAR_0;
 }

 FUNC_0(VAR_2);
}
