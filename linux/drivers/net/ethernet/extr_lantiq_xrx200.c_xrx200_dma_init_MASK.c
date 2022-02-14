
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int desc; int irq; int dev; int nr; } ;
struct xrx200_chan {TYPE_1__ dma; scalar_t__* skb; struct xrx200_priv* priv; } ;
struct xrx200_priv {struct xrx200_chan chan_rx; int dev; struct xrx200_chan chan_tx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ,int ,int ,char*,struct xrx200_chan*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct xrx200_chan*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_8(struct xrx200_priv *VAR_5)
{
 struct xrx200_chan *VAR_6 = &VAR_5->chan_rx;
 struct xrx200_chan *VAR_7 = &VAR_5->chan_tx;
 int VAR_8 = 0;
 int VAR_9;

 FUNC_6(VAR_0);

 VAR_6->dma.nr = VAR_2;
 VAR_6->dma.dev = VAR_5->dev;
 VAR_6->priv = VAR_5;

 FUNC_3(&VAR_6->dma);
 for (VAR_6->dma.desc = 0; VAR_6->dma.desc < VAR_1;
      VAR_6->dma.desc++) {
  VAR_8 = FUNC_7(VAR_6);
  if (VAR_8)
   goto rx_free;
 }
 VAR_6->dma.desc = 0;
 VAR_8 = FUNC_2(VAR_5->dev, VAR_6->dma.irq, VAR_4, 0,
          "xrx200_net_rx", &VAR_5->chan_rx);
 if (VAR_8) {
  FUNC_0(VAR_5->dev, "failed to request RX irq %d\n",
   VAR_6->dma.irq);
  goto rx_ring_free;
 }

 VAR_7->dma.nr = VAR_3;
 VAR_7->dma.dev = VAR_5->dev;
 VAR_7->priv = VAR_5;

 FUNC_4(&VAR_7->dma);
 VAR_8 = FUNC_2(VAR_5->dev, VAR_7->dma.irq, VAR_4, 0,
          "xrx200_net_tx", &VAR_5->chan_tx);
 if (VAR_8) {
  FUNC_0(VAR_5->dev, "failed to request TX irq %d\n",
   VAR_7->dma.irq);
  goto tx_free;
 }

 return VAR_8;

tx_free:
 FUNC_5(&VAR_7->dma);

rx_ring_free:

 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  if (VAR_5->chan_rx.skb[VAR_9])
   FUNC_1(VAR_5->chan_rx.skb[VAR_9]);
 }

rx_free:
 FUNC_5(&VAR_6->dma);
 return VAR_8;
}
