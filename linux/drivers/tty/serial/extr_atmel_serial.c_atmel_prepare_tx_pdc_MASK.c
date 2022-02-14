
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dev; TYPE_1__* state; } ;
struct circ_buf {int buf; } ;
struct atmel_dma_buffer {scalar_t__ ofs; int dma_size; int buf; int dma_addr; } ;
struct atmel_uart_port {struct atmel_dma_buffer pdc_tx; } ;
struct TYPE_2__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 struct atmel_uart_port* FUNC_1 (struct uart_port*) ;

__attribute__((used)) static int FUNC_2(struct uart_port *VAR_2)
{
 struct atmel_uart_port *VAR_3 = FUNC_1(VAR_2);
 struct atmel_dma_buffer *VAR_4 = &VAR_3->pdc_tx;
 struct circ_buf *VAR_5 = &VAR_2->state->xmit;

 VAR_4->buf = VAR_5->buf;
 VAR_4->dma_addr = FUNC_0(VAR_2->dev,
     VAR_4->buf,
     VAR_1,
     VAR_0);
 VAR_4->dma_size = VAR_1;
 VAR_4->ofs = 0;

 return 0;
}
