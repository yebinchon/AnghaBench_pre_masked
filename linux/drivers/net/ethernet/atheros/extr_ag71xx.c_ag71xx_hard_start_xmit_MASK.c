
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int len; int data; } ;
struct TYPE_10__ {int tx_dropped; } ;
struct net_device {TYPE_5__ stats; } ;
struct ag71xx_ring {int curr; int dirty; scalar_t__ desc_split; TYPE_3__* buf; int order; } ;
struct ag71xx_desc {int ctrl; } ;
struct ag71xx {TYPE_4__* pdev; TYPE_1__* dcfg; struct ag71xx_ring tx_ring; } ;
typedef int netdev_tx_t ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_9__ {int dev; } ;
struct TYPE_7__ {int len; struct sk_buff* skb; } ;
struct TYPE_8__ {TYPE_2__ tx; } ;
struct TYPE_6__ {int desc_pktlen_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ag71xx_ring*,int ,int) ;
 struct ag71xx_desc* FUNC_2 (struct ag71xx_ring*,int) ;
 int FUNC_3 (struct ag71xx*,int ,int ) ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (int *,int ,int,int ) ;
 int FUNC_6 (int *,scalar_t__,int,int ) ;
 struct ag71xx* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*,int) ;
 int FUNC_9 (struct ag71xx*,int ,struct net_device*,char*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct sk_buff*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_12 () ;

__attribute__((used)) static netdev_tx_t FUNC_13(struct sk_buff *VAR_8,
       struct net_device *VAR_9)
{
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 struct ag71xx *VAR_15 = FUNC_7(VAR_9);
 struct ag71xx_ring *VAR_16;
 struct ag71xx_desc *VAR_17;
 dma_addr_t VAR_18;

 VAR_16 = &VAR_15->tx_ring;
 VAR_13 = FUNC_0(VAR_16->order) - 1;
 VAR_14 = FUNC_0(VAR_16->order);

 if (VAR_8->len <= 4) {
  FUNC_9(VAR_15, VAR_6, VAR_9, "packet len is too small\n");
  goto err_drop;
 }

 VAR_18 = FUNC_5(&VAR_15->pdev->dev, VAR_8->data, VAR_8->len,
      VAR_3);

 VAR_10 = VAR_16->curr & VAR_13;
 VAR_17 = FUNC_2(VAR_16, VAR_10);


 VAR_11 = FUNC_1(VAR_16, (u32)VAR_18,
     VAR_8->len & VAR_15->dcfg->desc_pktlen_mask);
 if (VAR_11 < 0)
  goto err_drop_unmap;

 VAR_10 = (VAR_16->curr + VAR_11 - 1) & VAR_13;
 VAR_16->buf[VAR_10].tx.len = VAR_8->len;
 VAR_16->buf[VAR_10].tx.skb = VAR_8;

 FUNC_8(VAR_9, VAR_8->len);

 FUNC_11(VAR_8);

 VAR_17->ctrl &= ~VAR_2;
 VAR_16->curr += VAR_11;


 FUNC_12();

 VAR_12 = 2;
 if (VAR_16->desc_split)
  VAR_12 *= VAR_1;

 if (VAR_16->curr - VAR_16->dirty >= VAR_14 - VAR_12) {
  FUNC_9(VAR_15, VAR_6, VAR_9, "tx queue full\n");
  FUNC_10(VAR_9);
 }

 FUNC_9(VAR_15, VAR_7, VAR_9, "packet injected into TX queue\n");


 FUNC_3(VAR_15, VAR_0, VAR_5);

 return VAR_4;

err_drop_unmap:
 FUNC_6(&VAR_15->pdev->dev, VAR_18, VAR_8->len, VAR_3);

err_drop:
 VAR_9->stats.tx_dropped++;

 FUNC_4(VAR_8);
 return VAR_4;
}
