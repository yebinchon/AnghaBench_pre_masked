
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* get_mac_addr ) (struct ixgbe_hw*,int ) ;int (* start_hw ) (struct ixgbe_hw*) ;} ;
struct TYPE_4__ {int addr; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
typedef int s32 ;


 int FUNC_0 (struct ixgbe_hw*) ;
 int FUNC_1 (struct ixgbe_hw*,int ) ;

__attribute__((used)) static s32 FUNC_2(struct ixgbe_hw *VAR_0)
{
 s32 VAR_1 = VAR_0->mac.ops.start_hw(VAR_0);

 VAR_0->mac.ops.get_mac_addr(VAR_0, VAR_0->mac.addr);

 return VAR_1;
}
