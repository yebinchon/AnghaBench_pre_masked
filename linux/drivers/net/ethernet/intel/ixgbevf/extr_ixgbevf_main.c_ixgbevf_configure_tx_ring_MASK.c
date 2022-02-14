
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ixgbe_adv_tx_desc {int dummy; } ixgbe_adv_tx_desc ;
typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct ixgbevf_tx_buffer {int dummy; } ;
struct ixgbevf_ring {int dma; int count; int state; int tx_buffer_info; scalar_t__ next_to_use; scalar_t__ next_to_clean; scalar_t__ tail; int reg_idx; } ;
struct ixgbe_hw {int dummy; } ;
struct ixgbevf_adapter {scalar_t__ io_addr; struct ixgbe_hw hw; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ixgbe_hw*,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (struct ixgbe_hw*) ;
 int FUNC_12 (struct ixgbe_hw*,scalar_t__,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (struct ixgbe_hw*,char*,int ) ;
 int FUNC_15 (int ,int ,int) ;
 int FUNC_16 (int,int) ;

__attribute__((used)) static void FUNC_17(struct ixgbevf_adapter *VAR_6,
          struct ixgbevf_ring *VAR_7)
{
 struct ixgbe_hw *VAR_8 = &VAR_6->hw;
 u64 VAR_9 = VAR_7->dma;
 int VAR_10 = 10;
 u32 VAR_11 = VAR_2;
 u8 VAR_12 = VAR_7->reg_idx;


 FUNC_12(VAR_8, FUNC_10(VAR_12), VAR_3);
 FUNC_11(VAR_8);

 FUNC_12(VAR_8, FUNC_4(VAR_12), VAR_9 & FUNC_0(32));
 FUNC_12(VAR_8, FUNC_3(VAR_12), VAR_9 >> 32);
 FUNC_12(VAR_8, FUNC_6(VAR_12),
   VAR_7->count * sizeof(union ixgbe_adv_tx_desc));


 FUNC_12(VAR_8, FUNC_8(VAR_12), 0);
 FUNC_12(VAR_8, FUNC_9(VAR_12), 0);


 FUNC_12(VAR_8, FUNC_2(VAR_12),
   (VAR_1 |
    VAR_0));


 FUNC_12(VAR_8, FUNC_5(VAR_12), 0);
 FUNC_12(VAR_8, FUNC_7(VAR_12), 0);
 VAR_7->tail = VAR_6->io_addr + FUNC_7(VAR_12);


 VAR_7->next_to_clean = 0;
 VAR_7->next_to_use = 0;





 VAR_11 |= (8 << 16);


 VAR_11 |= (1u << 8) |
     32;


 FUNC_15(VAR_7->tx_buffer_info, 0,
        sizeof(struct ixgbevf_tx_buffer) * VAR_7->count);

 FUNC_13(VAR_4, &VAR_7->state);
 FUNC_13(VAR_5, &VAR_7->state);

 FUNC_12(VAR_8, FUNC_10(VAR_12), VAR_11);


 do {
  FUNC_16(1000, 2000);
  VAR_11 = FUNC_1(VAR_8, FUNC_10(VAR_12));
 } while (--VAR_10 && !(VAR_11 & VAR_2));
 if (!VAR_10)
  FUNC_14(VAR_8, "Could not enable Tx Queue %d\n", VAR_12);
}
