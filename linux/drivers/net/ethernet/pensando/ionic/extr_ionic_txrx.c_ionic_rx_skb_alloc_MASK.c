
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int data; } ;
struct net_device {int name; } ;
struct ionic_rx_stats {int dma_map_err; int alloc_err; } ;
struct ionic_queue {int name; struct ionic_lif* lif; } ;
struct ionic_lif {TYPE_1__* ionic; struct net_device* netdev; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {struct device* dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct device*,int ,unsigned int,int ) ;
 scalar_t__ FUNC_2 (struct device*,int ) ;
 int FUNC_3 (char*,int ,int ) ;
 struct sk_buff* FUNC_4 (struct net_device*,unsigned int) ;
 struct ionic_rx_stats* FUNC_5 (struct ionic_queue*) ;

__attribute__((used)) static struct sk_buff *FUNC_6(struct ionic_queue *VAR_1, unsigned int VAR_2,
       dma_addr_t *VAR_3)
{
 struct ionic_lif *VAR_4 = VAR_1->lif;
 struct ionic_rx_stats *VAR_5;
 struct net_device *VAR_6;
 struct sk_buff *VAR_7;
 struct device *VAR_8;

 VAR_6 = VAR_4->netdev;
 VAR_8 = VAR_4->ionic->dev;
 VAR_5 = FUNC_5(VAR_1);
 VAR_7 = FUNC_4(VAR_6, VAR_2);
 if (!VAR_7) {
  FUNC_3("%s: SKB alloc failed on %s!\n",
         VAR_6->name, VAR_1->name);
  VAR_5->alloc_err++;
  return ((void*)0);
 }

 *VAR_3 = FUNC_1(VAR_8, VAR_7->data, VAR_2, VAR_0);
 if (FUNC_2(VAR_8, *VAR_3)) {
  FUNC_0(VAR_7);
  FUNC_3("%s: DMA single map failed on %s!\n",
         VAR_6->name, VAR_1->name);
  VAR_5->dma_map_err++;
  return ((void*)0);
 }

 return VAR_7;
}
