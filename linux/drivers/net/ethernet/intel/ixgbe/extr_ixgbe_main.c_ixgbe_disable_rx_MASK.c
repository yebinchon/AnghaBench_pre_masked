
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ixgbe_ring {int reg_idx; } ;
struct TYPE_3__ {int (* disable_rx ) (struct ixgbe_hw*) ;} ;
struct TYPE_4__ {scalar_t__ type; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; int hw_addr; } ;
struct ixgbe_adapter {int num_rx_queues; struct ixgbe_ring** rx_ring; struct ixgbe_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;
 int VAR_5 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct ixgbe_adapter*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct ixgbe_hw*) ;
 int FUNC_7 (unsigned long,unsigned long) ;

void FUNC_8(struct ixgbe_adapter *VAR_7)
{
 unsigned long VAR_8, VAR_9;
 struct ixgbe_hw *VAR_10 = &VAR_7->hw;
 int VAR_11, VAR_12;
 u32 VAR_13;


 VAR_10->mac.ops.disable_rx(VAR_10);

 if (FUNC_5(VAR_10->hw_addr))
  return;


 for (VAR_11 = 0; VAR_11 < VAR_7->num_rx_queues; VAR_11++) {
  struct ixgbe_ring *VAR_14 = VAR_7->rx_ring[VAR_11];
  u8 VAR_15 = VAR_14->reg_idx;

  VAR_13 = FUNC_0(VAR_10, FUNC_1(VAR_15));
  VAR_13 &= ~VAR_3;
  VAR_13 |= VAR_4;


  FUNC_2(VAR_10, FUNC_1(VAR_15), VAR_13);
 }


 if (VAR_10->mac.type == VAR_6 &&
     !(FUNC_0(VAR_10, VAR_0) & VAR_1))
  return;
 VAR_9 = FUNC_4(VAR_7) / 100;

 VAR_12 = VAR_2;
 VAR_8 = VAR_9;

 while (VAR_12--) {
  FUNC_7(VAR_8, VAR_8 + 10);
  VAR_8 += VAR_9 * 2;
  VAR_13 = 0;






  for (VAR_11 = 0; VAR_11 < VAR_7->num_rx_queues; VAR_11++) {
   struct ixgbe_ring *VAR_16 = VAR_7->rx_ring[VAR_11];
   u8 VAR_17 = VAR_16->reg_idx;

   VAR_13 |= FUNC_0(VAR_10, FUNC_1(VAR_17));
  }

  if (!(VAR_13 & VAR_3))
   return;
 }

 FUNC_3(VAR_5,
       "RXDCTL.ENABLE for one or more queues not cleared within the polling period\n");
}
