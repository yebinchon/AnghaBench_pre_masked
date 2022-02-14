
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ixgbe_mac_addr {int state; int pool; int addr; } ;
struct TYPE_3__ {int (* set_rar ) (struct ixgbe_hw*,int ,int ,int ,int ) ;} ;
struct TYPE_4__ {TYPE_1__ ops; int addr; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
struct ixgbe_adapter {struct ixgbe_hw hw; struct ixgbe_mac_addr* mac_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (struct ixgbe_hw*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct ixgbe_adapter *VAR_4)
{
 struct ixgbe_mac_addr *VAR_5 = &VAR_4->mac_table[0];
 struct ixgbe_hw *VAR_6 = &VAR_4->hw;

 FUNC_1(&VAR_5->addr, VAR_6->mac.addr, VAR_0);
 VAR_5->pool = FUNC_0(0);

 VAR_5->state = VAR_1 | VAR_2;

 VAR_6->mac.ops.set_rar(VAR_6, 0, VAR_5->addr, VAR_5->pool,
       VAR_3);
}
