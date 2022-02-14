
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct z8530_channel {int* regs; int lock; int ** tx_dma_buf; scalar_t__ tx_dma_used; scalar_t__ txdma_on; int txdma; scalar_t__ sync; scalar_t__ max; int * irqs; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned long FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (struct z8530_channel*,int ) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (int ,unsigned long) ;
 int FUNC_7 (int ,unsigned long) ;
 int FUNC_8 (struct z8530_channel*,size_t,int) ;
 int VAR_10 ;
 int FUNC_9 (struct z8530_channel*,int ) ;

int FUNC_10(struct net_device *VAR_11, struct z8530_channel *VAR_12)
{
 unsigned long VAR_13, VAR_14;
 u8 VAR_15;


 FUNC_6(VAR_12->lock, VAR_14);

 VAR_12->irqs = &VAR_10;
 VAR_12->max = 0;
 VAR_12->sync = 0;





 VAR_13 = FUNC_0();

 FUNC_2(VAR_12->txdma);
 FUNC_1(VAR_12->txdma);
 VAR_12->txdma_on = 0;
 VAR_12->tx_dma_used = 0;

 FUNC_5(VAR_13);





 VAR_12->regs[VAR_4]&= ~VAR_8;
 FUNC_8(VAR_12, VAR_4, VAR_12->regs[VAR_4]);
 VAR_12->regs[VAR_4]&= ~(VAR_9|VAR_7|VAR_2);
 VAR_12->regs[VAR_4]|= VAR_1;
 FUNC_8(VAR_12, VAR_4, VAR_12->regs[VAR_4]);
 VAR_12->regs[VAR_5]&= ~VAR_0;
 FUNC_8(VAR_12, VAR_5, VAR_12->regs[VAR_5]);

 if(VAR_12->tx_dma_buf[0])
 {
  FUNC_3((unsigned long)VAR_12->tx_dma_buf[0]);
  VAR_12->tx_dma_buf[0]=((void*)0);
 }
 VAR_15=FUNC_4(VAR_12,VAR_3);
 FUNC_8(VAR_12, VAR_6, VAR_12->regs[VAR_6]);
 FUNC_9(VAR_12,0);

 FUNC_7(VAR_12->lock, VAR_14);
 return 0;
}
