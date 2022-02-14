
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct pci_dev {int dummy; } ;
struct netdev_queue {int dummy; } ;
struct myri10ge_tx_buf {int pkt_done; int done; int mask; int req; int wake_queue; int send_stop; scalar_t__ queue_active; TYPE_4__* info; } ;
struct TYPE_7__ {int tx_packets; int tx_bytes; } ;
struct myri10ge_slice_state {TYPE_3__* mgp; int dev; TYPE_1__ stats; struct myri10ge_tx_buf tx; } ;
struct TYPE_10__ {scalar_t__ last; struct sk_buff* skb; } ;
struct TYPE_9__ {int ss; scalar_t__ running; TYPE_2__* dev; struct pci_dev* pdev; } ;
struct TYPE_8__ {int real_num_tx_queues; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct netdev_queue*) ;
 int FUNC_1 (struct netdev_queue*) ;
 int VAR_2 ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (TYPE_4__*,int) ;
 int FUNC_5 (TYPE_4__*,int,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 struct netdev_queue* FUNC_8 (int ,struct myri10ge_slice_state*) ;
 scalar_t__ FUNC_9 (struct netdev_queue*) ;
 int FUNC_10 (struct netdev_queue*) ;
 int FUNC_11 (struct pci_dev*,int ,int,int ) ;
 int FUNC_12 (struct pci_dev*,int ,int,int ) ;
 int FUNC_13 (int ,int ) ;

__attribute__((used)) static inline void
FUNC_14(struct myri10ge_slice_state *VAR_3, int VAR_4)
{
 struct pci_dev *VAR_5 = VAR_3->mgp->pdev;
 struct myri10ge_tx_buf *VAR_6 = &VAR_3->tx;
 struct netdev_queue *VAR_7;
 struct sk_buff *VAR_8;
 int VAR_9, VAR_10;

 while (VAR_6->pkt_done != VAR_4) {
  VAR_9 = VAR_6->done & VAR_6->mask;
  VAR_8 = VAR_6->info[VAR_9].skb;


  VAR_6->info[VAR_9].skb = ((void*)0);
  if (VAR_6->info[VAR_9].last) {
   VAR_6->pkt_done++;
   VAR_6->info[VAR_9].last = 0;
  }
  VAR_6->done++;
  VAR_10 = FUNC_4(&VAR_6->info[VAR_9], VAR_10);
  FUNC_5(&VAR_6->info[VAR_9], VAR_10, 0);
  if (VAR_8) {
   VAR_3->stats.tx_bytes += VAR_8->len;
   VAR_3->stats.tx_packets++;
   FUNC_2(VAR_8);
   if (VAR_10)
    FUNC_12(VAR_5,
       FUNC_3(&VAR_6->info[VAR_9],
        VAR_2), VAR_10,
       VAR_1);
  } else {
   if (VAR_10)
    FUNC_11(VAR_5,
            FUNC_3(&VAR_6->info[VAR_9],
             VAR_2), VAR_10,
            VAR_1);
  }
 }

 VAR_7 = FUNC_8(VAR_3->dev, VAR_3 - VAR_3->mgp->ss);
 if ((VAR_3->mgp->dev->real_num_tx_queues > 1) &&
     FUNC_0(VAR_7)) {
  if (VAR_6->req == VAR_6->done) {
   VAR_6->queue_active = 0;
   FUNC_13(FUNC_6(1), VAR_6->send_stop);
   FUNC_7();
  }
  FUNC_1(VAR_7);
 }


 if (FUNC_9(VAR_7) &&
     VAR_6->req - VAR_6->done < (VAR_6->mask >> 1) &&
     VAR_3->mgp->running == VAR_0) {
  VAR_6->wake_queue++;
  FUNC_10(VAR_7);
 }
}
