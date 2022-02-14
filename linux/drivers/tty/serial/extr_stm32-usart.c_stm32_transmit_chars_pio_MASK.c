
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int tx; } ;
struct uart_port {TYPE_3__ icount; scalar_t__ membase; TYPE_2__* state; } ;
struct stm32_usart_offsets {scalar_t__ tdr; scalar_t__ isr; int cr3; } ;
struct stm32_port {int tx_dma_busy; TYPE_1__* info; } ;
struct circ_buf {size_t tail; int * buf; } ;
struct TYPE_5__ {struct circ_buf xmit; } ;
struct TYPE_4__ {struct stm32_usart_offsets ofs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct uart_port*,int ,int ) ;
 int FUNC_2 (struct uart_port*) ;
 int FUNC_3 (struct uart_port*) ;
 struct stm32_port* FUNC_4 (struct uart_port*) ;
 scalar_t__ FUNC_5 (struct circ_buf*) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct uart_port *VAR_3)
{
 struct stm32_port *VAR_4 = FUNC_4(VAR_3);
 struct stm32_usart_offsets *VAR_5 = &VAR_4->info->ofs;
 struct circ_buf *VAR_6 = &VAR_3->state->xmit;

 if (VAR_4->tx_dma_busy) {
  FUNC_1(VAR_3, VAR_5->cr3, VAR_1);
  VAR_4->tx_dma_busy = 0;
 }

 while (!FUNC_5(VAR_6)) {

  if (!(FUNC_0(VAR_3->membase + VAR_5->isr) & VAR_2))
   break;
  FUNC_6(VAR_6->buf[VAR_6->tail], VAR_3->membase + VAR_5->tdr);
  VAR_6->tail = (VAR_6->tail + 1) & (VAR_0 - 1);
  VAR_3->icount.tx++;
 }


 if (FUNC_5(VAR_6))
  FUNC_2(VAR_3);
 else
  FUNC_3(VAR_3);
}
