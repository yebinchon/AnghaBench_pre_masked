
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int tx; } ;
struct uart_port {TYPE_3__ icount; scalar_t__ x_char; scalar_t__ membase; TYPE_2__* state; } ;
struct stm32_usart_offsets {scalar_t__ cr3; scalar_t__ icr; scalar_t__ isr; scalar_t__ tdr; } ;
struct stm32_port {scalar_t__ tx_ch; scalar_t__ tx_dma_busy; TYPE_1__* info; } ;
struct circ_buf {int dummy; } ;
struct TYPE_5__ {struct circ_buf xmit; } ;
struct TYPE_4__ {struct stm32_usart_offsets ofs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct uart_port*,scalar_t__,int ) ;
 int FUNC_1 (struct uart_port*,scalar_t__,int ) ;
 int FUNC_2 (struct uart_port*) ;
 int FUNC_3 (struct uart_port*) ;
 int FUNC_4 (struct uart_port*) ;
 struct stm32_port* FUNC_5 (struct uart_port*) ;
 scalar_t__ FUNC_6 (struct circ_buf*) ;
 scalar_t__ FUNC_7 (struct circ_buf*) ;
 scalar_t__ FUNC_8 (struct uart_port*) ;
 int FUNC_9 (struct uart_port*) ;
 int FUNC_10 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_11(struct uart_port *VAR_5)
{
 struct stm32_port *VAR_6 = FUNC_5(VAR_5);
 struct stm32_usart_offsets *VAR_7 = &VAR_6->info->ofs;
 struct circ_buf *VAR_8 = &VAR_5->state->xmit;

 if (VAR_5->x_char) {
  if (VAR_6->tx_dma_busy)
   FUNC_0(VAR_5, VAR_7->cr3, VAR_1);
  FUNC_10(VAR_5->x_char, VAR_5->membase + VAR_7->tdr);
  VAR_5->x_char = 0;
  VAR_5->icount.tx++;
  if (VAR_6->tx_dma_busy)
   FUNC_1(VAR_5, VAR_7->cr3, VAR_1);
  return;
 }

 if (FUNC_7(VAR_8) || FUNC_8(VAR_5)) {
  FUNC_4(VAR_5);
  return;
 }

 if (VAR_7->icr == VAR_0)
  FUNC_0(VAR_5, VAR_7->isr, VAR_3);
 else
  FUNC_1(VAR_5, VAR_7->icr, VAR_2);

 if (VAR_6->tx_ch)
  FUNC_2(VAR_5);
 else
  FUNC_3(VAR_5);

 if (FUNC_6(VAR_8) < VAR_4)
  FUNC_9(VAR_5);

 if (FUNC_7(VAR_8))
  FUNC_4(VAR_5);
}
