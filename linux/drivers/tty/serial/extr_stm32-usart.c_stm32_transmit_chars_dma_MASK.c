
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {unsigned int tx; } ;
struct uart_port {TYPE_3__ icount; TYPE_2__* state; } ;
struct stm32_usart_offsets {int cr3; } ;
struct stm32_port {int tx_dma_busy; int tx_ch; int tx_dma_buf; int * tx_buf; TYPE_1__* info; } ;
struct dma_async_tx_descriptor {struct uart_port* callback_param; int callback; } ;
struct circ_buf {size_t tail; size_t head; int * buf; } ;
typedef int dma_cookie_t ;
struct TYPE_5__ {struct circ_buf xmit; } ;
struct TYPE_4__ {struct stm32_usart_offsets ofs; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 struct dma_async_tx_descriptor* FUNC_1 (int ,int ,unsigned int,int ,int ) ;
 int FUNC_2 (struct dma_async_tx_descriptor*) ;
 int FUNC_3 (int *,int *,size_t) ;
 int FUNC_4 (struct uart_port*,int ,int ) ;
 int FUNC_5 (struct uart_port*) ;
 int VAR_5 ;
 struct stm32_port* FUNC_6 (struct uart_port*) ;
 unsigned int FUNC_7 (struct circ_buf*) ;

__attribute__((used)) static void FUNC_8(struct uart_port *VAR_6)
{
 struct stm32_port *VAR_7 = FUNC_6(VAR_6);
 struct stm32_usart_offsets *VAR_8 = &VAR_7->info->ofs;
 struct circ_buf *VAR_9 = &VAR_6->state->xmit;
 struct dma_async_tx_descriptor *VAR_10 = ((void*)0);
 dma_cookie_t VAR_11;
 unsigned int VAR_12, VAR_13;

 if (VAR_7->tx_dma_busy)
  return;

 VAR_7->tx_dma_busy = 1;

 VAR_12 = FUNC_7(VAR_9);

 if (VAR_12 > VAR_2)
  VAR_12 = VAR_2;

 if (VAR_9->tail < VAR_9->head) {
  FUNC_3(&VAR_7->tx_buf[0], &VAR_9->buf[VAR_9->tail], VAR_12);
 } else {
  size_t VAR_14 = VAR_3 - VAR_9->tail;
  size_t VAR_15;

  if (VAR_14 > VAR_12)
   VAR_14 = VAR_12;
  VAR_15 = VAR_12 - VAR_14;

  FUNC_3(&VAR_7->tx_buf[0], &VAR_9->buf[VAR_9->tail], VAR_14);
  if (VAR_15)
   FUNC_3(&VAR_7->tx_buf[VAR_14], &VAR_9->buf[0], VAR_15);
 }

 VAR_10 = FUNC_1(VAR_7->tx_ch,
        VAR_7->tx_dma_buf,
        VAR_12,
        VAR_0,
        VAR_1);

 if (!VAR_10) {
  for (VAR_13 = VAR_12; VAR_13 > 0; VAR_13--)
   FUNC_5(VAR_6);
  return;
 }

 VAR_10->callback = VAR_5;
 VAR_10->callback_param = VAR_6;


 VAR_11 = FUNC_2(VAR_10);


 FUNC_0(VAR_7->tx_ch);

 FUNC_4(VAR_6, VAR_8->cr3, VAR_4);

 VAR_9->tail = (VAR_9->tail + VAR_12) & (VAR_3 - 1);
 VAR_6->icount.tx += VAR_12;
}
