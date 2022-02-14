
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct spider_net_hw_descr {int buf_addr; int dmac_cmd_status; } ;
struct spider_net_descr_chain {int lock; struct spider_net_descr* tail; struct spider_net_descr* head; } ;
struct spider_net_descr {struct sk_buff* skb; struct spider_net_descr* next; struct spider_net_hw_descr* hwdescr; } ;
struct spider_net_card {int pdev; struct net_device* netdev; struct spider_net_descr_chain tx_chain; } ;
struct sk_buff {int len; } ;
struct TYPE_2__ {int tx_dropped; int tx_errors; int tx_bytes; int tx_packets; } ;
struct net_device {TYPE_1__ stats; int dev; } ;


 int VAR_0 ;



 int VAR_1 ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct spider_net_card*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (struct spider_net_hw_descr*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_7(struct spider_net_card *VAR_2, int VAR_3)
{
 struct net_device *VAR_4 = VAR_2->netdev;
 struct spider_net_descr_chain *VAR_5 = &VAR_2->tx_chain;
 struct spider_net_descr *VAR_6;
 struct spider_net_hw_descr *VAR_7;
 struct sk_buff *VAR_8;
 u32 VAR_9;
 unsigned long VAR_10;
 int VAR_11;

 while (1) {
  FUNC_5(&VAR_5->lock, VAR_10);
  if (VAR_5->tail == VAR_5->head) {
   FUNC_6(&VAR_5->lock, VAR_10);
   return 0;
  }
  VAR_6 = VAR_5->tail;
  VAR_7 = VAR_6->hwdescr;

  VAR_11 = FUNC_4(VAR_7);
  switch (VAR_11) {
  case 131:
   VAR_4->stats.tx_packets++;
   VAR_4->stats.tx_bytes += VAR_6->skb->len;
   break;

  case 132:
   if (!VAR_3) {
    FUNC_6(&VAR_5->lock, VAR_10);
    return 1;
   }






  case 128:
  case 129:
  case 130:
   if (FUNC_2(VAR_2))
    FUNC_1(&VAR_2->netdev->dev, "forcing end of tx descriptor "
           "with status x%02x\n", VAR_11);
   VAR_4->stats.tx_errors++;
   break;

  default:
   VAR_4->stats.tx_dropped++;
   if (!VAR_3) {
    FUNC_6(&VAR_5->lock, VAR_10);
    return 1;
   }
  }

  VAR_5->tail = VAR_6->next;
  VAR_7->dmac_cmd_status |= VAR_1;
  VAR_8 = VAR_6->skb;
  VAR_6->skb = ((void*)0);
  VAR_9 = VAR_7->buf_addr;
  FUNC_6(&VAR_5->lock, VAR_10);


  if (VAR_8) {
   FUNC_3(VAR_2->pdev, VAR_9, VAR_8->len,
     VAR_0);
   FUNC_0(VAR_8);
  }
 }
 return 0;
}
