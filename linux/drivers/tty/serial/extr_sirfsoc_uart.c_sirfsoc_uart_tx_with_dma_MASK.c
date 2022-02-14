
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct uart_port {int dev; TYPE_2__* state; } ;
struct sirfsoc_uart_port {scalar_t__ tx_dma_state; unsigned long transfer_size; int tx_dma_chan; TYPE_3__* tx_dma_desc; int tx_dma_addr; int is_atlas7; TYPE_1__* uart_reg; struct uart_port port; } ;
struct sirfsoc_register {int sirfsoc_tx_fifo_op; int sirfsoc_tx_dma_io_ctrl; int sirfsoc_int_en_reg; int sirfsoc_int_en_clr_reg; } ;
struct sirfsoc_int_en {int sirfsoc_txfifo_empty_en; } ;
struct circ_buf {scalar_t__ tail; scalar_t__ buf; int head; } ;
struct TYPE_7__ {void* callback_param; int callback; } ;
struct TYPE_6__ {struct circ_buf xmit; } ;
struct TYPE_5__ {struct sirfsoc_int_en uart_int_en; struct sirfsoc_register uart_reg; } ;


 unsigned long FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (int ,scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__,unsigned long,int ) ;
 TYPE_3__* FUNC_5 (int ,int ,unsigned long,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (struct uart_port*,int ) ;
 unsigned long FUNC_9 (struct sirfsoc_uart_port*,unsigned long) ;
 int VAR_9 ;
 scalar_t__ FUNC_10 (struct circ_buf*) ;
 scalar_t__ FUNC_11 (struct uart_port*) ;
 int FUNC_12 (struct uart_port*,int ,int) ;

__attribute__((used)) static void FUNC_13(struct sirfsoc_uart_port *VAR_10)
{
 struct uart_port *VAR_11 = &VAR_10->port;
 struct sirfsoc_register *VAR_12 = &VAR_10->uart_reg->uart_reg;
 struct sirfsoc_int_en *VAR_13 = &VAR_10->uart_reg->uart_int_en;
 struct circ_buf *VAR_14 = &VAR_11->state->xmit;
 unsigned long VAR_15;
 unsigned long VAR_16;
 unsigned long VAR_17;

 VAR_15 = FUNC_1(VAR_14->head, VAR_14->tail, VAR_8);
 VAR_16 = (unsigned long)(VAR_14->buf + VAR_14->tail);
 if (FUNC_10(VAR_14) || FUNC_11(VAR_11) ||
   !VAR_15)
  return;
 if (VAR_10->tx_dma_state == VAR_6) {
  FUNC_6(VAR_10->tx_dma_chan);
  return;
 }
 if (VAR_10->tx_dma_state == VAR_7)
  return;
 if (!VAR_10->is_atlas7)
  FUNC_12(VAR_11, VAR_12->sirfsoc_int_en_reg,
    FUNC_8(VAR_11, VAR_12->sirfsoc_int_en_reg)&
    ~(VAR_13->sirfsoc_txfifo_empty_en));
 else
  FUNC_12(VAR_11, VAR_12->sirfsoc_int_en_clr_reg,
    VAR_13->sirfsoc_txfifo_empty_en);
 if (VAR_15 < 4 || FUNC_0(VAR_16)) {
  FUNC_12(VAR_11, VAR_12->sirfsoc_tx_fifo_op, VAR_4);
  FUNC_12(VAR_11, VAR_12->sirfsoc_tx_dma_io_ctrl,
   FUNC_8(VAR_11, VAR_12->sirfsoc_tx_dma_io_ctrl)|
   VAR_5);
  if (FUNC_0(VAR_16)) {
   VAR_17 = FUNC_9(VAR_10,
    FUNC_0(VAR_16));
   VAR_15 -= VAR_17;
  }
  if (VAR_15 < 4)
   FUNC_9(VAR_10, VAR_15);
  if (!VAR_10->is_atlas7)
   FUNC_12(VAR_11, VAR_12->sirfsoc_int_en_reg,
    FUNC_8(VAR_11, VAR_12->sirfsoc_int_en_reg)|
    VAR_13->sirfsoc_txfifo_empty_en);
  else
   FUNC_12(VAR_11, VAR_12->sirfsoc_int_en_reg,
    VAR_13->sirfsoc_txfifo_empty_en);
  FUNC_12(VAR_11, VAR_12->sirfsoc_tx_fifo_op, VAR_3);
 } else {

  FUNC_12(VAR_11, VAR_12->sirfsoc_tx_fifo_op, VAR_4);
  FUNC_12(VAR_11, VAR_12->sirfsoc_tx_dma_io_ctrl,
   FUNC_8(VAR_11, VAR_12->sirfsoc_tx_dma_io_ctrl)&
   ~VAR_5);
  FUNC_12(VAR_11, VAR_12->sirfsoc_tx_fifo_op, VAR_3);
  VAR_15 &= ~(0x3);

  VAR_10->tx_dma_addr = FUNC_4(VAR_11->dev,
   VAR_14->buf + VAR_14->tail,
   VAR_15, VAR_2);
  VAR_10->tx_dma_desc = FUNC_5(
   VAR_10->tx_dma_chan, VAR_10->tx_dma_addr,
   VAR_15, VAR_0, VAR_1);
  if (!VAR_10->tx_dma_desc) {
   FUNC_2(VAR_11->dev, "DMA prep slave single fail\n");
   return;
  }
  VAR_10->tx_dma_desc->callback =
   VAR_9;
  VAR_10->tx_dma_desc->callback_param = (void *)VAR_10;
  VAR_10->transfer_size = VAR_15;

  FUNC_7(VAR_10->tx_dma_desc);
  FUNC_3(VAR_10->tx_dma_chan);
  VAR_10->tx_dma_state = VAR_7;
 }
}
