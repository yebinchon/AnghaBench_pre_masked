
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u32 ;
struct tg3_tx_ring_info {int fragmented; struct sk_buff* skb; } ;
struct tg3_napi {size_t tx_cons; struct tg3_tx_ring_info* tx_buffers; TYPE_3__* tx_ring; TYPE_2__* hw_status; struct tg3* tp; } ;
struct tg3 {int pdev; int dev; struct tg3_napi* napi; } ;
struct skb_shared_hwtstamps {int dummy; } ;
struct sk_buff {scalar_t__ len; } ;
struct netdev_queue {int dummy; } ;
struct TYPE_8__ {int nr_frags; int * frags; } ;
struct TYPE_7__ {int len_flags; } ;
struct TYPE_6__ {TYPE_1__* idx; } ;
struct TYPE_5__ {size_t tx_consumer; } ;


 int VAR_0 ;
 size_t FUNC_0 (size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct tg3_napi*) ;
 int VAR_4 ;
 int FUNC_2 (struct netdev_queue*,int ) ;
 int FUNC_3 (struct netdev_queue*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct tg3_tx_ring_info*,int ) ;
 int VAR_5 ;
 struct netdev_queue* FUNC_6 (int ,int) ;
 int FUNC_7 (struct netdev_queue*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_8 (struct netdev_queue*) ;
 int FUNC_9 (struct netdev_queue*) ;
 int FUNC_10 (int ,int ,int ,int ) ;
 int FUNC_11 (int ,int ,int ,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct sk_buff*) ;
 TYPE_4__* FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (struct sk_buff*,struct skb_shared_hwtstamps*) ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 scalar_t__ FUNC_18 (struct tg3*,int ) ;
 int FUNC_19 (struct tg3*,int,struct skb_shared_hwtstamps*) ;
 scalar_t__ FUNC_20 (struct tg3_napi*) ;
 int FUNC_21 (struct tg3*) ;
 int FUNC_22 (int ) ;
 scalar_t__ FUNC_23 (int) ;

__attribute__((used)) static void FUNC_24(struct tg3_napi *VAR_6)
{
 struct tg3 *VAR_7 = VAR_6->tp;
 u32 VAR_8 = VAR_6->hw_status->idx[0].tx_consumer;
 u32 VAR_9 = VAR_6->tx_cons;
 struct netdev_queue *VAR_10;
 int VAR_11 = VAR_6 - VAR_7->napi;
 unsigned int VAR_12 = 0, VAR_13 = 0;

 if (FUNC_18(VAR_7, VAR_0))
  VAR_11--;

 VAR_10 = FUNC_6(VAR_7->dev, VAR_11);

 while (VAR_9 != VAR_8) {
  struct tg3_tx_ring_info *VAR_14 = &VAR_6->tx_buffers[VAR_9];
  struct sk_buff *VAR_15 = VAR_14->skb;
  int VAR_16, VAR_17 = 0;

  if (FUNC_23(VAR_15 == ((void*)0))) {
   FUNC_21(VAR_7);
   return;
  }

  if (VAR_6->tx_ring[VAR_9].len_flags & VAR_4) {
   struct skb_shared_hwtstamps VAR_18;
   u64 VAR_19 = FUNC_22(VAR_2);
   VAR_19 |= (u64)FUNC_22(VAR_3) << 32;

   FUNC_19(VAR_7, VAR_19, &VAR_18);

   FUNC_15(VAR_15, &VAR_18);
  }

  FUNC_11(VAR_7->pdev,
     FUNC_5(VAR_14, VAR_5),
     FUNC_13(VAR_15),
     VAR_1);

  VAR_14->skb = ((void*)0);

  while (VAR_14->fragmented) {
   VAR_14->fragmented = 0;
   VAR_9 = FUNC_0(VAR_9);
   VAR_14 = &VAR_6->tx_buffers[VAR_9];
  }

  VAR_9 = FUNC_0(VAR_9);

  for (VAR_16 = 0; VAR_16 < FUNC_14(VAR_15)->nr_frags; VAR_16++) {
   VAR_14 = &VAR_6->tx_buffers[VAR_9];
   if (FUNC_23(VAR_14->skb != ((void*)0) || VAR_9 == VAR_8))
    VAR_17 = 1;

   FUNC_10(VAR_7->pdev,
           FUNC_5(VAR_14, VAR_5),
           FUNC_12(&FUNC_14(VAR_15)->frags[VAR_16]),
           VAR_1);

   while (VAR_14->fragmented) {
    VAR_14->fragmented = 0;
    VAR_9 = FUNC_0(VAR_9);
    VAR_14 = &VAR_6->tx_buffers[VAR_9];
   }

   VAR_9 = FUNC_0(VAR_9);
  }

  VAR_12++;
  VAR_13 += VAR_15->len;

  FUNC_4(VAR_15);

  if (FUNC_23(VAR_17)) {
   FUNC_21(VAR_7);
   return;
  }
 }

 FUNC_7(VAR_10, VAR_12, VAR_13);

 VAR_6->tx_cons = VAR_9;






 FUNC_16();

 if (FUNC_23(FUNC_8(VAR_10) &&
       (FUNC_20(VAR_6) > FUNC_1(VAR_6)))) {
  FUNC_2(VAR_10, FUNC_17());
  if (FUNC_8(VAR_10) &&
      (FUNC_20(VAR_6) > FUNC_1(VAR_6)))
   FUNC_9(VAR_10);
  FUNC_3(VAR_10);
 }
}
