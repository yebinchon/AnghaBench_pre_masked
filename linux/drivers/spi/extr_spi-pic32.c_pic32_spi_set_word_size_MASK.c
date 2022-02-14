
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct pic32_spi {int flags; TYPE_1__* regs; int fifo_n_byte; int fifo_n_elm; int tx_fifo; int rx_fifo; } ;
typedef enum dma_slave_buswidth { ____Placeholder_dma_slave_buswidth } dma_slave_buswidth ;
struct TYPE_2__ {int ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct pic32_spi*,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (int,int *) ;

__attribute__((used)) static int FUNC_5(struct pic32_spi *VAR_16, u8 VAR_17)
{
 enum dma_slave_buswidth VAR_18;
 u32 VAR_19, VAR_20;

 switch (VAR_17) {
 case 8:
  VAR_16->rx_fifo = VAR_10;
  VAR_16->tx_fifo = VAR_13;
  VAR_19 = VAR_9;
  VAR_18 = VAR_2;
  break;
 case 16:
  VAR_16->rx_fifo = VAR_12;
  VAR_16->tx_fifo = VAR_15;
  VAR_19 = VAR_7;
  VAR_18 = VAR_3;
  break;
 case 32:
  VAR_16->rx_fifo = VAR_11;
  VAR_16->tx_fifo = VAR_14;
  VAR_19 = VAR_8;
  VAR_18 = VAR_4;
  break;
 default:

  return -VAR_5;
 }


 VAR_16->fifo_n_elm = FUNC_0(VAR_16->fifo_n_byte,
       VAR_17 / 8);

 VAR_20 = FUNC_2(&VAR_16->regs->ctrl);
 VAR_20 &= ~(VAR_0 << VAR_1);
 VAR_20 |= VAR_19 << VAR_1;
 FUNC_4(VAR_20, &VAR_16->regs->ctrl);


 if (FUNC_3(VAR_6, &VAR_16->flags))
  FUNC_1(VAR_16, VAR_18);

 return 0;
}
