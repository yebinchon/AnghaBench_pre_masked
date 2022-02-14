
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ (* reset_hw ) (struct ixgbe_hw*) ;scalar_t__ (* start_hw ) (struct ixgbe_hw*) ;int (* init_led_link_act ) (struct ixgbe_hw*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
typedef scalar_t__ s32 ;


 scalar_t__ FUNC_0 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*) ;
 int FUNC_2 (struct ixgbe_hw*) ;

s32 FUNC_3(struct ixgbe_hw *VAR_0)
{
 s32 VAR_1;


 VAR_1 = VAR_0->mac.ops.reset_hw(VAR_0);

 if (VAR_1 == 0) {

  VAR_1 = VAR_0->mac.ops.start_hw(VAR_0);
 }


 if (VAR_0->mac.ops.init_led_link_act)
  VAR_0->mac.ops.init_led_link_act(VAR_0);

 return VAR_1;
}
