
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union e1000_rx_desc_packet_split {int dummy; } e1000_rx_desc_packet_split ;
typedef union e1000_rx_desc_extended {int dummy; } e1000_rx_desc_extended ;
typedef int u64 ;
typedef int u32 ;
struct e1000_ring {int count; int dma; scalar_t__ tail; scalar_t__ head; } ;
struct e1000_hw {scalar_t__ hw_addr; } ;
struct e1000_adapter {int flags2; int rx_int_delay; int rx_abs_int_delay; scalar_t__ itr_setting; scalar_t__ itr; int max_frame_size; int flags; int pm_qos_req; TYPE_2__* pdev; TYPE_1__* netdev; struct e1000_hw hw; int alloc_rx_buf; int clean_rx; scalar_t__ rx_ps_pages; struct e1000_ring* rx_ring; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {scalar_t__ mtu; int features; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
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
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_9 (int) ;
 int FUNC_10 (int *,char*) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_11 (struct e1000_ring*,int ) ;
 int FUNC_12 (struct e1000_adapter*,scalar_t__) ;
 int FUNC_13 () ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int) ;
 int FUNC_16 (int *,int) ;
 int FUNC_17 (int,int) ;
 int FUNC_18 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_19(struct e1000_adapter *VAR_27)
{
 struct e1000_hw *VAR_28 = &VAR_27->hw;
 struct e1000_ring *VAR_29 = VAR_27->rx_ring;
 u64 VAR_30;
 u32 VAR_31, VAR_32, VAR_33, VAR_34;

 if (VAR_27->rx_ps_pages) {

  VAR_31 = VAR_29->count *
      sizeof(union e1000_rx_desc_packet_split);
  VAR_27->clean_rx = VAR_26;
  VAR_27->alloc_rx_buf = VAR_23;
 } else if (VAR_27->netdev->mtu > VAR_8 + VAR_7) {
  VAR_31 = VAR_29->count * sizeof(union e1000_rx_desc_extended);
  VAR_27->clean_rx = VAR_24;
  VAR_27->alloc_rx_buf = VAR_21;
 } else {
  VAR_31 = VAR_29->count * sizeof(union e1000_rx_desc_extended);
  VAR_27->clean_rx = VAR_25;
  VAR_27->alloc_rx_buf = VAR_22;
 }


 VAR_32 = FUNC_14(VAR_18);
 if (!(VAR_27->flags2 & VAR_10))
  FUNC_15(VAR_18, VAR_32 & ~VAR_3);
 FUNC_13();
 FUNC_17(10000, 11000);

 if (VAR_27->flags2 & VAR_9) {
  FUNC_15(FUNC_9(0), VAR_5);
  FUNC_15(FUNC_9(1), VAR_5);
 }


 FUNC_15(VAR_19, VAR_27->rx_int_delay);


 FUNC_15(VAR_17, VAR_27->rx_abs_int_delay);
 if ((VAR_27->itr_setting != 0) && (VAR_27->itr != 0))
  FUNC_12(VAR_27, VAR_27->itr);

 VAR_34 = FUNC_14(VAR_0);

 VAR_34 |= VAR_1;
 FUNC_15(VAR_13, 0xffffffff);
 FUNC_15(VAR_0, VAR_34);
 FUNC_13();




 VAR_30 = VAR_29->dma;
 FUNC_15(FUNC_5(0), (VAR_30 & FUNC_1(32)));
 FUNC_15(FUNC_4(0), (VAR_30 >> 32));
 FUNC_15(FUNC_7(0), VAR_31);
 FUNC_15(FUNC_6(0), 0);
 FUNC_15(FUNC_8(0), 0);
 VAR_29->head = VAR_27->hw.hw_addr + FUNC_2(0);
 VAR_29->tail = VAR_27->hw.hw_addr + FUNC_3(0);

 FUNC_18(0, VAR_29->head);
 if (VAR_27->flags2 & VAR_11)
  FUNC_11(VAR_29, 0);
 else
  FUNC_18(0, VAR_29->tail);


 VAR_33 = FUNC_14(VAR_20);
 if (VAR_27->netdev->features & VAR_14)
  VAR_33 |= VAR_4;
 else
  VAR_33 &= ~VAR_4;
 FUNC_15(VAR_20, VAR_33);




 if (VAR_27->netdev->mtu > VAR_6) {
  u32 VAR_35 =
      ((FUNC_14(VAR_15) & VAR_2) * 1024 -
       VAR_27->max_frame_size) * 8 / 1000;

  if (VAR_27->flags & VAR_12) {
   u32 VAR_36 = FUNC_14(FUNC_9(0));

   FUNC_15(FUNC_9(0), VAR_36 | 0x3 | FUNC_0(8));
  }

  FUNC_10(&VAR_27->pdev->dev,
    "Some CPU C-states have been disabled in order to enable jumbo frames\n");
  FUNC_16(&VAR_27->pm_qos_req, VAR_35);
 } else {
  FUNC_16(&VAR_27->pm_qos_req,
          VAR_16);
 }


 FUNC_15(VAR_18, VAR_32);
}
