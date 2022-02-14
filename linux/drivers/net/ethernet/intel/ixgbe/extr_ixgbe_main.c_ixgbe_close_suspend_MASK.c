
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* enter_lplu ) (TYPE_3__*) ;} ;
struct TYPE_5__ {int reset_disable; TYPE_1__ ops; } ;
struct TYPE_6__ {TYPE_2__ phy; } ;
struct ixgbe_adapter {TYPE_3__ hw; } ;


 int FUNC_0 (struct ixgbe_adapter*) ;
 int FUNC_1 (struct ixgbe_adapter*) ;
 int FUNC_2 (struct ixgbe_adapter*) ;
 int FUNC_3 (struct ixgbe_adapter*) ;
 int FUNC_4 (struct ixgbe_adapter*) ;
 int FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_6(struct ixgbe_adapter *VAR_0)
{
 FUNC_4(VAR_0);

 if (VAR_0->hw.phy.ops.enter_lplu) {
  VAR_0->hw.phy.reset_disable = 1;
  FUNC_0(VAR_0);
  VAR_0->hw.phy.ops.enter_lplu(&VAR_0->hw);
  VAR_0->hw.phy.reset_disable = 0;
 } else {
  FUNC_0(VAR_0);
 }

 FUNC_3(VAR_0);

 FUNC_2(VAR_0);
 FUNC_1(VAR_0);
}
