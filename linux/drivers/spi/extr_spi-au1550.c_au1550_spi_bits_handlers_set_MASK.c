
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct au1550_spi {int * irq_callback; int * txrx_bufs; int * tx_word; int * rx_word; scalar_t__ usedma; } ;


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

__attribute__((used)) static void FUNC_0(struct au1550_spi *VAR_10, int VAR_11)
{
 if (VAR_11 <= 8) {
  if (VAR_10->usedma) {
   VAR_10->txrx_bufs = &VAR_1;
   VAR_10->irq_callback = &VAR_0;
  } else {
   VAR_10->rx_word = &VAR_6;
   VAR_10->tx_word = &VAR_9;
   VAR_10->txrx_bufs = &VAR_3;
   VAR_10->irq_callback = &VAR_2;
  }
 } else if (VAR_11 <= 16) {
  VAR_10->rx_word = &VAR_4;
  VAR_10->tx_word = &VAR_7;
  VAR_10->txrx_bufs = &VAR_3;
  VAR_10->irq_callback = &VAR_2;
 } else {
  VAR_10->rx_word = &VAR_5;
  VAR_10->tx_word = &VAR_8;
  VAR_10->txrx_bufs = &VAR_3;
  VAR_10->irq_callback = &VAR_2;
 }
}
