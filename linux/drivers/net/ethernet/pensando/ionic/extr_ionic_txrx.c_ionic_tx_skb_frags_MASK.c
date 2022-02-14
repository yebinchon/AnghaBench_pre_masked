
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct sk_buff {unsigned int len; } ;
struct ionic_txq_sg_elem {int addr; int len; } ;
struct ionic_txq_sg_desc {struct ionic_txq_sg_elem* elems; } ;
struct ionic_tx_stats {int frags; } ;
struct ionic_queue {TYPE_3__* lif; TYPE_1__* head; } ;
struct device {int dummy; } ;
typedef int skb_frag_t ;
typedef int dma_addr_t ;
struct TYPE_8__ {int * frags; } ;
struct TYPE_7__ {TYPE_2__* ionic; } ;
struct TYPE_6__ {struct device* dev; } ;
struct TYPE_5__ {struct ionic_txq_sg_desc* sg_desc; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct device*,int ) ;
 int FUNC_3 (struct ionic_queue*,int *,int ,scalar_t__) ;
 struct ionic_tx_stats* FUNC_4 (struct ionic_queue*) ;
 scalar_t__ FUNC_5 (int *) ;
 unsigned int FUNC_6 (struct sk_buff*) ;
 TYPE_4__* FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_8(struct ionic_queue *VAR_1, struct sk_buff *VAR_2)
{
 struct ionic_txq_sg_desc *VAR_3 = VAR_1->head->sg_desc;
 unsigned int VAR_4 = VAR_2->len - FUNC_6(VAR_2);
 struct ionic_txq_sg_elem *VAR_5 = VAR_3->elems;
 struct ionic_tx_stats *VAR_6 = FUNC_4(VAR_1);
 struct device *VAR_7 = VAR_1->lif->ionic->dev;
 dma_addr_t VAR_8;
 skb_frag_t *VAR_9;
 u16 VAR_10;

 for (VAR_9 = FUNC_7(VAR_2)->frags; VAR_4; VAR_9++, VAR_5++) {
  VAR_10 = FUNC_5(VAR_9);
  VAR_5->len = FUNC_0(VAR_10);
  VAR_8 = FUNC_3(VAR_1, VAR_9, 0, VAR_10);
  if (FUNC_2(VAR_7, VAR_8))
   return -VAR_0;
  VAR_5->addr = FUNC_1(VAR_8);
  VAR_4 -= VAR_10;
  VAR_6->frags++;
 }

 return 0;
}
