
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ixgbe_mac_addr {int state; int pool; int addr; } ;
struct TYPE_3__ {int (* clear_rar ) (struct ixgbe_hw*,int) ;int (* set_rar ) (struct ixgbe_hw*,int,int ,int ,int ) ;} ;
struct TYPE_4__ {int num_rar_entries; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
struct ixgbe_adapter {struct ixgbe_hw hw; struct ixgbe_mac_addr* mac_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ixgbe_hw*,int,int ,int ,int ) ;
 int FUNC_1 (struct ixgbe_hw*,int) ;

__attribute__((used)) static void FUNC_2(struct ixgbe_adapter *VAR_3)
{
 struct ixgbe_mac_addr *VAR_4 = &VAR_3->mac_table[0];
 struct ixgbe_hw *VAR_5 = &VAR_3->hw;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_5->mac.num_rar_entries; VAR_6++, VAR_4++) {
  if (!(VAR_4->state & VAR_1))
   continue;

  VAR_4->state &= ~VAR_1;

  if (VAR_4->state & VAR_0)
   VAR_5->mac.ops.set_rar(VAR_5, VAR_6,
         VAR_4->addr,
         VAR_4->pool,
         VAR_2);
  else
   VAR_5->mac.ops.clear_rar(VAR_5, VAR_6);
 }
}
