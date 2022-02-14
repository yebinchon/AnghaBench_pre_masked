
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct TYPE_2__ {int collisions; int tx_bytes; int tx_packets; } ;
struct net_device {TYPE_1__ stats; int dev; } ;
struct nb8800_tx_desc {scalar_t__ report; } ;
struct nb8800_tx_buf {int ready; struct sk_buff* skb; int dma_len; int dma_addr; } ;
struct nb8800_priv {unsigned int tx_next; unsigned int tx_done; int tx_free; struct nb8800_tx_buf* tx_bufs; struct nb8800_tx_desc* tx_descs; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (unsigned int,int *) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int *,int ,int ,int ) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct net_device*,scalar_t__) ;
 int FUNC_8 (struct net_device*,unsigned int,unsigned int) ;
 struct nb8800_priv* FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 () ;

__attribute__((used)) static void FUNC_12(struct net_device *VAR_2)
{
 struct nb8800_priv *VAR_3 = FUNC_9(VAR_2);
 unsigned int VAR_4 = VAR_3->tx_next;
 unsigned int VAR_5 = VAR_3->tx_done;
 unsigned int VAR_6 = 0;
 unsigned int VAR_7 = 0;

 while (VAR_5 != VAR_4) {
  struct nb8800_tx_desc *VAR_8 = &VAR_3->tx_descs[VAR_5];
  struct nb8800_tx_buf *VAR_9 = &VAR_3->tx_bufs[VAR_5];
  struct sk_buff *VAR_10;

  if (!VAR_8->report)
   break;

  VAR_10 = VAR_9->skb;
  VAR_7 += VAR_10->len;

  FUNC_5(&VAR_2->dev, VAR_9->dma_addr, VAR_9->dma_len,
     VAR_0);

  if (FUNC_0(VAR_8->report)) {
   FUNC_7(VAR_2, VAR_8->report);
   FUNC_6(VAR_10);
  } else {
   FUNC_4(VAR_10);
  }

  VAR_2->stats.tx_packets++;
  VAR_2->stats.tx_bytes += FUNC_1(VAR_8->report);
  VAR_2->stats.collisions += FUNC_2(VAR_8->report);

  VAR_9->skb = ((void*)0);
  VAR_9->ready = 0;
  VAR_8->report = 0;

  VAR_5 = (VAR_5 + 1) % VAR_1;
  VAR_6++;
 }

 if (VAR_6) {
  FUNC_11();
  FUNC_3(VAR_6, &VAR_3->tx_free);
  FUNC_8(VAR_2, VAR_6, VAR_7);
  FUNC_10(VAR_2);
  VAR_3->tx_done = VAR_5;
 }
}
