
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ max_tx_queues; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ixgbe_hw*) ;
 int FUNC_1 (struct ixgbe_hw*,int ,scalar_t__) ;

s32 FUNC_2(struct ixgbe_hw *VAR_2)
{
 u32 VAR_3;


 for (VAR_3 = 0; VAR_3 < VAR_2->mac.max_tx_queues; VAR_3++) {
  FUNC_1(VAR_2, VAR_1, VAR_3);
  FUNC_1(VAR_2, VAR_0, 0);
 }
 FUNC_0(VAR_2);

 return 0;
}
