
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct sk_buff {int data; } ;
struct net_device {int dummy; } ;
struct ionic_rxq_desc {int addr; int len; } ;
struct ionic_rxq_comp {int len; } ;
struct ionic_queue {TYPE_2__* lif; } ;
struct ionic_desc_info {struct ionic_rxq_desc* desc; } ;
struct ionic_cq_info {struct ionic_rxq_comp* cq_desc; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {scalar_t__ rx_copybreak; TYPE_1__* ionic; struct net_device* netdev; } ;
struct TYPE_3__ {struct device* dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int ,scalar_t__,int ) ;
 int FUNC_1 (struct device*,int ,scalar_t__,int ) ;
 int FUNC_2 (struct ionic_queue*,struct ionic_desc_info*,struct sk_buff*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,scalar_t__) ;
 struct sk_buff* FUNC_6 (struct net_device*,scalar_t__) ;

__attribute__((used)) static bool FUNC_7(struct ionic_queue *VAR_1, struct ionic_desc_info *VAR_2,
          struct ionic_cq_info *VAR_3, struct sk_buff **VAR_4)
{
 struct ionic_rxq_comp *VAR_5 = VAR_3->cq_desc;
 struct ionic_rxq_desc *VAR_6 = VAR_2->desc;
 struct net_device *VAR_7 = VAR_1->lif->netdev;
 struct device *VAR_8 = VAR_1->lif->ionic->dev;
 struct sk_buff *VAR_9;
 u16 VAR_10, VAR_11;

 VAR_10 = FUNC_3(VAR_5->len);
 VAR_11 = FUNC_3(VAR_6->len);
 if (VAR_10 > VAR_1->lif->rx_copybreak) {
  FUNC_1(VAR_8, (dma_addr_t)FUNC_4(VAR_6->addr),
     VAR_11, VAR_0);
  return 0;
 }

 VAR_9 = FUNC_6(VAR_7, VAR_10);
 if (!VAR_9) {
  FUNC_1(VAR_8, (dma_addr_t)FUNC_4(VAR_6->addr),
     VAR_11, VAR_0);
  return 0;
 }

 FUNC_0(VAR_8, (dma_addr_t)FUNC_4(VAR_6->addr),
    VAR_10, VAR_0);

 FUNC_5(VAR_9->data, (*VAR_4)->data, VAR_10);

 FUNC_2(VAR_1, VAR_2, *VAR_4);
 *VAR_4 = VAR_9;

 return 1;
}
