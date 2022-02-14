
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct at91_usart_spi {unsigned int current_tx_remaining_bytes; TYPE_1__* current_transfer; } ;
struct TYPE_2__ {unsigned int len; int * tx_buf; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct at91_usart_spi*) ;
 int FUNC_1 (struct at91_usart_spi*,int ,int const) ;

__attribute__((used)) static inline void FUNC_2(struct at91_usart_spi *VAR_1)
{
 unsigned int VAR_2 = VAR_1->current_transfer->len;
 unsigned int VAR_3 = VAR_1->current_tx_remaining_bytes;
 const u8 *VAR_4 = VAR_1->current_transfer->tx_buf;

 if (!VAR_3)
  return;

 if (FUNC_0(VAR_1)) {
  FUNC_1(VAR_1, VAR_0, VAR_4[VAR_2 - VAR_3]);
  VAR_1->current_tx_remaining_bytes--;
 }
}
