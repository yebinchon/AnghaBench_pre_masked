
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct spider_net_hw_descr {int dmac_cmd_status; scalar_t__ data_status; scalar_t__ next_descr_addr; int buf_size; int buf_addr; } ;
struct spider_net_descr_chain {scalar_t__ head; int lock; TYPE_2__* tail; } ;
struct spider_net_descr {scalar_t__ next; int bus_addr; TYPE_4__* prev; struct sk_buff* skb; struct spider_net_hw_descr* hwdescr; } ;
struct TYPE_7__ {int tx_iommu_map_error; } ;
struct spider_net_card {TYPE_5__* netdev; int pdev; struct spider_net_descr_chain tx_chain; TYPE_1__ spider_stats; } ;
struct sk_buff {scalar_t__ ip_summed; int len; int data; } ;
typedef int dma_addr_t ;
struct TYPE_12__ {int protocol; } ;
struct TYPE_11__ {int dev; } ;
struct TYPE_10__ {TYPE_3__* hwdescr; } ;
struct TYPE_9__ {int next_descr_addr; } ;
struct TYPE_8__ {scalar_t__ prev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*,int ,int ) ;
 TYPE_6__* FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (struct spider_net_card*) ;
 int FUNC_4 (TYPE_5__*) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 () ;

__attribute__((used)) static int
FUNC_11(struct spider_net_card *VAR_7,
       struct sk_buff *VAR_8)
{
 struct spider_net_descr_chain *VAR_9 = &VAR_7->tx_chain;
 struct spider_net_descr *VAR_10;
 struct spider_net_hw_descr *VAR_11;
 dma_addr_t VAR_12;
 unsigned long VAR_13;

 VAR_12 = FUNC_6(VAR_7->pdev, VAR_8->data, VAR_8->len, VAR_2);
 if (FUNC_5(VAR_7->pdev, VAR_12)) {
  if (FUNC_3(VAR_7) && FUNC_2())
   FUNC_0(&VAR_7->netdev->dev, "could not iommu-map packet (%p, %i). "
      "Dropping packet\n", VAR_8->data, VAR_8->len);
  VAR_7->spider_stats.tx_iommu_map_error++;
  return -VAR_1;
 }

 FUNC_8(&VAR_9->lock, VAR_13);
 VAR_10 = VAR_7->tx_chain.head;
 if (VAR_10->next == VAR_9->tail->prev) {
  FUNC_9(&VAR_9->lock, VAR_13);
  FUNC_7(VAR_7->pdev, VAR_12, VAR_8->len, VAR_2);
  return -VAR_1;
 }
 VAR_11 = VAR_10->hwdescr;
 VAR_9->head = VAR_10->next;

 VAR_10->skb = VAR_8;
 VAR_11->buf_addr = VAR_12;
 VAR_11->buf_size = VAR_8->len;
 VAR_11->next_descr_addr = 0;
 VAR_11->data_status = 0;

 VAR_11->dmac_cmd_status =
   VAR_3 | VAR_5;
 FUNC_9(&VAR_9->lock, VAR_13);

 if (VAR_8->ip_summed == VAR_0)
  switch (FUNC_1(VAR_8)->protocol) {
  case 129:
   VAR_11->dmac_cmd_status |= VAR_4;
   break;
  case 128:
   VAR_11->dmac_cmd_status |= VAR_6;
   break;
  }


 FUNC_10();
 VAR_10->prev->hwdescr->next_descr_addr = VAR_10->bus_addr;

 FUNC_4(VAR_7->netdev);
 return 0;
}
