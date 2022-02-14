
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {scalar_t__ len; } ;
struct spi_device {int dev; } ;
struct spi_controller {int dummy; } ;
struct at91_usart_spi {int xfer_failed; int * dev; scalar_t__ current_tx_remaining_bytes; int xfer_completion; scalar_t__ current_rx_remaining_bytes; struct spi_transfer* current_transfer; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct spi_controller*,struct spi_device*,struct spi_transfer*) ;
 unsigned long FUNC_2 (struct at91_usart_spi*) ;
 int FUNC_3 (struct spi_controller*,struct spi_transfer*) ;
 int FUNC_4 (struct at91_usart_spi*) ;
 int FUNC_5 (struct at91_usart_spi*,struct spi_transfer*) ;
 int FUNC_6 (struct at91_usart_spi*) ;
 int FUNC_7 () ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *) ;
 struct at91_usart_spi* FUNC_10 (struct spi_controller*) ;

__attribute__((used)) static int FUNC_11(struct spi_controller *VAR_1,
           struct spi_device *VAR_2,
           struct spi_transfer *VAR_3)
{
 struct at91_usart_spi *VAR_4 = FUNC_10(VAR_1);
 unsigned long VAR_5 = 0;
 int VAR_6 = 0;

 FUNC_5(VAR_4, VAR_3);
 VAR_4->xfer_failed = 0;
 VAR_4->current_transfer = VAR_3;
 VAR_4->current_tx_remaining_bytes = VAR_3->len;
 VAR_4->current_rx_remaining_bytes = VAR_3->len;

 while ((VAR_4->current_tx_remaining_bytes ||
  VAR_4->current_rx_remaining_bytes) && !VAR_4->xfer_failed) {
  FUNC_9(&VAR_4->xfer_completion);
  if (FUNC_1(VAR_1, VAR_2, VAR_3) &&
      !VAR_6) {
   VAR_6 = FUNC_3(VAR_1, VAR_3);
   if (VAR_6)
    continue;

   VAR_5 = FUNC_2(VAR_4);

   if (FUNC_0(VAR_5 == 0)) {
    FUNC_8(&VAR_2->dev, "DMA transfer timeout\n");
    return -VAR_0;
   }
   VAR_4->current_tx_remaining_bytes = 0;
  } else {
   FUNC_4(VAR_4);
   FUNC_6(VAR_4);
  }

  FUNC_7();
 }

 if (VAR_4->xfer_failed) {
  FUNC_8(VAR_4->dev, "Overrun!\n");
  return -VAR_0;
 }

 return 0;
}
