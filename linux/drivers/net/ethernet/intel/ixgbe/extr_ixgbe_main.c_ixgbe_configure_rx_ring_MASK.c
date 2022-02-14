
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ length; } ;
struct TYPE_8__ {TYPE_2__ upper; } ;
union ixgbe_adv_rx_desc {TYPE_3__ wb; } ;
typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct ixgbe_rx_buffer {int dummy; } ;
struct TYPE_9__ {int free; } ;
struct ixgbe_ring {int dma; int count; int rx_buf_len; TYPE_5__* xsk_umem; int rx_buffer_info; int state; scalar_t__ tail; int xdp_rxq; TYPE_4__ zca; int reg_idx; } ;
struct TYPE_6__ {scalar_t__ type; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
struct ixgbe_adapter {scalar_t__ io_addr; struct ixgbe_hw hw; } ;
struct TYPE_10__ {int chunk_size_nohr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct ixgbe_hw*,scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 union ixgbe_adv_rx_desc* FUNC_8 (struct ixgbe_ring*,int ) ;
 int FUNC_9 (struct ixgbe_hw*) ;
 int FUNC_10 (struct ixgbe_hw*,scalar_t__,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_11 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_12 (struct ixgbe_ring*,int ) ;
 int FUNC_13 (struct ixgbe_ring*,int ) ;
 int FUNC_14 (struct ixgbe_adapter*,struct ixgbe_ring*) ;
 int FUNC_15 (struct ixgbe_adapter*,struct ixgbe_ring*) ;
 int FUNC_16 (struct ixgbe_ring*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_17 (struct ixgbe_adapter*,struct ixgbe_ring*) ;
 TYPE_5__* FUNC_18 (struct ixgbe_adapter*,struct ixgbe_ring*) ;
 int VAR_10 ;
 int FUNC_19 (int ,int ,int) ;
 scalar_t__ FUNC_20 (struct ixgbe_ring*) ;
 int FUNC_21 (int ,int *) ;
 int FUNC_22 (int *,int ,TYPE_4__*) ;
 int FUNC_23 (int *) ;

void FUNC_24(struct ixgbe_adapter *VAR_11,
        struct ixgbe_ring *VAR_12)
{
 struct ixgbe_hw *VAR_13 = &VAR_11->hw;
 union ixgbe_adv_rx_desc *VAR_14;
 u64 VAR_15 = VAR_12->dma;
 u32 VAR_16;
 u8 VAR_17 = VAR_12->reg_idx;

 FUNC_23(&VAR_12->xdp_rxq);
 VAR_12->xsk_umem = FUNC_18(VAR_11, VAR_12);
 if (VAR_12->xsk_umem) {
  VAR_12->zca.free = VAR_10;
  FUNC_11(FUNC_22(&VAR_12->xdp_rxq,
         VAR_5,
         &VAR_12->zca));

 } else {
  FUNC_11(FUNC_22(&VAR_12->xdp_rxq,
         VAR_4, ((void*)0)));
 }


 VAR_16 = FUNC_6(VAR_13, FUNC_7(VAR_17));
 VAR_16 &= ~VAR_1;


 FUNC_10(VAR_13, FUNC_7(VAR_17), VAR_16);
 FUNC_9(VAR_13);

 FUNC_10(VAR_13, FUNC_2(VAR_17), (VAR_15 & FUNC_0(32)));
 FUNC_10(VAR_13, FUNC_1(VAR_17), (VAR_15 >> 32));
 FUNC_10(VAR_13, FUNC_4(VAR_17),
   VAR_12->count * sizeof(union ixgbe_adv_rx_desc));

 FUNC_9(VAR_13);

 FUNC_10(VAR_13, FUNC_3(VAR_17), 0);
 FUNC_10(VAR_13, FUNC_5(VAR_17), 0);
 VAR_12->tail = VAR_11->io_addr + FUNC_5(VAR_17);

 FUNC_15(VAR_11, VAR_12);
 FUNC_14(VAR_11, VAR_12);

 if (VAR_13->mac.type == VAR_8) {







  VAR_16 &= ~0x3FFFFF;
  VAR_16 |= 0x080420;


 } else if (VAR_13->mac.type != VAR_9) {
  VAR_16 &= ~(VAR_2 |
       VAR_3);





  if (FUNC_20(VAR_12) &&
      !FUNC_21(VAR_7, &VAR_12->state))
   VAR_16 |= VAR_0 |
      VAR_3;

 }

 if (VAR_12->xsk_umem && VAR_13->mac.type != VAR_9) {
  u32 VAR_18 = VAR_12->xsk_umem->chunk_size_nohr -
      VAR_6;

  VAR_16 &= ~(VAR_2 |
       VAR_3);
  VAR_16 |= VAR_18 | VAR_3;

  VAR_12->rx_buf_len = VAR_18;
 }


 FUNC_19(VAR_12->rx_buffer_info, 0,
        sizeof(struct ixgbe_rx_buffer) * VAR_12->count);


 VAR_14 = FUNC_8(VAR_12, 0);
 VAR_14->wb.upper.length = 0;


 VAR_16 |= VAR_1;
 FUNC_10(VAR_13, FUNC_7(VAR_17), VAR_16);

 FUNC_17(VAR_11, VAR_12);
 if (VAR_12->xsk_umem)
  FUNC_13(VAR_12, FUNC_16(VAR_12));
 else
  FUNC_12(VAR_12, FUNC_16(VAR_12));
}
