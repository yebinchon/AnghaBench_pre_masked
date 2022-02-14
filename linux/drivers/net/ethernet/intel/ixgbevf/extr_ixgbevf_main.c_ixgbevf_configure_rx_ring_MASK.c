
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ length; } ;
struct TYPE_5__ {TYPE_1__ upper; } ;
union ixgbe_adv_rx_desc {TYPE_2__ wb; } ;
typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct ixgbevf_rx_buffer {int dummy; } ;
struct ixgbevf_ring {int dma; int count; scalar_t__ next_to_alloc; scalar_t__ next_to_use; scalar_t__ next_to_clean; int rx_buffer_info; scalar_t__ tail; int reg_idx; } ;
struct TYPE_6__ {scalar_t__ type; } ;
struct ixgbe_hw {TYPE_3__ mac; } ;
struct ixgbevf_adapter {struct ixgbe_hw hw; scalar_t__ io_addr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 union ixgbe_adv_rx_desc* FUNC_1 (struct ixgbevf_ring*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct ixgbe_hw*,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct ixgbe_hw*,scalar_t__,int) ;
 scalar_t__ VAR_7 ;
 int FUNC_11 (struct ixgbevf_ring*,int ) ;
 int FUNC_12 (struct ixgbevf_adapter*,struct ixgbevf_ring*,int ) ;
 int FUNC_13 (struct ixgbevf_ring*) ;
 int FUNC_14 (struct ixgbevf_adapter*,struct ixgbevf_ring*) ;
 int FUNC_15 (struct ixgbevf_adapter*,struct ixgbevf_ring*) ;
 int FUNC_16 (int ,int ,int) ;
 scalar_t__ FUNC_17 (struct ixgbevf_ring*) ;
 int FUNC_18 (struct ixgbevf_ring*) ;

__attribute__((used)) static void FUNC_19(struct ixgbevf_adapter *VAR_8,
          struct ixgbevf_ring *VAR_9)
{
 struct ixgbe_hw *VAR_10 = &VAR_8->hw;
 union ixgbe_adv_rx_desc *VAR_11;
 u64 VAR_12 = VAR_9->dma;
 u32 VAR_13;
 u8 VAR_14 = VAR_9->reg_idx;


 VAR_13 = FUNC_2(VAR_10, FUNC_9(VAR_14));
 FUNC_14(VAR_8, VAR_9);

 FUNC_10(VAR_10, FUNC_5(VAR_14), VAR_12 & FUNC_0(32));
 FUNC_10(VAR_10, FUNC_4(VAR_14), VAR_12 >> 32);
 FUNC_10(VAR_10, FUNC_7(VAR_14),
   VAR_9->count * sizeof(union ixgbe_adv_rx_desc));



 FUNC_10(VAR_10, FUNC_3(VAR_14),
   VAR_2);







 FUNC_10(VAR_10, FUNC_6(VAR_14), 0);
 FUNC_10(VAR_10, FUNC_8(VAR_14), 0);
 VAR_9->tail = VAR_8->io_addr + FUNC_8(VAR_14);


 FUNC_16(VAR_9->rx_buffer_info, 0,
        sizeof(struct ixgbevf_rx_buffer) * VAR_9->count);


 VAR_11 = FUNC_1(VAR_9, 0);
 VAR_11->wb.upper.length = 0;


 VAR_9->next_to_clean = 0;
 VAR_9->next_to_use = 0;
 VAR_9->next_to_alloc = 0;

 FUNC_12(VAR_8, VAR_9, VAR_14);


 if (VAR_8->hw.mac.type != VAR_7) {
  VAR_13 &= ~(VAR_4 |
       VAR_5);



  if (FUNC_17(VAR_9) &&
      !FUNC_18(VAR_9))
   VAR_13 |= VAR_0 |
      VAR_5;

 }

 VAR_13 |= VAR_3 | VAR_6;
 FUNC_10(VAR_10, FUNC_9(VAR_14), VAR_13);

 FUNC_15(VAR_8, VAR_9);
 FUNC_11(VAR_9, FUNC_13(VAR_9));
}
