
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xrx200_priv {struct net_device* net_dev; } ;
struct TYPE_3__ {size_t desc; struct ltq_dma_desc* desc_base; } ;
struct xrx200_chan {TYPE_1__ dma; struct sk_buff** skb; struct xrx200_priv* priv; } ;
struct sk_buff {int protocol; } ;
struct TYPE_4__ {int rx_bytes; int rx_packets; } ;
struct net_device {TYPE_2__ stats; } ;
struct ltq_dma_desc {int ctl; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*,struct net_device*) ;
 int FUNC_1 (struct net_device*,char*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct xrx200_chan*) ;

__attribute__((used)) static int FUNC_5(struct xrx200_chan *VAR_3)
{
 struct xrx200_priv *VAR_4 = VAR_3->priv;
 struct ltq_dma_desc *VAR_5 = &VAR_3->dma.desc_base[VAR_3->dma.desc];
 struct sk_buff *VAR_6 = VAR_3->skb[VAR_3->dma.desc];
 int VAR_7 = (VAR_5->ctl & VAR_2);
 struct net_device *VAR_8 = VAR_4->net_dev;
 int VAR_9;

 VAR_9 = FUNC_4(VAR_3);

 VAR_3->dma.desc++;
 VAR_3->dma.desc %= VAR_1;

 if (VAR_9) {
  FUNC_1(VAR_8, "failed to allocate new rx buffer\n");
  return VAR_9;
 }

 FUNC_3(VAR_6, VAR_7);
 VAR_6->protocol = FUNC_0(VAR_6, VAR_8);
 FUNC_2(VAR_6);
 VAR_8->stats.rx_packets++;
 VAR_8->stats.rx_bytes += VAR_7 - VAR_0;

 return 0;
}
