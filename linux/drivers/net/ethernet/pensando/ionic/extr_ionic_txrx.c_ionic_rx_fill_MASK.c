
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {unsigned int mtu; } ;
struct ionic_rxq_desc {int opcode; int len; int addr; } ;
struct ionic_queue {TYPE_1__* head; TYPE_2__* lif; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {struct net_device* netdev; } ;
struct TYPE_3__ {int index; struct ionic_rxq_desc* desc; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (struct ionic_queue*) ;
 int VAR_3 ;
 struct sk_buff* FUNC_3 (struct ionic_queue*,unsigned int,int *) ;
 int FUNC_4 (struct ionic_queue*,int,int ,struct sk_buff*) ;

void FUNC_5(struct ionic_queue *VAR_4)
{
 struct net_device *VAR_5 = VAR_4->lif->netdev;
 struct ionic_rxq_desc *VAR_6;
 struct sk_buff *VAR_7;
 dma_addr_t VAR_8;
 bool VAR_9;
 unsigned int VAR_10;
 unsigned int VAR_11;

 VAR_10 = VAR_5->mtu + VAR_0;

 for (VAR_11 = FUNC_2(VAR_4); VAR_11; VAR_11--) {
  VAR_7 = FUNC_3(VAR_4, VAR_10, &VAR_8);
  if (!VAR_7)
   return;

  VAR_6 = VAR_4->head->desc;
  VAR_6->addr = FUNC_1(VAR_8);
  VAR_6->len = FUNC_0(VAR_10);
  VAR_6->opcode = VAR_1;

  VAR_9 = ((VAR_4->head->index + 1) &
    VAR_2) == 0;

  FUNC_4(VAR_4, VAR_9, VAR_3, VAR_7);
 }
}
