
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct sirfsoc_uart_port {TYPE_1__* uart_reg; int is_atlas7; scalar_t__ rx_dma_chan; } ;
struct sirfsoc_register {int sirfsoc_int_en_clr_reg; int sirfsoc_int_en_reg; int sirfsoc_rx_fifo_op; } ;
struct sirfsoc_int_en {int sirfsoc_rx_done_en; } ;
struct TYPE_2__ {int uart_type; struct sirfsoc_int_en uart_int_en; struct sirfsoc_register uart_reg; } ;


 int FUNC_0 (struct sirfsoc_int_en*,int ) ;
 int FUNC_1 (struct sirfsoc_int_en*,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct uart_port*,int ) ;
 struct sirfsoc_uart_port* FUNC_4 (struct uart_port*) ;
 int FUNC_5 (struct uart_port*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct uart_port *VAR_0)
{
 struct sirfsoc_uart_port *VAR_1 = FUNC_4(VAR_0);
 struct sirfsoc_register *VAR_2 = &VAR_1->uart_reg->uart_reg;
 struct sirfsoc_int_en *VAR_3 = &VAR_1->uart_reg->uart_int_en;

 FUNC_5(VAR_0, VAR_2->sirfsoc_rx_fifo_op, 0);
 if (VAR_1->rx_dma_chan) {
  if (!VAR_1->is_atlas7)
   FUNC_5(VAR_0, VAR_2->sirfsoc_int_en_reg,
    FUNC_3(VAR_0, VAR_2->sirfsoc_int_en_reg) &
    ~(FUNC_0(VAR_3,
    VAR_1->uart_reg->uart_type) |
    VAR_3->sirfsoc_rx_done_en));
  else
   FUNC_5(VAR_0, VAR_2->sirfsoc_int_en_clr_reg,
    FUNC_0(VAR_3,
    VAR_1->uart_reg->uart_type)|
    VAR_3->sirfsoc_rx_done_en);
  FUNC_2(VAR_1->rx_dma_chan);
 } else {
  if (!VAR_1->is_atlas7)
   FUNC_5(VAR_0, VAR_2->sirfsoc_int_en_reg,
    FUNC_3(VAR_0, VAR_2->sirfsoc_int_en_reg)&
    ~(FUNC_1(VAR_3,
    VAR_1->uart_reg->uart_type)));
  else
   FUNC_5(VAR_0, VAR_2->sirfsoc_int_en_clr_reg,
    FUNC_1(VAR_3,
    VAR_1->uart_reg->uart_type));
 }
}
