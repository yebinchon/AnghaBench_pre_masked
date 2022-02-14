
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct ixgbe_mac_addr {int state; scalar_t__ pool; } ;
struct TYPE_2__ {int num_rar_entries; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
struct ixgbe_adapter {struct ixgbe_hw hw; struct ixgbe_mac_addr* mac_table; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct ixgbe_adapter *VAR_2, u16 VAR_3)
{
 struct ixgbe_mac_addr *VAR_4 = &VAR_2->mac_table[0];
 struct ixgbe_hw *VAR_5 = &VAR_2->hw;
 int VAR_6, VAR_7 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_5->mac.num_rar_entries; VAR_6++, VAR_4++) {

  if (VAR_4->state & VAR_0)
   continue;


  if (VAR_4->state & VAR_1) {
   if (VAR_4->pool != VAR_3)
    continue;
  }

  VAR_7++;
 }

 return VAR_7;
}
