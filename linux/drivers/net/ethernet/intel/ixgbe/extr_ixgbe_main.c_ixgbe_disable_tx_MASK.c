
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ixgbe_ring {int reg_idx; } ;
struct TYPE_2__ {int type; } ;
struct ixgbe_hw {TYPE_1__ mac; int hw_addr; } ;
struct ixgbe_adapter {int num_tx_queues; int num_xdp_queues; struct ixgbe_ring** xdp_ring; struct ixgbe_ring** tx_ring; struct ixgbe_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;
 int VAR_7 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct ixgbe_adapter*) ;





 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (unsigned long,unsigned long) ;

void FUNC_7(struct ixgbe_adapter *VAR_8)
{
 unsigned long VAR_9, VAR_10;
 struct ixgbe_hw *VAR_11 = &VAR_8->hw;
 int VAR_12, VAR_13;
 u32 VAR_14;

 if (FUNC_5(VAR_11->hw_addr))
  return;


 for (VAR_12 = 0; VAR_12 < VAR_8->num_tx_queues; VAR_12++) {
  struct ixgbe_ring *VAR_15 = VAR_8->tx_ring[VAR_12];
  u8 VAR_16 = VAR_15->reg_idx;

  FUNC_2(VAR_11, FUNC_1(VAR_16), VAR_6);
 }


 for (VAR_12 = 0; VAR_12 < VAR_8->num_xdp_queues; VAR_12++) {
  struct ixgbe_ring *VAR_17 = VAR_8->xdp_ring[VAR_12];
  u8 VAR_18 = VAR_17->reg_idx;

  FUNC_2(VAR_11, FUNC_1(VAR_18), VAR_6);
 }






 if (!(FUNC_0(VAR_11, VAR_2) & VAR_3))
  goto dma_engine_disable;
 VAR_10 = FUNC_4(VAR_8) / 100;

 VAR_13 = VAR_4;
 VAR_9 = VAR_10;

 while (VAR_13--) {
  FUNC_6(VAR_9, VAR_9 + 10);
  VAR_9 += VAR_10 * 2;
  VAR_14 = 0;






  for (VAR_12 = 0; VAR_12 < VAR_8->num_tx_queues; VAR_12++) {
   struct ixgbe_ring *VAR_19 = VAR_8->tx_ring[VAR_12];
   u8 VAR_20 = VAR_19->reg_idx;

   VAR_14 |= FUNC_0(VAR_11, FUNC_1(VAR_20));
  }
  for (VAR_12 = 0; VAR_12 < VAR_8->num_xdp_queues; VAR_12++) {
   struct ixgbe_ring *VAR_21 = VAR_8->xdp_ring[VAR_12];
   u8 VAR_22 = VAR_21->reg_idx;

   VAR_14 |= FUNC_0(VAR_11, FUNC_1(VAR_22));
  }

  if (!(VAR_14 & VAR_5))
   goto dma_engine_disable;
 }

 FUNC_3(VAR_7,
       "TXDCTL.ENABLE for one or more queues not cleared within the polling period\n");

dma_engine_disable:

 switch (VAR_11->mac.type) {
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
  FUNC_2(VAR_11, VAR_0,
    (FUNC_0(VAR_11, VAR_0) &
     ~VAR_1));

 default:
  break;
 }
}
