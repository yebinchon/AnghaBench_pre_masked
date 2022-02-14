
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct uart_port {unsigned int line; int irq; int dev; } ;
struct TYPE_4__ {scalar_t__ head; scalar_t__ tail; } ;
struct TYPE_5__ {TYPE_1__ xmit; } ;
struct sirfsoc_uart_port {int ms_enabled; int is_hrt_enabled; int rx_period_time; int rx_last_pos; TYPE_3__* uart_reg; int is_atlas7; scalar_t__ rx_dma_chan; int hrt; TYPE_2__ rx_dma_items; scalar_t__ pio_fetch_cnt; int cts_gpio; scalar_t__ hw_flow_ctrl; int tx_dma_state; scalar_t__ tx_dma_chan; } ;
struct sirfsoc_register {int sirfsoc_int_en_reg; int sirfsoc_rx_fifo_op; int sirfsoc_rx_dma_io_ctrl; int sirfsoc_swh_dma_io; int sirfsoc_tx_fifo_level_chk; int sirfsoc_rx_fifo_level_chk; int sirfsoc_rx_fifo_ctrl; int sirfsoc_tx_fifo_ctrl; int sirfsoc_tx_fifo_op; int sirfsoc_mode1; int sirfsoc_tx_rx_en; int sirfsoc_rx_dma_io_len; int sirfsoc_tx_dma_io_len; int sirfsoc_tx_dma_io_ctrl; } ;
struct sirfsoc_int_en {int dummy; } ;
struct TYPE_6__ {scalar_t__ uart_type; struct sirfsoc_int_en uart_int_en; struct sirfsoc_register uart_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct uart_port*) ;
 int VAR_11 ;
 char* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (unsigned int,int) ;
 int FUNC_2 (unsigned int,int) ;
 int FUNC_3 (unsigned int,int) ;
 int FUNC_4 (struct sirfsoc_int_en*,scalar_t__) ;
 int VAR_15 ;
 int FUNC_5 (unsigned int,int) ;
 int FUNC_6 (unsigned int,int) ;
 int FUNC_7 (unsigned int,int) ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,struct sirfsoc_uart_port*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *,int ,int ) ;
 int FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (int) ;
 int FUNC_15 (struct uart_port*,int ) ;
 int FUNC_16 (int ,int ,int,char*,struct sirfsoc_uart_port*) ;
 int VAR_19 ;
 int FUNC_17 (struct uart_port*) ;
 int VAR_20 ;
 struct sirfsoc_uart_port* FUNC_18 (struct uart_port*) ;
 int FUNC_19 (struct uart_port*,int ,int) ;

