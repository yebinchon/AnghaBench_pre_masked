
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ len; int protocol; int data; } ;
struct de_private {unsigned int rx_tail; int rx_buf_sz; TYPE_4__* dev; TYPE_3__* rx_ring; int pdev; TYPE_1__* rx_skb; } ;
typedef int dma_addr_t ;
struct TYPE_9__ {int rx_bytes; int rx_packets; int rx_dropped; } ;
struct TYPE_11__ {TYPE_2__ stats; } ;
struct TYPE_10__ {void* opts1; void* addr1; void* opts2; } ;
struct TYPE_8__ {int mapping; struct sk_buff* skb; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_1 (unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct de_private*,unsigned int,int,int) ;
 int FUNC_4 (struct sk_buff*,TYPE_4__*) ;
 int FUNC_5 (void*) ;
 struct sk_buff* FUNC_6 (TYPE_4__*,unsigned int) ;
 int FUNC_7 (TYPE_4__*,char*) ;
 int FUNC_8 (struct de_private*,int ,TYPE_4__*,char*,unsigned int,int,int,unsigned int) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (int ,int,int,int ) ;
 int FUNC_11 (int ,int,int,int ) ;
 int FUNC_12 (int ,int ,unsigned int,int ) ;
 int FUNC_13 (int ,int,unsigned int,int ) ;
 int FUNC_14 () ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_15 (struct sk_buff*,int ,int) ;
 int FUNC_16 (struct sk_buff*,int) ;
 int FUNC_17 (struct sk_buff*,int) ;
 scalar_t__ FUNC_18 (int) ;
 int FUNC_19 () ;

__attribute__((used)) static void FUNC_20 (struct de_private *VAR_8)
{
 unsigned VAR_9 = VAR_8->rx_tail;
 unsigned VAR_10 = VAR_0;
 unsigned VAR_11 = 0;
 int VAR_12;

 while (--VAR_10) {
  u32 VAR_13, VAR_14;
  dma_addr_t VAR_15;
  struct sk_buff *VAR_16, *VAR_17;
  unsigned VAR_18, VAR_19;

  VAR_16 = VAR_8->rx_skb[VAR_9].skb;
  FUNC_0(!VAR_16);
  FUNC_14();
  VAR_13 = FUNC_5(VAR_8->rx_ring[VAR_9].opts1);
  if (VAR_13 & VAR_1)
   break;

  VAR_14 = ((VAR_13 >> 16) & 0x7ff) - 4;
  VAR_15 = VAR_8->rx_skb[VAR_9].mapping;

  if (FUNC_18(VAR_11)) {
   VAR_8->dev->stats.rx_dropped++;
   goto rx_next;
  }

  if (FUNC_18((VAR_13 & 0x38008300) != 0x0300)) {
   FUNC_3(VAR_8, VAR_9, VAR_13, VAR_14);
   goto rx_next;
  }

  VAR_18 = (VAR_14 <= VAR_6);

  FUNC_8(VAR_8, VAR_7, VAR_8->dev,
     "rx slot %d status 0x%x len %d copying? %d\n",
     VAR_9, VAR_13, VAR_14, VAR_18);

  VAR_19 = VAR_18 ? (VAR_14 + VAR_4) : VAR_8->rx_buf_sz;
  VAR_17 = FUNC_6(VAR_8->dev, VAR_19);
  if (FUNC_18(!VAR_17)) {
   VAR_8->dev->stats.rx_dropped++;
   VAR_11 = 1;
   VAR_10 = 100;
   goto rx_next;
  }

  if (!VAR_18) {
   FUNC_13(VAR_8->pdev, VAR_15,
      VAR_19, VAR_3);
   FUNC_16(VAR_16, VAR_14);

   VAR_15 =
   VAR_8->rx_skb[VAR_9].mapping =
    FUNC_12(VAR_8->pdev, VAR_17->data,
            VAR_19, VAR_3);
   VAR_8->rx_skb[VAR_9].skb = VAR_17;
  } else {
   FUNC_10(VAR_8->pdev, VAR_15, VAR_14, VAR_3);
   FUNC_17(VAR_17, VAR_4);
   FUNC_15(VAR_16, FUNC_16(VAR_17, VAR_14),
        VAR_14);
   FUNC_11(VAR_8->pdev, VAR_15, VAR_14, VAR_3);


   VAR_16 = VAR_17;
  }

  VAR_16->protocol = FUNC_4 (VAR_16, VAR_8->dev);

  VAR_8->dev->stats.rx_packets++;
  VAR_8->dev->stats.rx_bytes += VAR_16->len;
  VAR_12 = FUNC_9 (VAR_16);
  if (VAR_12 == VAR_2)
   VAR_11 = 1;

rx_next:
  if (VAR_9 == (VAR_0 - 1))
   VAR_8->rx_ring[VAR_9].opts2 =
    FUNC_2(VAR_5 | VAR_8->rx_buf_sz);
  else
   VAR_8->rx_ring[VAR_9].opts2 = FUNC_2(VAR_8->rx_buf_sz);
  VAR_8->rx_ring[VAR_9].addr1 = FUNC_2(VAR_15);
  FUNC_19();
  VAR_8->rx_ring[VAR_9].opts1 = FUNC_2(VAR_1);
  VAR_9 = FUNC_1(VAR_9);
 }

 if (!VAR_10)
  FUNC_7(VAR_8->dev, "rx work limit reached\n");

 VAR_8->rx_tail = VAR_9;
}
