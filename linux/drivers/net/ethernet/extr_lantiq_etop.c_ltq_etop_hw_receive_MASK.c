
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int protocol; } ;
struct ltq_etop_priv {int lock; } ;
struct TYPE_2__ {size_t desc; struct ltq_dma_desc* desc_base; } ;
struct ltq_etop_chan {int netdev; TYPE_1__ dma; struct sk_buff** skb; } ;
struct ltq_dma_desc {int ctl; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (struct ltq_etop_chan*) ;
 int FUNC_3 (int ,char*) ;
 struct ltq_etop_priv* FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_9(struct ltq_etop_chan *VAR_3)
{
 struct ltq_etop_priv *VAR_4 = FUNC_4(VAR_3->netdev);
 struct ltq_dma_desc *VAR_5 = &VAR_3->dma.desc_base[VAR_3->dma.desc];
 struct sk_buff *VAR_6 = VAR_3->skb[VAR_3->dma.desc];
 int VAR_7 = (VAR_5->ctl & VAR_1) - VAR_2;
 unsigned long VAR_8;

 FUNC_7(&VAR_4->lock, VAR_8);
 if (FUNC_2(VAR_3)) {
  FUNC_3(VAR_3->netdev,
   "failed to allocate new rx buffer, stopping DMA\n");
  FUNC_1(&VAR_3->dma);
 }
 VAR_3->dma.desc++;
 VAR_3->dma.desc %= VAR_0;
 FUNC_8(&VAR_4->lock, VAR_8);

 FUNC_6(VAR_6, VAR_7);
 VAR_6->protocol = FUNC_0(VAR_6, VAR_3->netdev);
 FUNC_5(VAR_6);
}
