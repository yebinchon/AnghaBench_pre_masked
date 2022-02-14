
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z8530_channel {int sync; int mtu; int rxdma_on; int txdma_on; int tx_dma_used; int dma_tx; int dma_ready; int* regs; int lock; int * irqs; int txdma; int rxdma; int ** rx_buf; scalar_t__ dma_num; int ** tx_dma_buf; int * skb2; int * skb; scalar_t__ count; } ;
struct net_device {int mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 unsigned long FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (unsigned long) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,unsigned long) ;
 int FUNC_11 (int ,unsigned long) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct z8530_channel*,size_t,int) ;
 int VAR_17 ;
 int FUNC_14 (struct z8530_channel*,int) ;

int FUNC_15(struct net_device *VAR_18, struct z8530_channel *VAR_19)
{
 unsigned long VAR_20, VAR_21;

 VAR_19->sync = 1;
 VAR_19->mtu = VAR_18->mtu+64;
 VAR_19->count = 0;
 VAR_19->skb = ((void*)0);
 VAR_19->skb2 = ((void*)0);



 VAR_19->rxdma_on = 0;
 VAR_19->txdma_on = 0;







 if(VAR_19->mtu > VAR_8/2)
  return -VAR_3;

 VAR_19->rx_buf[0]=(void *)FUNC_5(VAR_6|VAR_5);
 if(VAR_19->rx_buf[0]==((void*)0))
  return -VAR_4;
 VAR_19->rx_buf[1]=VAR_19->rx_buf[0]+VAR_8/2;

 VAR_19->tx_dma_buf[0]=(void *)FUNC_5(VAR_6|VAR_5);
 if(VAR_19->tx_dma_buf[0]==((void*)0))
 {
  FUNC_4((unsigned long)VAR_19->rx_buf[0]);
  VAR_19->rx_buf[0]=((void*)0);
  return -VAR_4;
 }
 VAR_19->tx_dma_buf[1]=VAR_19->tx_dma_buf[0]+VAR_8/2;

 VAR_19->tx_dma_used=0;
 VAR_19->dma_tx = 1;
 VAR_19->dma_num=0;
 VAR_19->dma_ready=1;





 FUNC_10(VAR_19->lock, VAR_20);





 VAR_19->regs[VAR_10]|= VAR_2;
 FUNC_13(VAR_19, VAR_10, VAR_19->regs[VAR_10]);

 VAR_19->regs[VAR_9]&= ~VAR_13;
 FUNC_13(VAR_19, VAR_9, VAR_19->regs[VAR_9]);





 VAR_19->regs[VAR_9]|= VAR_14;
 VAR_19->regs[VAR_9]|= VAR_16;
 VAR_19->regs[VAR_9]|= VAR_7;
 VAR_19->regs[VAR_9]&= ~VAR_13;
 FUNC_13(VAR_19, VAR_9, VAR_19->regs[VAR_9]);
 VAR_19->regs[VAR_9]|= VAR_15;
 FUNC_13(VAR_19, VAR_9, VAR_19->regs[VAR_9]);
 VAR_21=FUNC_0();

 FUNC_2(VAR_19->rxdma);
 FUNC_1(VAR_19->rxdma);
 FUNC_9(VAR_19->rxdma, VAR_0|0x10);
 FUNC_7(VAR_19->rxdma, FUNC_12(VAR_19->rx_buf[0]));
 FUNC_8(VAR_19->rxdma, VAR_19->mtu);
 FUNC_3(VAR_19->rxdma);

 FUNC_2(VAR_19->txdma);
 FUNC_1(VAR_19->txdma);
 FUNC_9(VAR_19->txdma, VAR_1);
 FUNC_2(VAR_19->txdma);

 FUNC_6(VAR_21);





 VAR_19->rxdma_on = 1;
 VAR_19->txdma_on = 1;
 VAR_19->tx_dma_used = 1;

 VAR_19->irqs = &VAR_17;
 FUNC_14(VAR_19,1);
 FUNC_13(VAR_19, VAR_11, VAR_19->regs[VAR_11]|VAR_12);

 FUNC_11(VAR_19->lock, VAR_20);

 return 0;
}
