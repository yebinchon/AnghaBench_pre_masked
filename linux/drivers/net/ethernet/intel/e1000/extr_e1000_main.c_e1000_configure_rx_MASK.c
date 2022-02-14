
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct e1000_rx_desc {int dummy; } ;
struct e1000_hw {scalar_t__ mac_type; } ;
struct e1000_adapter {int rx_int_delay; int rx_abs_int_delay; scalar_t__ itr_setting; int itr; int num_rx_queues; scalar_t__ rx_csum; TYPE_2__* rx_ring; int alloc_rx_buf; int clean_rx; TYPE_1__* netdev; struct e1000_hw hw; } ;
struct TYPE_4__ {int count; int dma; int rdt; int rdh; } ;
struct TYPE_3__ {scalar_t__ mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct e1000_adapter *VAR_23)
{
 u64 VAR_24;
 struct e1000_hw *VAR_25 = &VAR_23->hw;
 u32 VAR_26, VAR_27, VAR_28;

 if (VAR_23->netdev->mtu > VAR_6) {
  VAR_26 = VAR_23->rx_ring[0].count *
   sizeof(struct e1000_rx_desc);
  VAR_23->clean_rx = VAR_21;
  VAR_23->alloc_rx_buf = VAR_19;
 } else {
  VAR_26 = VAR_23->rx_ring[0].count *
   sizeof(struct e1000_rx_desc);
  VAR_23->clean_rx = VAR_22;
  VAR_23->alloc_rx_buf = VAR_20;
 }


 VAR_27 = FUNC_0(VAR_9);
 FUNC_1(VAR_9, VAR_27 & ~VAR_2);


 FUNC_1(VAR_15, VAR_23->rx_int_delay);

 if (VAR_25->mac_type >= VAR_17) {
  FUNC_1(VAR_8, VAR_23->rx_abs_int_delay);
  if (VAR_23->itr_setting != 0)
   FUNC_1(VAR_7, 1000000000 / (VAR_23->itr * 256));
 }




 switch (VAR_23->num_rx_queues) {
 case 1:
 default:
  VAR_24 = VAR_23->rx_ring[0].dma;
  FUNC_1(VAR_13, VAR_26);
  FUNC_1(VAR_10, (VAR_24 >> 32));
  FUNC_1(VAR_11, (VAR_24 & 0x00000000ffffffffULL));
  FUNC_1(VAR_14, 0);
  FUNC_1(VAR_12, 0);
  VAR_23->rx_ring[0].rdh = ((VAR_25->mac_type >= VAR_18) ?
        VAR_3 : VAR_0);
  VAR_23->rx_ring[0].rdt = ((VAR_25->mac_type >= VAR_18) ?
        VAR_4 : VAR_1);
  break;
 }


 if (VAR_25->mac_type >= VAR_18) {
  VAR_28 = FUNC_0(VAR_16);
  if (VAR_23->rx_csum)
   VAR_28 |= VAR_5;
  else

   VAR_28 &= ~VAR_5;
  FUNC_1(VAR_16, VAR_28);
 }


 FUNC_1(VAR_9, VAR_27 | VAR_2);
}
