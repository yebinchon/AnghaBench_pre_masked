
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {size_t desc; struct ltq_dma_desc* desc_base; } ;
struct xrx200_chan {size_t tx_free; TYPE_1__ dma; struct sk_buff** skb; } ;
struct xrx200_priv {int dev; struct xrx200_chan chan_tx; } ;
struct sk_buff {int len; int data; struct net_device* dev; } ;
struct TYPE_4__ {int tx_errors; int tx_dropped; } ;
struct net_device {TYPE_2__ stats; } ;
struct ltq_dma_desc {int ctl; int addr; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,int ,int,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct net_device*,char*) ;
 struct xrx200_priv* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*,int) ;
 int FUNC_7 (struct net_device*) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 () ;

__attribute__((used)) static int FUNC_11(struct sk_buff *VAR_10, struct net_device *VAR_11)
{
 struct xrx200_priv *VAR_12 = FUNC_5(VAR_11);
 struct xrx200_chan *VAR_13 = &VAR_12->chan_tx;
 struct ltq_dma_desc *VAR_14 = &VAR_13->dma.desc_base[VAR_13->dma.desc];
 u32 VAR_15;
 dma_addr_t VAR_16;
 int VAR_17;

 VAR_10->dev = VAR_11;
 if (FUNC_8(VAR_10, VAR_1)) {
  VAR_11->stats.tx_dropped++;
  return VAR_9;
 }

 VAR_17 = VAR_10->len;

 if ((VAR_14->ctl & (VAR_5 | VAR_3)) || VAR_13->skb[VAR_13->dma.desc]) {
  FUNC_4(VAR_11, "tx ring full\n");
  FUNC_7(VAR_11);
  return VAR_8;
 }

 VAR_13->skb[VAR_13->dma.desc] = VAR_10;

 VAR_16 = FUNC_2(VAR_12->dev, VAR_10->data, VAR_17, VAR_0);
 if (FUNC_9(FUNC_3(VAR_12->dev, VAR_16)))
  goto err_drop;


 VAR_15 = VAR_16 % 16;

 VAR_14->addr = VAR_16 - VAR_15;

 FUNC_10();
 VAR_14->ctl = VAR_5 | VAR_7 | VAR_4 |
  FUNC_0(VAR_15) | (VAR_17 & VAR_6);
 VAR_13->dma.desc++;
 VAR_13->dma.desc %= VAR_2;
 if (VAR_13->dma.desc == VAR_13->tx_free)
  FUNC_7(VAR_11);

 FUNC_6(VAR_11, VAR_17);

 return VAR_9;

err_drop:
 FUNC_1(VAR_10);
 VAR_11->stats.tx_dropped++;
 VAR_11->stats.tx_errors++;
 return VAR_9;
}
