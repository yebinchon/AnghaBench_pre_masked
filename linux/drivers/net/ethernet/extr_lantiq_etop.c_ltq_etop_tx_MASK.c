
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u32 ;
struct sk_buff {int len; int data; } ;
struct netdev_queue {int dummy; } ;
struct net_device {int dummy; } ;
struct ltq_etop_priv {int lock; TYPE_1__* pdev; struct ltq_etop_chan* ch; } ;
struct TYPE_4__ {size_t desc; struct ltq_dma_desc* desc_base; } ;
struct ltq_etop_chan {TYPE_2__ dma; struct sk_buff** skb; } ;
struct ltq_dma_desc {int ctl; unsigned int addr; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (unsigned int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (int *,int ,int,int ) ;
 int FUNC_4 (struct net_device*,char*) ;
 struct netdev_queue* FUNC_5 (struct net_device*,int) ;
 struct ltq_etop_priv* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct netdev_queue*) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 () ;

__attribute__((used)) static int
FUNC_13(struct sk_buff *VAR_10, struct net_device *VAR_11)
{
 int VAR_12 = FUNC_9(VAR_10);
 struct netdev_queue *VAR_13 = FUNC_5(VAR_11, VAR_12);
 struct ltq_etop_priv *VAR_14 = FUNC_6(VAR_11);
 struct ltq_etop_chan *VAR_15 = &VAR_14->ch[(VAR_12 << 1) | 1];
 struct ltq_dma_desc *VAR_16 = &VAR_15->dma.desc_base[VAR_15->dma.desc];
 int VAR_17;
 unsigned long VAR_18;
 u32 VAR_19;

 VAR_17 = VAR_10->len < VAR_1 ? VAR_1 : VAR_10->len;

 if ((VAR_16->ctl & (VAR_5 | VAR_3)) || VAR_15->skb[VAR_15->dma.desc]) {
  FUNC_2(VAR_10);
  FUNC_4(VAR_11, "tx ring full\n");
  FUNC_8(VAR_13);
  return VAR_8;
 }


 VAR_19 = FUNC_0(VAR_10->data) % 16;
 VAR_15->skb[VAR_15->dma.desc] = VAR_10;

 FUNC_7(VAR_11);

 FUNC_10(&VAR_14->lock, VAR_18);
 VAR_16->addr = ((unsigned int) FUNC_3(&VAR_14->pdev->dev, VAR_10->data, VAR_17,
      VAR_0)) - VAR_19;
 FUNC_12();
 VAR_16->ctl = VAR_5 | VAR_7 | VAR_4 |
  FUNC_1(VAR_19) | (VAR_17 & VAR_6);
 VAR_15->dma.desc++;
 VAR_15->dma.desc %= VAR_2;
 FUNC_11(&VAR_14->lock, VAR_18);

 if (VAR_15->dma.desc_base[VAR_15->dma.desc].ctl & VAR_5)
  FUNC_8(VAR_13);

 return VAR_9;
}
