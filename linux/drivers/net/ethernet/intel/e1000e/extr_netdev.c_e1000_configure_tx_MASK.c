
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct e1000_tx_desc {int dummy; } ;
struct e1000_ring {int dma; int count; scalar_t__ tail; scalar_t__ head; } ;
struct TYPE_3__ {int (* config_collision_dist ) (struct e1000_hw*) ;} ;
struct TYPE_4__ {scalar_t__ type; TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ mac; scalar_t__ hw_addr; } ;
struct e1000_adapter {int flags2; int tx_int_delay; int tx_abs_int_delay; int flags; int txd_cmd; struct e1000_hw hw; struct e1000_ring* tx_ring; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_3 (int) ;
 int VAR_23 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_24 ;
 int FUNC_9 (int) ;
 scalar_t__ VAR_25 ;
 int FUNC_10 (struct e1000_ring*,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (struct e1000_hw*) ;
 int FUNC_14 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_15(struct e1000_adapter *VAR_26)
{
 struct e1000_hw *VAR_27 = &VAR_26->hw;
 struct e1000_ring *VAR_28 = VAR_26->tx_ring;
 u64 VAR_29;
 u32 VAR_30, VAR_31, VAR_32;


 VAR_29 = VAR_28->dma;
 VAR_30 = VAR_28->count * sizeof(struct e1000_tx_desc);
 FUNC_12(FUNC_5(0), (VAR_29 & FUNC_0(32)));
 FUNC_12(FUNC_4(0), (VAR_29 >> 32));
 FUNC_12(FUNC_7(0), VAR_30);
 FUNC_12(FUNC_6(0), 0);
 FUNC_12(FUNC_8(0), 0);
 VAR_28->head = VAR_26->hw.hw_addr + FUNC_1(0);
 VAR_28->tail = VAR_26->hw.hw_addr + FUNC_2(0);

 FUNC_14(0, VAR_28->head);
 if (VAR_26->flags2 & VAR_17)
  FUNC_10(VAR_28, 0);
 else
  FUNC_14(0, VAR_28->tail);


 FUNC_12(VAR_24, VAR_26->tx_int_delay);

 FUNC_12(VAR_22, VAR_26->tx_abs_int_delay);

 if (VAR_26->flags2 & VAR_16) {
  u32 VAR_33 = FUNC_11(FUNC_9(0));

  VAR_33 &= ~(VAR_10 | VAR_9 |
       VAR_11);
  VAR_33 |= VAR_8;
  FUNC_12(FUNC_9(0), VAR_33);
 }

 FUNC_12(FUNC_9(1), FUNC_11(FUNC_9(0)));


 VAR_31 = FUNC_11(VAR_23);
 VAR_31 &= ~VAR_5;
 VAR_31 |= VAR_6 | VAR_7 |
  (VAR_0 << VAR_1);

 if (VAR_26->flags & VAR_19) {
  VAR_32 = FUNC_11(FUNC_3(0));




  VAR_32 |= FUNC_0(21);
  FUNC_12(FUNC_3(0), VAR_32);
 }


 if (VAR_26->flags & VAR_18) {
  VAR_32 = FUNC_11(FUNC_3(0));
  VAR_32 |= 1;
  FUNC_12(FUNC_3(0), VAR_32);
  VAR_32 = FUNC_11(FUNC_3(1));
  VAR_32 |= 1;
  FUNC_12(FUNC_3(1), VAR_32);
 }


 VAR_26->txd_cmd = VAR_12 | VAR_14;


 if (VAR_26->tx_int_delay)
  VAR_26->txd_cmd |= VAR_13;


 VAR_26->txd_cmd |= VAR_15;

 FUNC_12(VAR_23, VAR_31);

 VAR_27->mac.ops.config_collision_dist(VAR_27);


 if (VAR_27->mac.type == VAR_25) {
  u32 VAR_34;

  VAR_34 = FUNC_11(VAR_20);
  VAR_34 |= VAR_2;
  FUNC_12(VAR_20, VAR_34);

  VAR_34 = FUNC_11(FUNC_3(0));




  VAR_34 &= ~VAR_4;
  VAR_34 |= VAR_3;
  FUNC_12(FUNC_3(0), VAR_34);
 }
}
