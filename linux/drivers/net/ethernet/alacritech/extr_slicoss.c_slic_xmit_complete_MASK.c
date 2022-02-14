
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct slic_tx_queue {unsigned int done_idx; struct slic_tx_buffer* txbuffs; } ;
struct slic_tx_buffer {TYPE_3__* skb; } ;
struct TYPE_5__ {unsigned int tx_bytes; unsigned int tx_packets; int syncp; } ;
struct slic_device {TYPE_2__ stats; TYPE_1__* pdev; struct net_device* netdev; struct slic_tx_queue txq; } ;
struct net_device {int dummy; } ;
struct TYPE_6__ {scalar_t__ len; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct slic_tx_buffer*,int ) ;
 int FUNC_2 (struct slic_tx_buffer*,int ) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct net_device*,char*,unsigned int) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 scalar_t__ FUNC_9 (struct slic_tx_queue*) ;
 unsigned int FUNC_10 (struct slic_device*) ;
 int FUNC_11 () ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static void FUNC_15(struct slic_device *VAR_6)
{
 struct slic_tx_queue *VAR_7 = &VAR_6->txq;
 struct net_device *VAR_8 = VAR_6->netdev;
 struct slic_tx_buffer *VAR_9;
 unsigned int VAR_10 = 0;
 unsigned int VAR_11 = 0;
 unsigned int VAR_12;




 do {
  VAR_12 = FUNC_10(VAR_6);
  if (VAR_12 == VAR_1)
   break;

  VAR_7->done_idx = VAR_12;
  VAR_9 = &VAR_7->txbuffs[VAR_12];

  if (FUNC_14(!VAR_9->skb)) {
   FUNC_4(VAR_8,
        "no skb found for desc idx %i\n", VAR_12);
   continue;
  }
  FUNC_3(&VAR_6->pdev->dev,
     FUNC_1(VAR_9, VAR_4),
     FUNC_2(VAR_9, VAR_5), VAR_0);

  VAR_11 += VAR_9->skb->len;
  VAR_10++;

  FUNC_0(VAR_9->skb);
  VAR_9->skb = ((void*)0);
 } while (VAR_10 < VAR_2);

 FUNC_11();

 FUNC_12(&VAR_6->stats.syncp);
 VAR_6->stats.tx_bytes += VAR_11;
 VAR_6->stats.tx_packets += VAR_10;
 FUNC_13(&VAR_6->stats.syncp);

 FUNC_6(VAR_8);
 if (FUNC_5(VAR_8) &&
     (FUNC_9(VAR_7) >= VAR_3))
  FUNC_8(VAR_8);
 FUNC_7(VAR_8);
}
