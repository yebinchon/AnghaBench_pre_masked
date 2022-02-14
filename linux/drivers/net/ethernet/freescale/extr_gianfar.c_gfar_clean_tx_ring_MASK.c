
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct txbd8 {int length; int bufPtr; int lstatus; } ;
struct skb_shared_hwtstamps {int hwtstamp; } ;
struct sk_buff {scalar_t__ data; } ;
struct netdev_queue {int dummy; } ;
struct net_device {int dummy; } ;
struct gfar_private {int ndev; int state; int dev; } ;
struct gfar_priv_tx_q {int tx_ring_size; int qindex; int skb_dirtytx; struct txbd8* dirty_tx; scalar_t__ num_txbdfree; int txlock; struct sk_buff** tx_skbuff; struct txbd8* tx_bd_base; struct net_device* dev; } ;
typedef int shhwtstamps ;
struct TYPE_4__ {scalar_t__ bytes_sent; } ;
struct TYPE_3__ {int nr_frags; int tx_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (struct sk_buff*) ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int ,int,size_t,int ) ;
 int FUNC_8 (int ,int,size_t,int ) ;
 int FUNC_9 (struct txbd8*) ;
 int FUNC_10 (struct skb_shared_hwtstamps*,int ,int) ;
 struct netdev_queue* FUNC_11 (struct net_device*,int) ;
 struct gfar_private* FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct netdev_queue*,int,unsigned int) ;
 scalar_t__ FUNC_14 (struct netdev_queue*) ;
 int FUNC_15 (int ,int) ;
 struct txbd8* FUNC_16 (struct txbd8*,struct txbd8*,int) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (struct sk_buff*,size_t) ;
 TYPE_1__* FUNC_19 (struct sk_buff*) ;
 int FUNC_20 (struct sk_buff*,struct skb_shared_hwtstamps*) ;
 struct txbd8* FUNC_21 (struct txbd8*,int,struct txbd8*,int) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int ,int *) ;
 scalar_t__ FUNC_25 (int) ;

__attribute__((used)) static void FUNC_26(struct gfar_priv_tx_q *VAR_7)
{
 struct net_device *VAR_8 = VAR_7->dev;
 struct netdev_queue *VAR_9;
 struct gfar_private *VAR_10 = FUNC_12(VAR_8);
 struct txbd8 *VAR_11, *VAR_12 = ((void*)0);
 struct txbd8 *VAR_13 = ((void*)0);
 struct txbd8 *VAR_14 = VAR_7->tx_bd_base;
 struct sk_buff *VAR_15;
 int VAR_16;
 int VAR_17 = VAR_7->tx_ring_size;
 int VAR_18 = 0, VAR_19 = 0;
 int VAR_20;
 int VAR_21 = 0;
 int VAR_22 = VAR_7->qindex;
 unsigned int VAR_23 = 0;
 u32 VAR_24;
 size_t VAR_25;

 VAR_9 = FUNC_11(VAR_8, VAR_22);
 VAR_11 = VAR_7->dirty_tx;
 VAR_16 = VAR_7->skb_dirtytx;

 while ((VAR_15 = VAR_7->tx_skbuff[VAR_16])) {

  VAR_18 = FUNC_19(VAR_15)->nr_frags;




  if (FUNC_25(FUNC_19(VAR_15)->tx_flags & VAR_5))
   VAR_19 = VAR_18 + 2;
  else
   VAR_19 = VAR_18 + 1;

  VAR_13 = FUNC_21(VAR_11, VAR_19 - 1, VAR_14, VAR_17);

  VAR_24 = FUNC_4(VAR_13->lstatus);


  if ((VAR_24 & FUNC_0(VAR_6)) &&
      (VAR_24 & VAR_0))
   break;

  if (FUNC_25(FUNC_19(VAR_15)->tx_flags & VAR_5)) {
   VAR_12 = FUNC_16(VAR_11, VAR_14, VAR_17);
   VAR_25 = FUNC_3(VAR_12->length) +
     VAR_3 + VAR_4;
  } else
   VAR_25 = FUNC_3(VAR_11->length);

  FUNC_8(VAR_10->dev, FUNC_4(VAR_11->bufPtr),
     VAR_25, VAR_1);

  if (FUNC_25(FUNC_19(VAR_15)->tx_flags & VAR_5)) {
   struct skb_shared_hwtstamps VAR_26;
   u64 *VAR_27 = (u64 *)(((uintptr_t)VAR_15->data + 0x10) &
       ~0x7UL);

   FUNC_10(&VAR_26, 0, sizeof(VAR_26));
   VAR_26.hwtstamp = FUNC_17(FUNC_5(*VAR_27));
   FUNC_18(VAR_15, VAR_3 + VAR_4);
   FUNC_20(VAR_15, &VAR_26);
   FUNC_9(VAR_11);
   VAR_11 = VAR_12;
  }

  FUNC_9(VAR_11);
  VAR_11 = FUNC_16(VAR_11, VAR_14, VAR_17);

  for (VAR_20 = 0; VAR_20 < VAR_18; VAR_20++) {
   FUNC_7(VAR_10->dev, FUNC_4(VAR_11->bufPtr),
           FUNC_3(VAR_11->length),
           VAR_1);
   FUNC_9(VAR_11);
   VAR_11 = FUNC_16(VAR_11, VAR_14, VAR_17);
  }

  VAR_23 += FUNC_1(VAR_15)->bytes_sent;

  FUNC_6(VAR_15);

  VAR_7->tx_skbuff[VAR_16] = ((void*)0);

  VAR_16 = (VAR_16 + 1) &
         FUNC_2(VAR_17);

  VAR_21++;
  FUNC_22(&VAR_7->txlock);
  VAR_7->num_txbdfree += VAR_19;
  FUNC_23(&VAR_7->txlock);
 }


 if (VAR_7->num_txbdfree &&
     FUNC_14(VAR_9) &&
     !(FUNC_24(VAR_2, &VAR_10->state)))
  FUNC_15(VAR_10->ndev, VAR_22);


 VAR_7->skb_dirtytx = VAR_16;
 VAR_7->dirty_tx = VAR_11;

 FUNC_13(VAR_9, VAR_21, VAR_23);
}
