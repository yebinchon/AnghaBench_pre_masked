
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ixgbe_adv_tx_desc {int dummy; } ixgbe_adv_tx_desc ;
typedef int u8 ;
typedef int u64 ;
typedef unsigned int u32 ;
struct ixgbe_tx_buffer {int dummy; } ;
struct ixgbe_ring {int dma; int count; int tx_buffer_info; int state; int queue_index; int netdev; struct ixgbe_q_vector* q_vector; scalar_t__ atr_sample_rate; scalar_t__ atr_count; scalar_t__ tail; int * xsk_umem; int reg_idx; } ;
struct ixgbe_q_vector {scalar_t__ itr; int affinity_mask; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
struct ixgbe_adapter {int flags; scalar_t__ atr_sample_rate; scalar_t__ io_addr; struct ixgbe_hw hw; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_1 (struct ixgbe_hw*,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 unsigned int VAR_4 ;
 int FUNC_8 (struct ixgbe_hw*) ;
 int FUNC_9 (struct ixgbe_hw*,scalar_t__,unsigned int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (struct ixgbe_hw*,char*,int ) ;
 scalar_t__ VAR_8 ;
 int * FUNC_12 (struct ixgbe_adapter*,struct ixgbe_ring*) ;
 int FUNC_13 (int ,int ,int) ;
 int FUNC_14 (int ,int *,int ) ;
 scalar_t__ FUNC_15 (struct ixgbe_ring*) ;
 int FUNC_16 (int ,int *) ;
 int FUNC_17 (int ,int *) ;
 int FUNC_18 (int,int) ;

void FUNC_19(struct ixgbe_adapter *VAR_9,
        struct ixgbe_ring *VAR_10)
{
 struct ixgbe_hw *VAR_11 = &VAR_9->hw;
 u64 VAR_12 = VAR_10->dma;
 int VAR_13 = 10;
 u32 VAR_14 = VAR_4;
 u8 VAR_15 = VAR_10->reg_idx;

 VAR_10->xsk_umem = ((void*)0);
 if (FUNC_15(VAR_10))
  VAR_10->xsk_umem = FUNC_12(VAR_9, VAR_10);


 FUNC_9(VAR_11, FUNC_7(VAR_15), 0);
 FUNC_8(VAR_11);

 FUNC_9(VAR_11, FUNC_3(VAR_15),
   (VAR_12 & FUNC_0(32)));
 FUNC_9(VAR_11, FUNC_2(VAR_15), (VAR_12 >> 32));
 FUNC_9(VAR_11, FUNC_5(VAR_15),
   VAR_10->count * sizeof(union ixgbe_adv_tx_desc));
 FUNC_9(VAR_11, FUNC_4(VAR_15), 0);
 FUNC_9(VAR_11, FUNC_6(VAR_15), 0);
 VAR_10->tail = VAR_9->io_addr + FUNC_6(VAR_15);
 if (!VAR_10->q_vector || (VAR_10->q_vector->itr < VAR_0))
  VAR_14 |= 1u << 16;
 else
  VAR_14 |= 8u << 16;





 VAR_14 |= (1u << 8) |
     32;


 if (VAR_9->flags & VAR_1) {
  VAR_10->atr_sample_rate = VAR_9->atr_sample_rate;
  VAR_10->atr_count = 0;
  FUNC_16(VAR_6, &VAR_10->state);
 } else {
  VAR_10->atr_sample_rate = 0;
 }


 if (!FUNC_17(VAR_7, &VAR_10->state)) {
  struct ixgbe_q_vector *VAR_16 = VAR_10->q_vector;

  if (VAR_16)
   FUNC_14(VAR_10->netdev,
         &VAR_16->affinity_mask,
         VAR_10->queue_index);
 }

 FUNC_10(VAR_5, &VAR_10->state);


 FUNC_13(VAR_10->tx_buffer_info, 0,
        sizeof(struct ixgbe_tx_buffer) * VAR_10->count);


 FUNC_9(VAR_11, FUNC_7(VAR_15), VAR_14);


 if (VAR_11->mac.type == VAR_8 &&
     !(FUNC_1(VAR_11, VAR_2) & VAR_3))
  return;


 do {
  FUNC_18(1000, 2000);
  VAR_14 = FUNC_1(VAR_11, FUNC_7(VAR_15));
 } while (--VAR_13 && !(VAR_14 & VAR_4));
 if (!VAR_13)
  FUNC_11(VAR_11, "Could not enable Tx Queue %d\n", VAR_15);
}
