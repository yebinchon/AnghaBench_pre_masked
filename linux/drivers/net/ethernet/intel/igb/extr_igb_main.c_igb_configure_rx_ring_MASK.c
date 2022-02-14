
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ length; } ;
struct TYPE_6__ {TYPE_2__ upper; } ;
union e1000_adv_rx_desc {TYPE_3__ wb; } ;
typedef int u64 ;
typedef int u32 ;
struct igb_rx_buffer {int dummy; } ;
struct igb_ring {int dma; int reg_idx; int count; int rx_buffer_info; scalar_t__ tail; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ mac; } ;
struct igb_adapter {int num_rx_queues; scalar_t__ vfs_allocated_count; scalar_t__ io_addr; struct e1000_hw hw; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_0 ;
 int FUNC_6 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 union e1000_adv_rx_desc* FUNC_7 (struct igb_ring*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_8 (struct igb_adapter*,int,int) ;
 int FUNC_9 (int ,int ,int) ;
 scalar_t__ FUNC_10 (struct igb_ring*) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int ,scalar_t__) ;

void FUNC_13(struct igb_adapter *VAR_13,
      struct igb_ring *VAR_14)
{
 struct e1000_hw *VAR_15 = &VAR_13->hw;
 union e1000_adv_rx_desc *VAR_16;
 u64 VAR_17 = VAR_14->dma;
 int VAR_18 = VAR_14->reg_idx;
 u32 VAR_19 = 0, VAR_20 = 0;


 FUNC_11(FUNC_5(VAR_18), 0);


 FUNC_11(FUNC_1(VAR_18),
      VAR_17 & 0x00000000ffffffffULL);
 FUNC_11(FUNC_0(VAR_18), VAR_17 >> 32);
 FUNC_11(FUNC_3(VAR_18),
      VAR_14->count * sizeof(union e1000_adv_rx_desc));


 VAR_14->tail = VAR_13->io_addr + FUNC_4(VAR_18);
 FUNC_11(FUNC_2(VAR_18), 0);
 FUNC_12(0, VAR_14->tail);


 VAR_19 = VAR_8 << VAR_1;
 if (FUNC_10(VAR_14))
  VAR_19 |= VAR_7 >> VAR_2;
 else
  VAR_19 |= VAR_6 >> VAR_2;
 VAR_19 |= VAR_3;
 if (VAR_15->mac.type >= VAR_12)
  VAR_19 |= VAR_5;

 if (VAR_13->vfs_allocated_count || VAR_13->num_rx_queues > 1)
  VAR_19 |= VAR_4;

 FUNC_11(FUNC_6(VAR_18), VAR_19);


 FUNC_8(VAR_13, VAR_18 & 0x7, 1);

 VAR_20 |= VAR_10;
 VAR_20 |= VAR_9 << 8;
 VAR_20 |= VAR_11 << 16;


 FUNC_9(VAR_14->rx_buffer_info, 0,
        sizeof(struct igb_rx_buffer) * VAR_14->count);


 VAR_16 = FUNC_7(VAR_14, 0);
 VAR_16->wb.upper.length = 0;


 VAR_20 |= VAR_0;
 FUNC_11(FUNC_5(VAR_18), VAR_20);
}
