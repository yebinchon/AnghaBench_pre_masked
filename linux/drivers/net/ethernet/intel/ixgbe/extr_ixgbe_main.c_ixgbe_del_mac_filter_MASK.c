
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct ixgbe_mac_addr {int state; scalar_t__ pool; int addr; } ;
struct TYPE_2__ {int num_rar_entries; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
struct ixgbe_adapter {struct ixgbe_hw hw; struct ixgbe_mac_addr* mac_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int const*,int ) ;
 scalar_t__ FUNC_1 (int const*) ;
 int FUNC_2 (struct ixgbe_adapter*) ;

int FUNC_3(struct ixgbe_adapter *VAR_4,
    const u8 *VAR_5, u16 VAR_6)
{
 struct ixgbe_mac_addr *VAR_7 = &VAR_4->mac_table[0];
 struct ixgbe_hw *VAR_8 = &VAR_4->hw;
 int VAR_9;

 if (FUNC_1(VAR_5))
  return -VAR_0;


 for (VAR_9 = 0; VAR_9 < VAR_8->mac.num_rar_entries; VAR_9++, VAR_7++) {

  if (!(VAR_7->state & VAR_2))
   continue;

  if (VAR_7->pool != VAR_6)
   continue;

  if (!FUNC_0(VAR_5, VAR_7->addr))
   continue;

  VAR_7->state |= VAR_3;
  VAR_7->state &= ~VAR_2;

  FUNC_2(VAR_4);

  return 0;
 }

 return -VAR_1;
}
