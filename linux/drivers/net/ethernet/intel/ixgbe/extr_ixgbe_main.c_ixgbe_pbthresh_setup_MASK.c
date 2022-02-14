
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* high_water; scalar_t__* low_water; } ;
struct ixgbe_hw {TYPE_1__ fc; } ;
struct ixgbe_adapter {int hw_tcs; struct ixgbe_hw hw; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ixgbe_adapter*,int) ;
 scalar_t__ FUNC_1 (struct ixgbe_adapter*,int) ;

__attribute__((used)) static void FUNC_2(struct ixgbe_adapter *VAR_1)
{
 struct ixgbe_hw *VAR_2 = &VAR_1->hw;
 int VAR_3 = VAR_1->hw_tcs;
 int VAR_4;

 if (!VAR_3)
  VAR_3 = 1;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  VAR_2->fc.high_water[VAR_4] = FUNC_0(VAR_1, VAR_4);
  VAR_2->fc.low_water[VAR_4] = FUNC_1(VAR_1, VAR_4);


  if (VAR_2->fc.low_water[VAR_4] > VAR_2->fc.high_water[VAR_4])
   VAR_2->fc.low_water[VAR_4] = 0;
 }

 for (; VAR_4 < VAR_0; VAR_4++)
  VAR_2->fc.high_water[VAR_4] = 0;
}
