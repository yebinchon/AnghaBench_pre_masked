
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tx; } ;
struct uart_port {int dev; TYPE_2__ icount; TYPE_1__* state; } ;
struct circ_buf {int tail; int head; } ;
struct atmel_dma_buffer {int ofs; int dma_addr; int dma_size; } ;
struct atmel_uart_port {int tx_done_mask; struct atmel_dma_buffer pdc_tx; } ;
struct TYPE_3__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int,int) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (struct uart_port*) ;
 scalar_t__ FUNC_2 (struct uart_port*) ;
 scalar_t__ FUNC_3 (struct uart_port*,int ) ;
 int FUNC_4 (struct uart_port*,int ,int) ;
 int FUNC_5 (int ,int,int ,int ) ;
 struct atmel_uart_port* FUNC_6 (struct uart_port*) ;
 scalar_t__ FUNC_7 (struct circ_buf*) ;
 int FUNC_8 (struct circ_buf*) ;
 int FUNC_9 (struct uart_port*) ;
 int FUNC_10 (struct uart_port*) ;

__attribute__((used)) static void FUNC_11(struct uart_port *VAR_9)
{
 struct atmel_uart_port *VAR_10 = FUNC_6(VAR_9);
 struct circ_buf *VAR_11 = &VAR_9->state->xmit;
 struct atmel_dma_buffer *VAR_12 = &VAR_10->pdc_tx;
 int VAR_13;


 if (FUNC_3(VAR_9, VAR_1))
  return;

 VAR_11->tail += VAR_12->ofs;
 VAR_11->tail &= VAR_7 - 1;

 VAR_9->icount.tx += VAR_12->ofs;
 VAR_12->ofs = 0;




 FUNC_4(VAR_9, VAR_0, VAR_3);

 if (!FUNC_8(VAR_11) && !FUNC_9(VAR_9)) {
  FUNC_5(VAR_9->dev,
        VAR_12->dma_addr,
        VAR_12->dma_size,
        VAR_6);

  VAR_13 = FUNC_0(VAR_11->head, VAR_11->tail, VAR_7);
  VAR_12->ofs = VAR_13;

  FUNC_4(VAR_9, VAR_2,
      VAR_12->dma_addr + VAR_11->tail);
  FUNC_4(VAR_9, VAR_1, VAR_13);

  FUNC_4(VAR_9, VAR_0, VAR_4);

  FUNC_4(VAR_9, VAR_5,
      VAR_10->tx_done_mask);
 } else {
  if (FUNC_2(VAR_9)) {

   FUNC_1(VAR_9);
  }
 }

 if (FUNC_7(VAR_11) < VAR_8)
  FUNC_10(VAR_9);
}
