
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union igc_adv_tx_desc {int dummy; } igc_adv_tx_desc ;
typedef int u64 ;
typedef int u32 ;
struct igc_ring {int reg_idx; int dma; int count; scalar_t__ tail; } ;
struct igc_hw {int dummy; } ;
struct igc_adapter {scalar_t__ io_addr; struct igc_hw hw; } ;


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
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct igc_adapter *VAR_4,
      struct igc_ring *VAR_5)
{
 struct igc_hw *VAR_6 = &VAR_4->hw;
 int VAR_7 = VAR_5->reg_idx;
 u64 VAR_8 = VAR_5->dma;
 u32 VAR_9 = 0;


 FUNC_7(FUNC_5(VAR_7), 0);
 FUNC_8();
 FUNC_6(10);

 FUNC_7(FUNC_3(VAR_7),
      VAR_5->count * sizeof(union igc_adv_tx_desc));
 FUNC_7(FUNC_1(VAR_7),
      VAR_8 & 0x00000000ffffffffULL);
 FUNC_7(FUNC_0(VAR_7), VAR_8 >> 32);

 VAR_5->tail = VAR_4->io_addr + FUNC_4(VAR_7);
 FUNC_7(FUNC_2(VAR_7), 0);
 FUNC_9(0, VAR_5->tail);

 VAR_9 |= VAR_2;
 VAR_9 |= VAR_1 << 8;
 VAR_9 |= VAR_3 << 16;

 VAR_9 |= VAR_0;
 FUNC_7(FUNC_5(VAR_7), VAR_9);
}
