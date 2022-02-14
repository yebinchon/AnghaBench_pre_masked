
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z8530_channel {int sync; int mtu; int txdma_on; int tx_dma_used; int dma_ready; int dma_tx; int* regs; int lock; int * irqs; scalar_t__ rxdma_on; int txdma; scalar_t__ dma_num; int ** tx_dma_buf; int * skb2; int * skb; scalar_t__ count; } ;
struct net_device {int mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned long FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,unsigned long) ;
 int FUNC_8 (int ,unsigned long) ;
 int FUNC_9 (struct z8530_channel*,size_t,int) ;
 int FUNC_10 (struct z8530_channel*,int) ;
 int FUNC_11 (struct z8530_channel*) ;
 int VAR_12 ;

int FUNC_12(struct net_device *VAR_13, struct z8530_channel *VAR_14)
{
 unsigned long VAR_15, VAR_16;

 FUNC_4("Opening sync interface for TX-DMA\n");
 VAR_14->sync = 1;
 VAR_14->mtu = VAR_13->mtu+64;
 VAR_14->count = 0;
 VAR_14->skb = ((void*)0);
 VAR_14->skb2 = ((void*)0);







 if(VAR_14->mtu > VAR_6/2)
  return -VAR_2;

 VAR_14->tx_dma_buf[0]=(void *)FUNC_3(VAR_5|VAR_4);
 if(VAR_14->tx_dma_buf[0]==((void*)0))
  return -VAR_3;

 VAR_14->tx_dma_buf[1] = VAR_14->tx_dma_buf[0] + VAR_6/2;


 FUNC_7(VAR_14->lock, VAR_15);





 FUNC_11(VAR_14);
 FUNC_11(VAR_14);





 VAR_14->rxdma_on = 0;
 VAR_14->txdma_on = 0;

 VAR_14->tx_dma_used=0;
 VAR_14->dma_num=0;
 VAR_14->dma_ready=1;
 VAR_14->dma_tx = 1;
 VAR_14->regs[VAR_8]|= VAR_1;
 FUNC_9(VAR_14, VAR_8, VAR_14->regs[VAR_8]);

 VAR_14->regs[VAR_7]&= ~VAR_11;
 FUNC_9(VAR_14, VAR_7, VAR_14->regs[VAR_7]);





 VAR_16 = FUNC_0();

 FUNC_2(VAR_14->txdma);
 FUNC_1(VAR_14->txdma);
 FUNC_6(VAR_14->txdma, VAR_0);
 FUNC_2(VAR_14->txdma);

 FUNC_5(VAR_16);





 VAR_14->rxdma_on = 0;
 VAR_14->txdma_on = 1;
 VAR_14->tx_dma_used = 1;

 VAR_14->irqs = &VAR_12;
 FUNC_10(VAR_14,1);
 FUNC_9(VAR_14, VAR_9, VAR_14->regs[VAR_9]|VAR_10);
 FUNC_8(VAR_14->lock, VAR_15);

 return 0;
}
