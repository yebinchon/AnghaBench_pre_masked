
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int delta_msr_wait; } ;
struct circ_buf {int dummy; } ;
struct uart_state {TYPE_3__ port; struct circ_buf xmit; } ;
struct TYPE_4__ {int parity; int frame; int overrun; int brk; } ;
struct uart_port {unsigned long read_status_mask; int lock; int fifosize; TYPE_1__ icount; struct uart_state* state; } ;
struct sirfsoc_uart_port {scalar_t__ tx_dma_chan; int is_atlas7; int rx_dma_chan; int tx_dma_state; TYPE_2__* uart_reg; struct uart_port port; } ;
struct sirfsoc_register {int sirfsoc_tx_fifo_status; int sirfsoc_int_en_reg; int sirfsoc_int_en_clr_reg; int sirfsoc_afc_ctrl; int sirfsoc_rx_fifo_op; int sirfsoc_int_st_reg; } ;
struct sirfsoc_int_status {unsigned long sirfsoc_rxd_brk; unsigned long sirfsoc_rx_oflow; unsigned long sirfsoc_frm_err; unsigned long sirfsoc_parity_err; unsigned long sirfsoc_rx_done; unsigned long sirfsoc_rx_timeout; unsigned long sirfsoc_txfifo_empty; } ;
struct sirfsoc_int_en {unsigned long sirfsoc_rx_done_en; unsigned long sirfsoc_rx_timeout_en; int sirfsoc_rx_oflow_en; } ;
struct sirfsoc_fifo_status {unsigned long (* ff_empty ) (struct uart_port*) ;} ;
typedef int irqreturn_t ;
struct TYPE_5__ {scalar_t__ uart_type; struct sirfsoc_int_en uart_int_en; struct sirfsoc_int_status uart_int_st; struct sirfsoc_fifo_status fifo_status; struct sirfsoc_register uart_reg; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (struct sirfsoc_int_status*) ;
 unsigned long FUNC_1 (struct sirfsoc_int_status*,scalar_t__) ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long FUNC_2 (struct sirfsoc_int_status*) ;
 scalar_t__ VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long FUNC_3 (struct uart_port*,int ) ;
 int FUNC_4 (struct uart_port*,int ) ;
 int FUNC_5 (struct sirfsoc_uart_port*,int ) ;
 int FUNC_6 (struct uart_port*) ;
 int FUNC_7 (struct sirfsoc_uart_port*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 unsigned long FUNC_10 (struct uart_port*) ;
 int FUNC_11 (TYPE_3__*) ;
 scalar_t__ FUNC_12 (struct circ_buf*) ;
 scalar_t__ FUNC_13 (struct uart_port*) ;
 int FUNC_14 (struct uart_port*,unsigned long) ;
 int FUNC_15 (struct uart_port*,unsigned long,int ,int ,unsigned long) ;
 scalar_t__ FUNC_16 (struct uart_port*) ;
 scalar_t__ FUNC_17 (unsigned long) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (struct uart_port*,int ,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_20(int VAR_9, void *VAR_10)
{
 unsigned long VAR_11;
 unsigned long VAR_12;
 unsigned long VAR_13 = VAR_6;
 struct sirfsoc_uart_port *VAR_14 = (struct sirfsoc_uart_port *)VAR_10;
 struct uart_port *VAR_15 = &VAR_14->port;
 struct sirfsoc_register *VAR_16 = &VAR_14->uart_reg->uart_reg;
 struct sirfsoc_fifo_status *VAR_17 = &VAR_14->uart_reg->fifo_status;
 struct sirfsoc_int_status *VAR_18 = &VAR_14->uart_reg->uart_int_st;
 struct sirfsoc_int_en *VAR_19 = &VAR_14->uart_reg->uart_int_en;
 struct uart_state *VAR_20 = VAR_15->state;
 struct circ_buf *VAR_21 = &VAR_15->state->xmit;
 FUNC_8(&VAR_15->lock);
 VAR_11 = FUNC_3(VAR_15, VAR_16->sirfsoc_int_st_reg);
 FUNC_19(VAR_15, VAR_16->sirfsoc_int_st_reg, VAR_11);
 VAR_11 &= FUNC_3(VAR_15, VAR_16->sirfsoc_int_en_reg);
 if (FUNC_17(VAR_11 & (FUNC_1(VAR_18,
    VAR_14->uart_reg->uart_type)))) {
  if (VAR_11 & VAR_18->sirfsoc_rxd_brk) {
   VAR_15->icount.brk++;
   if (FUNC_13(VAR_15))
    goto recv_char;
  }
  if (VAR_11 & VAR_18->sirfsoc_rx_oflow) {
   VAR_15->icount.overrun++;
   VAR_13 = VAR_7;
  }
  if (VAR_11 & VAR_18->sirfsoc_frm_err) {
   VAR_15->icount.frame++;
   VAR_13 = VAR_5;
  }
  if (VAR_11 & VAR_18->sirfsoc_parity_err) {
   VAR_15->icount.parity++;
   VAR_13 = VAR_8;
  }
  FUNC_19(VAR_15, VAR_16->sirfsoc_rx_fifo_op, VAR_2);
  FUNC_19(VAR_15, VAR_16->sirfsoc_rx_fifo_op, 0);
  FUNC_19(VAR_15, VAR_16->sirfsoc_rx_fifo_op, VAR_3);
  VAR_11 &= VAR_15->read_status_mask;
  FUNC_15(VAR_15, VAR_11,
     VAR_19->sirfsoc_rx_oflow_en, 0, VAR_13);
 }
recv_char:
 if ((VAR_14->uart_reg->uart_type == VAR_4) &&
   (VAR_11 & FUNC_0(VAR_18)) &&
   !VAR_14->tx_dma_state) {
  VAR_12 = FUNC_3(VAR_15, VAR_16->sirfsoc_afc_ctrl) &
     VAR_1;
  if (VAR_12 != 0)
   VAR_12 = 0;
  else
   VAR_12 = 1;
  FUNC_14(VAR_15, VAR_12);
  FUNC_18(&VAR_20->port.delta_msr_wait);
 }
 if (!VAR_14->rx_dma_chan &&
  (VAR_11 & FUNC_2(VAR_18))) {
  if (VAR_11 & VAR_18->sirfsoc_rx_done) {
   if (!VAR_14->is_atlas7) {
    FUNC_19(VAR_15, VAR_16->sirfsoc_int_en_reg,
     FUNC_3(VAR_15, VAR_16->sirfsoc_int_en_reg)
     & ~(VAR_19->sirfsoc_rx_done_en));
    FUNC_19(VAR_15, VAR_16->sirfsoc_int_en_reg,
    FUNC_3(VAR_15, VAR_16->sirfsoc_int_en_reg)
    | (VAR_19->sirfsoc_rx_timeout_en));
   } else {
    FUNC_19(VAR_15, VAR_16->sirfsoc_int_en_clr_reg,
     VAR_19->sirfsoc_rx_done_en);
    FUNC_19(VAR_15, VAR_16->sirfsoc_int_en_reg,
     VAR_19->sirfsoc_rx_timeout_en);
   }
  } else {
   if (VAR_11 & VAR_18->sirfsoc_rx_timeout) {
    if (!VAR_14->is_atlas7) {
     FUNC_19(VAR_15, VAR_16->sirfsoc_int_en_reg,
     FUNC_3(VAR_15, VAR_16->sirfsoc_int_en_reg)
     & ~(VAR_19->sirfsoc_rx_timeout_en));
     FUNC_19(VAR_15, VAR_16->sirfsoc_int_en_reg,
     FUNC_3(VAR_15, VAR_16->sirfsoc_int_en_reg)
     | (VAR_19->sirfsoc_rx_done_en));
    } else {
     FUNC_19(VAR_15,
      VAR_16->sirfsoc_int_en_clr_reg,
      VAR_19->sirfsoc_rx_timeout_en);
     FUNC_19(VAR_15, VAR_16->sirfsoc_int_en_reg,
      VAR_19->sirfsoc_rx_done_en);
    }
   }
   FUNC_4(VAR_15, VAR_15->fifosize);
  }
 }
 FUNC_9(&VAR_15->lock);
 FUNC_11(&VAR_20->port);
 FUNC_8(&VAR_15->lock);
 if (VAR_11 & VAR_18->sirfsoc_txfifo_empty) {
  if (VAR_14->tx_dma_chan)
   FUNC_7(VAR_14);
  else {
   if (FUNC_12(VAR_21) || FUNC_16(VAR_15)) {
    FUNC_9(&VAR_15->lock);
    return VAR_0;
   } else {
    FUNC_5(VAR_14,
      VAR_15->fifosize);
    if ((FUNC_12(VAR_21)) &&
    (FUNC_3(VAR_15, VAR_16->sirfsoc_tx_fifo_status) &
    VAR_17->ff_empty(VAR_15)))
     FUNC_6(VAR_15);
   }
  }
 }
 FUNC_9(&VAR_15->lock);

 return VAR_0;
}