__attribute__((used)) static int FUNC_20(struct uart_port *VAR_21)
{
 struct sirfsoc_uart_port *VAR_22 = FUNC_18(VAR_21);
 struct sirfsoc_register *VAR_23 = &VAR_22->uart_reg->uart_reg;
 struct sirfsoc_int_en *VAR_24 = &VAR_22->uart_reg->uart_int_en;
 unsigned int VAR_25 = VAR_21->line;
 int VAR_26;
 FUNC_13(VAR_21->irq, VAR_4, VAR_3);
 VAR_26 = FUNC_16(VAR_21->irq,
    VAR_19,
    0,
    VAR_12,
    VAR_22);
 if (VAR_26 != 0) {
  FUNC_8(VAR_21->dev, "UART%d request IRQ line (%d) failed.\n",
       VAR_25, VAR_21->irq);
  goto irq_err;
 }

 FUNC_19(VAR_21, VAR_23->sirfsoc_tx_dma_io_ctrl,
  FUNC_15(VAR_21, VAR_23->sirfsoc_tx_dma_io_ctrl) |
  VAR_11);
 FUNC_19(VAR_21, VAR_23->sirfsoc_rx_dma_io_ctrl,
  FUNC_15(VAR_21, VAR_23->sirfsoc_rx_dma_io_ctrl) |
  VAR_11);
 FUNC_19(VAR_21, VAR_23->sirfsoc_rx_dma_io_ctrl,
  FUNC_15(VAR_21, VAR_23->sirfsoc_rx_dma_io_ctrl) &
  ~VAR_13);
 FUNC_19(VAR_21, VAR_23->sirfsoc_tx_dma_io_len, 0);
 FUNC_19(VAR_21, VAR_23->sirfsoc_rx_dma_io_len, 0);
 FUNC_19(VAR_21, VAR_23->sirfsoc_tx_rx_en, VAR_14 | VAR_15);
 if (VAR_22->uart_reg->uart_type == VAR_17)
  FUNC_19(VAR_21, VAR_23->sirfsoc_mode1,
   VAR_6 |
   VAR_5);
 FUNC_19(VAR_21, VAR_23->sirfsoc_tx_fifo_op, VAR_9);
 FUNC_19(VAR_21, VAR_23->sirfsoc_rx_fifo_op, VAR_9);
 FUNC_19(VAR_21, VAR_23->sirfsoc_rx_fifo_op, 0);
 FUNC_19(VAR_21, VAR_23->sirfsoc_tx_fifo_ctrl, FUNC_0(VAR_21));
 FUNC_19(VAR_21, VAR_23->sirfsoc_rx_fifo_ctrl, FUNC_0(VAR_21));
 if (VAR_22->rx_dma_chan)
  FUNC_19(VAR_21, VAR_23->sirfsoc_rx_fifo_level_chk,
   FUNC_3(VAR_21->line, 0x1) |
   FUNC_2(VAR_21->line, 0x2) |
   FUNC_1(VAR_21->line, 0x4));
 if (VAR_22->tx_dma_chan) {
  VAR_22->tx_dma_state = VAR_18;
  FUNC_19(VAR_21, VAR_23->sirfsoc_tx_fifo_level_chk,
    FUNC_7(VAR_21->line, 0x1b) |
    FUNC_6(VAR_21->line, 0xe) |
    FUNC_5(VAR_21->line, 0x4));
 }
 VAR_22->ms_enabled = 0;
 if (VAR_22->uart_reg->uart_type == VAR_17 &&
  VAR_22->hw_flow_ctrl) {
  FUNC_13(FUNC_11(VAR_22->cts_gpio),
   VAR_4, VAR_3);
  VAR_26 = FUNC_16(FUNC_11(VAR_22->cts_gpio),
   VAR_20, VAR_1 |
   VAR_2, "usp_cts_irq", VAR_22);
  if (VAR_26 != 0) {
   FUNC_8(VAR_21->dev, "UART-USP:request gpio irq fail\n");
   goto init_rx_err;
  }
 }
 if (VAR_22->uart_reg->uart_type == VAR_16 &&
  VAR_22->rx_dma_chan)
  FUNC_19(VAR_21, VAR_23->sirfsoc_swh_dma_io,
   VAR_8);
 if (VAR_22->uart_reg->uart_type == VAR_17 &&
   VAR_22->rx_dma_chan)
  FUNC_19(VAR_21, VAR_23->sirfsoc_rx_dma_io_ctrl,
   FUNC_15(VAR_21, VAR_23->sirfsoc_rx_dma_io_ctrl) |
   VAR_7);
 if (VAR_22->rx_dma_chan && !VAR_22->is_hrt_enabled) {
  VAR_22->is_hrt_enabled = 1;
  VAR_22->rx_period_time = 20000000;
  VAR_22->rx_last_pos = -1;
  VAR_22->pio_fetch_cnt = 0;
  VAR_22->rx_dma_items.xmit.tail =
   VAR_22->rx_dma_items.xmit.head = 0;
  FUNC_12(&VAR_22->hrt,
   FUNC_14(VAR_22->rx_period_time),
   VAR_0);
 }
 FUNC_19(VAR_21, VAR_23->sirfsoc_rx_fifo_op, VAR_10);
 if (VAR_22->rx_dma_chan)
  FUNC_17(VAR_21);
 else {
  if (!VAR_22->is_atlas7)
   FUNC_19(VAR_21, VAR_23->sirfsoc_int_en_reg,
    FUNC_15(VAR_21, VAR_23->sirfsoc_int_en_reg) |
    FUNC_4(VAR_24,
     VAR_22->uart_reg->uart_type));
  else
   FUNC_19(VAR_21, VAR_23->sirfsoc_int_en_reg,
    FUNC_4(VAR_24,
     VAR_22->uart_reg->uart_type));
 }
 FUNC_9(VAR_21->irq);

 return 0;
init_rx_err:
 FUNC_10(VAR_21->irq, VAR_22);
irq_err:
 return VAR_26;
}
