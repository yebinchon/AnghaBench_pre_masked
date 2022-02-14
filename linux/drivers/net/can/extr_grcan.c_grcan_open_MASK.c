
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int name; int irq; } ;
struct TYPE_6__ {int ctrlmode; void* echo_skb; int echo_skb_max; } ;
struct TYPE_4__ {int rxsize; int txsize; } ;
struct TYPE_5__ {int size; } ;
struct grcan_dma {TYPE_2__ tx; } ;
struct grcan_priv {int resetting; int closing; void* echo_skb; void* txdlc; int lock; TYPE_3__ can; int napi; TYPE_1__ config; struct grcan_dma dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int ,int ) ;
 int FUNC_2 (struct net_device*) ;
 int VAR_4 ;
 int FUNC_3 (struct net_device*) ;
 void* FUNC_4 (int ,int,int ) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct net_device*,char*) ;
 struct grcan_priv* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (int ,int ,int ,int ,struct net_device*) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_14(struct net_device *VAR_5)
{
 struct grcan_priv *VAR_6 = FUNC_8(VAR_5);
 struct grcan_dma *VAR_7 = &VAR_6->dma;
 unsigned long VAR_8;
 int VAR_9;


 VAR_9 = FUNC_1(VAR_5, VAR_6->config.txsize,
      VAR_6->config.rxsize);
 if (VAR_9) {
  FUNC_7(VAR_5, "could not allocate DMA buffers\n");
  return VAR_9;
 }

 VAR_6->echo_skb = FUNC_4(VAR_7->tx.size, sizeof(*VAR_6->echo_skb),
     VAR_2);
 if (!VAR_6->echo_skb) {
  VAR_9 = -VAR_1;
  goto exit_free_dma_buffers;
 }
 VAR_6->can.echo_skb_max = VAR_7->tx.size;
 VAR_6->can.echo_skb = VAR_6->echo_skb;

 VAR_6->txdlc = FUNC_4(VAR_7->tx.size, sizeof(*VAR_6->txdlc), VAR_2);
 if (!VAR_6->txdlc) {
  VAR_9 = -VAR_1;
  goto exit_free_echo_skb;
 }


 VAR_9 = FUNC_10(VAR_5);
 if (VAR_9)
  goto exit_free_txdlc;

 VAR_9 = FUNC_11(VAR_5->irq, VAR_4, VAR_3,
     VAR_5->name, VAR_5);
 if (VAR_9)
  goto exit_close_candev;

 FUNC_12(&VAR_6->lock, VAR_8);

 FUNC_6(&VAR_6->napi);
 FUNC_3(VAR_5);
 if (!(VAR_6->can.ctrlmode & VAR_0))
  FUNC_9(VAR_5);
 VAR_6->resetting = 0;
 VAR_6->closing = 0;

 FUNC_13(&VAR_6->lock, VAR_8);

 return 0;

exit_close_candev:
 FUNC_0(VAR_5);
exit_free_txdlc:
 FUNC_5(VAR_6->txdlc);
exit_free_echo_skb:
 FUNC_5(VAR_6->echo_skb);
exit_free_dma_buffers:
 FUNC_2(VAR_5);
 return VAR_9;
}
