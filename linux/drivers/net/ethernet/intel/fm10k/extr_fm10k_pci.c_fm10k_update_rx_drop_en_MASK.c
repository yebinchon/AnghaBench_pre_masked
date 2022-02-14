
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct fm10k_ring {int reg_idx; int qos_pc; } ;
struct fm10k_hw {int dummy; } ;
struct fm10k_intfc {int rx_pause; int pfc_en; int num_rx_queues; struct fm10k_ring** rx_ring; struct fm10k_hw hw; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct fm10k_hw*,int ,int ) ;

void FUNC_3(struct fm10k_intfc *VAR_2)
{
 struct fm10k_hw *VAR_3 = &VAR_2->hw;
 u8 VAR_4 = VAR_2->rx_pause;
 int VAR_5;






 for (VAR_5 = 0; VAR_5 < VAR_2->num_rx_queues; VAR_5++) {
  struct fm10k_ring *VAR_6 = VAR_2->rx_ring[VAR_5];
  u32 VAR_7 = VAR_1;
  u8 VAR_8 = VAR_6->reg_idx;

  if (!(VAR_4 & FUNC_0(VAR_6->qos_pc)))
   VAR_7 |= VAR_0;

  FUNC_2(VAR_3, FUNC_1(VAR_8), VAR_7);
 }
}
