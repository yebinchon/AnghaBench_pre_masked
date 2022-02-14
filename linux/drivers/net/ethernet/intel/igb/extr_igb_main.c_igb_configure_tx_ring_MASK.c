
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union e1000_adv_tx_desc {int dummy; } e1000_adv_tx_desc ;
typedef int u64 ;
typedef int u32 ;
struct igb_tx_buffer {int dummy; } ;
struct igb_ring {int dma; int reg_idx; int count; int tx_buffer_info; scalar_t__ tail; } ;
struct e1000_hw {int dummy; } ;
struct igb_adapter {scalar_t__ io_addr; struct e1000_hw hw; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,scalar_t__) ;

void FUNC_9(struct igb_adapter *VAR_4,
      struct igb_ring *VAR_5)
{
 struct e1000_hw *VAR_6 = &VAR_4->hw;
 u32 VAR_7 = 0;
 u64 VAR_8 = VAR_5->dma;
 int VAR_9 = VAR_5->reg_idx;

 FUNC_7(FUNC_3(VAR_9),
      VAR_5->count * sizeof(union e1000_adv_tx_desc));
 FUNC_7(FUNC_1(VAR_9),
      VAR_8 & 0x00000000ffffffffULL);
 FUNC_7(FUNC_0(VAR_9), VAR_8 >> 32);

 VAR_5->tail = VAR_4->io_addr + FUNC_4(VAR_9);
 FUNC_7(FUNC_2(VAR_9), 0);
 FUNC_8(0, VAR_5->tail);

 VAR_7 |= VAR_2;
 VAR_7 |= VAR_1 << 8;
 VAR_7 |= VAR_3 << 16;


 FUNC_6(VAR_5->tx_buffer_info, 0,
        sizeof(struct igb_tx_buffer) * VAR_5->count);

 VAR_7 |= VAR_0;
 FUNC_7(FUNC_5(VAR_9), VAR_7);
}
