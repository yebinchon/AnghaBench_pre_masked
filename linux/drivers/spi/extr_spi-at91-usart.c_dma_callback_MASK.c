
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_controller {int dummy; } ;
struct at91_usart_spi {int xfer_completion; scalar_t__ current_rx_remaining_bytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct at91_usart_spi*,int ,int ) ;
 int FUNC_1 (int *) ;
 struct at91_usart_spi* FUNC_2 (struct spi_controller*) ;

__attribute__((used)) static void FUNC_3(void *VAR_2)
{
 struct spi_controller *VAR_3 = VAR_2;
 struct at91_usart_spi *VAR_4 = FUNC_2(VAR_3);

 FUNC_0(VAR_4, VAR_0, VAR_1);
 VAR_4->current_rx_remaining_bytes = 0;
 FUNC_1(&VAR_4->xfer_completion);
}
