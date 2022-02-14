
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct macb_queue {int tx_ring_dma; int rx_ring_dma; } ;
struct macb {scalar_t__ phy_interface; int caps; unsigned int num_queues; int hw_dma_cap; int rx_intr_mask; struct macb_queue* queues; int rx_frm_len_mask; int duplex; int speed; scalar_t__ jumbo_max_len; TYPE_1__* dev; } ;
struct TYPE_2__ {int flags; int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
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
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_3 (struct macb*,int ,scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct macb*) ;
 int FUNC_6 (struct macb*) ;
 scalar_t__ FUNC_7 (struct macb*) ;
 int FUNC_8 (struct macb*) ;
 int FUNC_9 (struct macb*,int ) ;
 int FUNC_10 (struct macb*) ;
 int FUNC_11 (struct macb*) ;
 int FUNC_12 (struct macb*,int ,int) ;
 int FUNC_13 (struct macb_queue*,int ,int) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static void FUNC_15(struct macb *VAR_33)
{
 struct macb_queue *VAR_34;
 unsigned int VAR_35;

 u32 VAR_36;

 FUNC_10(VAR_33);
 FUNC_11(VAR_33);

 VAR_36 = FUNC_8(VAR_33);
 if (VAR_33->phy_interface == VAR_22)
  VAR_36 |= FUNC_0(VAR_28) | FUNC_0(VAR_21);
 VAR_36 |= FUNC_1(VAR_23, VAR_19);
 VAR_36 |= FUNC_2(VAR_20);
 VAR_36 |= FUNC_2(VAR_2);
 if (VAR_33->caps & VAR_11)
  VAR_36 |= FUNC_2(VAR_9);
 else
  VAR_36 |= FUNC_2(VAR_0);
 if (VAR_33->dev->flags & VAR_8)
  VAR_36 |= FUNC_2(VAR_1);
 else if (FUNC_7(VAR_33) && VAR_33->dev->features & VAR_18)
  VAR_36 |= FUNC_0(VAR_27);
 if (!(VAR_33->dev->flags & VAR_7))
  VAR_36 |= FUNC_2(VAR_15);
 VAR_36 |= FUNC_6(VAR_33);
 FUNC_12(VAR_33, VAR_16, VAR_36);
 if ((VAR_33->caps & VAR_11) && VAR_33->jumbo_max_len)
  FUNC_3(VAR_33, VAR_10, VAR_33->jumbo_max_len);
 VAR_33->speed = VAR_29;
 VAR_33->duplex = VAR_3;
 VAR_33->rx_frm_len_mask = VAR_12;
 if (VAR_33->caps & VAR_11)
  VAR_33->rx_frm_len_mask = VAR_13;

 FUNC_5(VAR_33);


 for (VAR_35 = 0, VAR_34 = VAR_33->queues; VAR_35 < VAR_33->num_queues; ++VAR_35, ++VAR_34) {
  FUNC_13(VAR_34, VAR_24, FUNC_4(VAR_34->rx_ring_dma));




  FUNC_13(VAR_34, VAR_30, FUNC_4(VAR_34->tx_ring_dma));






  FUNC_13(VAR_34, VAR_6,
        VAR_33->rx_intr_mask |
        VAR_14 |
        FUNC_2(VAR_4));
 }


 FUNC_12(VAR_33, VAR_17, FUNC_9(VAR_33, VAR_17) | FUNC_2(VAR_26) | FUNC_2(VAR_32));
}
