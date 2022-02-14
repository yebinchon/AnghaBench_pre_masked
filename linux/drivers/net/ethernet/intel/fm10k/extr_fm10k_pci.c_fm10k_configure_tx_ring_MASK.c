
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct fm10k_tx_desc {int dummy; } ;
struct fm10k_ring {int dma; int count; int queue_index; TYPE_1__* q_vector; int netdev; int state; scalar_t__ next_to_use; scalar_t__ next_to_clean; int * tail; int reg_idx; } ;
struct fm10k_hw {int dummy; } ;
struct fm10k_intfc {int * uc_addr; struct fm10k_hw hw; } ;
struct TYPE_2__ {int v_idx; int affinity_mask; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_2 (int ) ;
 int VAR_2 ;
 size_t FUNC_3 (int ) ;
 size_t FUNC_4 (int ) ;
 size_t FUNC_5 (int ) ;
 size_t FUNC_6 (int ) ;
 size_t FUNC_7 (int ) ;
 size_t FUNC_8 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_9 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (struct fm10k_hw*) ;
 int FUNC_11 (struct fm10k_hw*,size_t,int) ;
 int FUNC_12 (int ,int *,int ) ;
 int FUNC_13 (int ,int ) ;

__attribute__((used)) static void FUNC_14(struct fm10k_intfc *VAR_7,
        struct fm10k_ring *VAR_8)
{
 struct fm10k_hw *VAR_9 = &VAR_7->hw;
 u64 VAR_10 = VAR_8->dma;
 u32 VAR_11 = VAR_8->count * sizeof(struct fm10k_tx_desc);
 u32 VAR_12 = VAR_0;
 u32 VAR_13 = FUNC_0(VAR_4) | VAR_3;
 u8 VAR_14 = VAR_8->reg_idx;


 FUNC_11(VAR_9, FUNC_8(VAR_14), 0);
 FUNC_10(VAR_9);




 FUNC_11(VAR_9, FUNC_4(VAR_14), VAR_10 & FUNC_1(32));
 FUNC_11(VAR_9, FUNC_3(VAR_14), VAR_10 >> 32);
 FUNC_11(VAR_9, FUNC_6(VAR_14), VAR_11);


 FUNC_11(VAR_9, FUNC_5(VAR_14), 0);
 FUNC_11(VAR_9, FUNC_7(VAR_14), 0);


 VAR_8->tail = &VAR_7->uc_addr[FUNC_7(VAR_14)];


 VAR_8->next_to_clean = 0;
 VAR_8->next_to_use = 0;


 if (VAR_8->q_vector) {
  VAR_12 = VAR_8->q_vector->v_idx + VAR_5;
  VAR_12 |= VAR_1;
 }

 FUNC_11(VAR_9, FUNC_9(VAR_14), VAR_12);


 FUNC_11(VAR_9, FUNC_2(VAR_14),
   VAR_2);


 if (!FUNC_13(VAR_6, VAR_8->state) &&
     VAR_8->q_vector)
  FUNC_12(VAR_8->netdev,
        &VAR_8->q_vector->affinity_mask,
        VAR_8->queue_index);


 FUNC_11(VAR_9, FUNC_8(VAR_14), VAR_13);
}
