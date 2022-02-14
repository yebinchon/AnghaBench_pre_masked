
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct at91_usart_spi {int current_rx_remaining_bytes; TYPE_1__* current_transfer; } ;
struct TYPE_2__ {int len; int * rx_buf; } ;


 int VAR_0 ;
 int FUNC_0 (struct at91_usart_spi*,int ) ;

__attribute__((used)) static inline void FUNC_1(struct at91_usart_spi *VAR_1)
{
 int VAR_2 = VAR_1->current_transfer->len;
 int VAR_3 = VAR_1->current_rx_remaining_bytes;
 u8 *VAR_4 = VAR_1->current_transfer->rx_buf;

 if (!VAR_3)
  return;

 VAR_4[VAR_2 - VAR_3] = FUNC_0(VAR_1, VAR_0);
 VAR_1->current_rx_remaining_bytes--;
}
