
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union fm10k_rx_desc {int dummy; } fm10k_rx_desc ;
typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct fm10k_ring {int dma; int count; int reg_idx; TYPE_2__* q_vector; int vid; int qos_pc; scalar_t__ next_to_alloc; scalar_t__ next_to_use; scalar_t__ next_to_clean; int * tail; } ;
struct TYPE_3__ {int default_vid; } ;
struct fm10k_hw {TYPE_1__ mac; } ;
struct fm10k_intfc {int rx_pause; int pfc_en; int active_vlans; int * uc_addr; struct fm10k_hw hw; } ;
struct TYPE_4__ {int v_idx; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_2 (int) ;
 size_t FUNC_3 (int) ;
 size_t FUNC_4 (int) ;
 size_t FUNC_5 (int) ;
 size_t FUNC_6 (int) ;
 size_t FUNC_7 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_8 (int) ;
 size_t FUNC_9 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 size_t FUNC_10 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_11 (struct fm10k_ring*,int ) ;
 int FUNC_12 (struct fm10k_ring*) ;
 int FUNC_13 (struct fm10k_hw*,size_t) ;
 int FUNC_14 (struct fm10k_hw*) ;
 int FUNC_15 (struct fm10k_hw*,size_t,int) ;
 scalar_t__ FUNC_16 (int ,int ) ;

__attribute__((used)) static void FUNC_17(struct fm10k_intfc *VAR_11,
        struct fm10k_ring *VAR_12)
{
 u64 VAR_13 = VAR_12->dma;
 struct fm10k_hw *VAR_14 = &VAR_11->hw;
 u32 VAR_15 = VAR_12->count * sizeof(union fm10k_rx_desc);
 u32 VAR_16, VAR_17 = VAR_3;
 u32 VAR_18 = VAR_7;
 u32 VAR_19 = VAR_0;
 u8 VAR_20 = VAR_11->rx_pause;
 u8 VAR_21 = VAR_12->reg_idx;


 VAR_16 = FUNC_13(VAR_14, FUNC_9(VAR_21));
 VAR_16 &= ~VAR_4;
 FUNC_15(VAR_14, FUNC_9(VAR_21), VAR_16);
 FUNC_14(VAR_14);




 FUNC_15(VAR_14, FUNC_3(VAR_21), VAR_13 & FUNC_1(32));
 FUNC_15(VAR_14, FUNC_2(VAR_21), VAR_13 >> 32);
 FUNC_15(VAR_14, FUNC_5(VAR_21), VAR_15);


 FUNC_15(VAR_14, FUNC_4(VAR_21), 0);
 FUNC_15(VAR_14, FUNC_6(VAR_21), 0);


 VAR_12->tail = &VAR_11->uc_addr[FUNC_6(VAR_21)];


 VAR_12->next_to_clean = 0;
 VAR_12->next_to_use = 0;
 VAR_12->next_to_alloc = 0;


 VAR_18 |= VAR_5 >> VAR_6;


 VAR_18 |= VAR_8;
 FUNC_15(VAR_14, FUNC_10(VAR_21), VAR_18);






 if (!(VAR_20 & FUNC_0(VAR_12->qos_pc)))
  VAR_17 |= VAR_2;

 FUNC_15(VAR_14, FUNC_7(VAR_21), VAR_17);


 VAR_12->vid = VAR_14->mac.default_vid;


 if (FUNC_16(VAR_14->mac.default_vid, VAR_11->active_vlans))
  VAR_12->vid |= VAR_9;


 if (VAR_12->q_vector) {
  VAR_19 = VAR_12->q_vector->v_idx + VAR_10;
  VAR_19 |= VAR_1;
 }

 FUNC_15(VAR_14, FUNC_8(VAR_21), VAR_19);


 VAR_16 = FUNC_13(VAR_14, FUNC_9(VAR_21));
 VAR_16 |= VAR_4;
 FUNC_15(VAR_14, FUNC_9(VAR_21), VAR_16);


 FUNC_11(VAR_12, FUNC_12(VAR_12));
}
