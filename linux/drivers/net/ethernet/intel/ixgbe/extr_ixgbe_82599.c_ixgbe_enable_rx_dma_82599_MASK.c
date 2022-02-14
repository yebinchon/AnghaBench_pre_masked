
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int (* enable_rx_buff ) (struct ixgbe_hw*) ;int (* disable_rx ) (struct ixgbe_hw*) ;int (* enable_rx ) (struct ixgbe_hw*) ;int (* disable_rx_buff ) (struct ixgbe_hw*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (struct ixgbe_hw*) ;
 int FUNC_1 (struct ixgbe_hw*) ;
 int FUNC_2 (struct ixgbe_hw*) ;
 int FUNC_3 (struct ixgbe_hw*) ;

__attribute__((used)) static s32 FUNC_4(struct ixgbe_hw *VAR_1, u32 VAR_2)
{






 VAR_1->mac.ops.disable_rx_buff(VAR_1);

 if (VAR_2 & VAR_0)
  VAR_1->mac.ops.enable_rx(VAR_1);
 else
  VAR_1->mac.ops.disable_rx(VAR_1);

 VAR_1->mac.ops.enable_rx_buff(VAR_1);

 return 0;
}
