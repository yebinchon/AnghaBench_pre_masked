
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
typedef struct macb_queue* u16 ;
struct sk_buff {scalar_t__ len; int data; } ;
struct macb_tx_skb {struct sk_buff* skb; } ;
struct TYPE_8__ {int tx_bytes; int tx_packets; } ;
struct macb_queue {unsigned int tx_head; unsigned int tx_tail; TYPE_2__ stats; struct macb* bp; } ;
struct macb_dma_desc {int ctrl; } ;
struct macb {int queues; int caps; TYPE_4__* dev; int tx_ring_size; } ;
struct TYPE_7__ {int tx_bytes; int tx_packets; } ;
struct TYPE_10__ {TYPE_1__ stats; } ;
struct TYPE_9__ {int tx_flags; } ;


 scalar_t__ FUNC_0 (unsigned int,unsigned int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct macb*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (TYPE_4__*,struct macb_queue*) ;
 scalar_t__ FUNC_4 (struct macb_queue*,struct sk_buff*,struct macb_dma_desc*) ;
 int FUNC_5 (struct macb*,int ) ;
 struct macb_dma_desc* FUNC_6 (struct macb_queue*,unsigned int) ;
 int FUNC_7 (struct macb*,unsigned int) ;
 struct macb_tx_skb* FUNC_8 (struct macb_queue*,unsigned int) ;
 int FUNC_9 (struct macb*,struct macb_tx_skb*) ;
 int FUNC_10 (struct macb*,int ,int) ;
 int FUNC_11 (TYPE_4__*,char*,unsigned long,...) ;
 int FUNC_12 (TYPE_4__*,struct macb_queue*) ;
 int FUNC_13 (struct macb_queue*,int ,int) ;
 int FUNC_14 () ;
 TYPE_3__* FUNC_15 (struct sk_buff*) ;
 scalar_t__ FUNC_16 (int) ;

__attribute__((used)) static void FUNC_17(struct macb_queue *VAR_6)
{
 unsigned int VAR_7;
 unsigned int VAR_8;
 u32 VAR_9;
 struct macb *VAR_10 = VAR_6->bp;
 u16 VAR_11 = VAR_6 - VAR_10->queues;

 VAR_9 = FUNC_5(VAR_10, VAR_4);
 FUNC_10(VAR_10, VAR_4, VAR_9);

 if (VAR_10->caps & VAR_1)
  FUNC_13(VAR_6, VAR_0, FUNC_1(VAR_3));

 FUNC_11(VAR_10->dev, "macb_tx_interrupt status = 0x%03lx\n",
      (unsigned long)VAR_9);

 VAR_8 = VAR_6->tx_head;
 for (VAR_7 = VAR_6->tx_tail; VAR_7 != VAR_8; VAR_7++) {
  struct macb_tx_skb *VAR_12;
  struct sk_buff *VAR_13;
  struct macb_dma_desc *VAR_14;
  u32 VAR_15;

  VAR_14 = FUNC_6(VAR_6, VAR_7);


  FUNC_14();

  VAR_15 = VAR_14->ctrl;




  if (!(VAR_15 & FUNC_1(VAR_5)))
   break;


  for (;; VAR_7++) {
   VAR_12 = FUNC_8(VAR_6, VAR_7);
   VAR_13 = VAR_12->skb;


   if (VAR_13) {
    if (FUNC_16(FUNC_15(VAR_13)->tx_flags &
          VAR_2) &&
        FUNC_4(VAR_6, VAR_13, VAR_14) == 0) {



     VAR_12->skb = ((void*)0);
    }
    FUNC_11(VAR_10->dev, "skb %u (data %p) TX complete\n",
         FUNC_7(VAR_10, VAR_7),
         VAR_13->data);
    VAR_10->dev->stats.tx_packets++;
    VAR_6->stats.tx_packets++;
    VAR_10->dev->stats.tx_bytes += VAR_13->len;
    VAR_6->stats.tx_bytes += VAR_13->len;
   }


   FUNC_9(VAR_10, VAR_12);





   if (VAR_13)
    break;
  }
 }

 VAR_6->tx_tail = VAR_7;
 if (FUNC_3(VAR_10->dev, VAR_11) &&
     FUNC_0(VAR_6->tx_head, VAR_6->tx_tail,
       VAR_10->tx_ring_size) <= FUNC_2(VAR_10))
  FUNC_12(VAR_10->dev, VAR_11);
}
