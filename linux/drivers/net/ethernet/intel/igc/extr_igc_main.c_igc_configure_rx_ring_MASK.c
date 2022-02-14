
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ length; } ;
struct TYPE_4__ {TYPE_1__ upper; } ;
union igc_adv_rx_desc {TYPE_2__ wb; } ;
typedef int u64 ;
typedef int u32 ;
struct igc_rx_buffer {int dummy; } ;
struct igc_ring {int reg_idx; int dma; int count; int rx_buffer_info; scalar_t__ next_to_use; scalar_t__ next_to_clean; scalar_t__ tail; } ;
struct igc_hw {int dummy; } ;
struct igc_adapter {scalar_t__ io_addr; struct igc_hw hw; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int) ;
 int VAR_2 ;
 union igc_adv_rx_desc* FUNC_6 (struct igc_ring*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (int ,int ,int) ;
 scalar_t__ FUNC_9 (struct igc_ring*) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_12(struct igc_adapter *VAR_10,
      struct igc_ring *VAR_11)
{
 struct igc_hw *VAR_12 = &VAR_10->hw;
 union igc_adv_rx_desc *VAR_13;
 int VAR_14 = VAR_11->reg_idx;
 u32 VAR_15 = 0, VAR_16 = 0;
 u64 VAR_17 = VAR_11->dma;


 FUNC_10(FUNC_5(VAR_14), 0);


 FUNC_10(FUNC_1(VAR_14),
      VAR_17 & 0x00000000ffffffffULL);
 FUNC_10(FUNC_0(VAR_14), VAR_17 >> 32);
 FUNC_10(FUNC_3(VAR_14),
      VAR_11->count * sizeof(union igc_adv_rx_desc));


 VAR_11->tail = VAR_10->io_addr + FUNC_4(VAR_14);
 FUNC_10(FUNC_2(VAR_14), 0);
 FUNC_11(0, VAR_11->tail);


 VAR_11->next_to_clean = 0;
 VAR_11->next_to_use = 0;


 VAR_15 = VAR_3 << VAR_7;
 if (FUNC_9(VAR_11))
  VAR_15 |= VAR_1 >> VAR_8;
 else
  VAR_15 |= VAR_0 >> VAR_8;
 VAR_15 |= VAR_9;

 FUNC_10(FUNC_7(VAR_14), VAR_15);

 VAR_16 |= VAR_5;
 VAR_16 |= VAR_4 << 8;
 VAR_16 |= VAR_6 << 16;


 FUNC_8(VAR_11->rx_buffer_info, 0,
        sizeof(struct igc_rx_buffer) * VAR_11->count);


 VAR_13 = FUNC_6(VAR_11, 0);
 VAR_13->wb.upper.length = 0;


 VAR_16 |= VAR_2;

 FUNC_10(FUNC_5(VAR_14), VAR_16);
}
