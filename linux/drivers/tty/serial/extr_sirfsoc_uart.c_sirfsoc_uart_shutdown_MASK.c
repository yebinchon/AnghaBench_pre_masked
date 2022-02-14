
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uart_port {int irq; } ;
struct circ_buf {int tail; int head; } ;
struct TYPE_3__ {struct circ_buf xmit; } ;
struct sirfsoc_uart_port {int is_hrt_enabled; int pio_fetch_cnt; int hrt; scalar_t__ rx_dma_chan; int tx_dma_state; scalar_t__ tx_dma_chan; int cts_gpio; int rts_gpio; scalar_t__ hw_flow_ctrl; TYPE_2__* uart_reg; scalar_t__ ms_enabled; int is_atlas7; TYPE_1__ rx_dma_items; } ;
struct sirfsoc_register {int sirfsoc_rx_fifo_status; int sirfsoc_int_en_clr_reg; int sirfsoc_int_en_reg; } ;
struct TYPE_4__ {scalar_t__ uart_type; struct sirfsoc_register uart_reg; } ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,struct sirfsoc_uart_port*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct uart_port*,int ) ;
 int FUNC_6 (struct uart_port*) ;
 struct sirfsoc_uart_port* FUNC_7 (struct uart_port*) ;
 int FUNC_8 (struct uart_port*,int ,unsigned long) ;

__attribute__((used)) static void FUNC_9(struct uart_port *VAR_4)
{
 struct sirfsoc_uart_port *VAR_5 = FUNC_7(VAR_4);
 struct sirfsoc_register *VAR_6 = &VAR_5->uart_reg->uart_reg;
 struct circ_buf *VAR_7;

 VAR_7 = &VAR_5->rx_dma_items.xmit;
 if (!VAR_5->is_atlas7)
  FUNC_8(VAR_4, VAR_6->sirfsoc_int_en_reg, 0);
 else
  FUNC_8(VAR_4, VAR_6->sirfsoc_int_en_clr_reg, ~0UL);

 FUNC_1(VAR_4->irq, VAR_5);
 if (VAR_5->ms_enabled)
  FUNC_6(VAR_4);
 if (VAR_5->uart_reg->uart_type == VAR_2 &&
   VAR_5->hw_flow_ctrl) {
  FUNC_2(VAR_5->rts_gpio, 1);
  FUNC_1(FUNC_3(VAR_5->cts_gpio), VAR_5);
 }
 if (VAR_5->tx_dma_chan)
  VAR_5->tx_dma_state = VAR_3;
 if (VAR_5->rx_dma_chan && VAR_5->is_hrt_enabled) {
  while (((FUNC_5(VAR_4, VAR_6->sirfsoc_rx_fifo_status) &
   VAR_1) > VAR_5->pio_fetch_cnt) &&
   !FUNC_0(VAR_7->head, VAR_7->tail,
   VAR_0))
   ;
  VAR_5->is_hrt_enabled = 0;
  FUNC_4(&VAR_5->hrt);
 }
}
