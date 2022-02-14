
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct au1550_spi {void* rx_count; void* len; void* tx_count; int master_done; int dev; int dma_tx_ch; int dma_rx_ch; TYPE_1__* regs; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int psc_spistat; int psc_spievent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct au1550_spi*) ;
 int FUNC_1 (struct au1550_spi*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 () ;

__attribute__((used)) static irqreturn_t FUNC_8(struct au1550_spi *VAR_10)
{
 u32 VAR_11, VAR_12;

 VAR_11 = VAR_10->regs->psc_spistat;
 VAR_12 = VAR_10->regs->psc_spievent;
 FUNC_7();
 if ((VAR_11 & VAR_9) == 0) {
  FUNC_6(VAR_10->dev, "Unexpected IRQ!\n");
  return VAR_1;
 }

 if ((VAR_12 & (VAR_3 | VAR_4
    | VAR_5 | VAR_7
    | VAR_8 | VAR_6))
   != 0) {





  FUNC_0(VAR_10);
  FUNC_3(VAR_10->dma_rx_ch);
  FUNC_3(VAR_10->dma_tx_ch);


  VAR_10->rx_count = VAR_10->len - FUNC_4(VAR_10->dma_rx_ch);
  VAR_10->tx_count = VAR_10->len - FUNC_4(VAR_10->dma_tx_ch);

  FUNC_2(VAR_10->dma_rx_ch);
  FUNC_2(VAR_10->dma_tx_ch);
  FUNC_1(VAR_10);

  if (VAR_12 == VAR_4)
   FUNC_6(VAR_10->dev,
    "dma transfer: receive FIFO overflow!\n");
  else
   FUNC_6(VAR_10->dev,
    "dma transfer: unexpected SPI error "
    "(event=0x%x stat=0x%x)!\n", VAR_12, VAR_11);

  FUNC_5(&VAR_10->master_done);
  return VAR_0;
 }

 if ((VAR_12 & VAR_2) != 0) {

  FUNC_0(VAR_10);
  VAR_10->rx_count = VAR_10->len;
  VAR_10->tx_count = VAR_10->len;
  FUNC_5(&VAR_10->master_done);
 }
 return VAR_0;
}
