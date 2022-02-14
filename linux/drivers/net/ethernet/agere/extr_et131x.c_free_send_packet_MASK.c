
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct tx_ring {scalar_t__ used; struct tcb* tcb_qtail; struct tcb* tcb_qhead; struct tx_desc* tx_desc_ring; } ;
struct tx_desc {int addr_lo; int len_vlan; scalar_t__ addr_hi; } ;
struct tcb {struct tcb* next; TYPE_3__* skb; int index_start; int index; } ;
struct net_device_stats {int tx_packets; int tx_bytes; } ;
struct et131x_adapter {int tcb_ready_qlock; TYPE_2__* pdev; struct tx_ring tx_ring; TYPE_1__* netdev; } ;
struct TYPE_6__ {scalar_t__ len; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {struct net_device_stats stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int *,int,int ,int ) ;
 int FUNC_5 (struct tcb*,int ,int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_8(struct et131x_adapter *VAR_4,
        struct tcb *VAR_5)
{
 unsigned long VAR_6;
 struct tx_desc *VAR_7 = ((void*)0);
 struct net_device_stats *VAR_8 = &VAR_4->netdev->stats;
 struct tx_ring *VAR_9 = &VAR_4->tx_ring;
 u64 VAR_10;

 if (VAR_5->skb) {
  VAR_8->tx_bytes += VAR_5->skb->len;





  do {
   VAR_7 = VAR_9->tx_desc_ring +
          FUNC_0(VAR_5->index_start);

   VAR_10 = VAR_7->addr_lo;
   VAR_10 |= (u64)VAR_7->addr_hi << 32;

   FUNC_4(&VAR_4->pdev->dev,
      VAR_10,
      VAR_7->len_vlan, VAR_0);

   FUNC_2(&VAR_5->index_start, 1);
   if (FUNC_0(VAR_5->index_start) >=
       VAR_3) {
    VAR_5->index_start &= ~VAR_1;
    VAR_5->index_start ^= VAR_2;
   }
  } while (VAR_7 != VAR_9->tx_desc_ring + FUNC_0(VAR_5->index));

  FUNC_3(VAR_5->skb);
 }

 FUNC_5(VAR_5, 0, sizeof(struct tcb));


 FUNC_6(&VAR_4->tcb_ready_qlock, VAR_6);

 VAR_8->tx_packets++;

 if (VAR_9->tcb_qtail)
  VAR_9->tcb_qtail->next = VAR_5;
 else
  VAR_9->tcb_qhead = VAR_5;

 VAR_9->tcb_qtail = VAR_5;

 FUNC_7(&VAR_4->tcb_ready_qlock, VAR_6);
 FUNC_1(VAR_9->used < 0);
}
