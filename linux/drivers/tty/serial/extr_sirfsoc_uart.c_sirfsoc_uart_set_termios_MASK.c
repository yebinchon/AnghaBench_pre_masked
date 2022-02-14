
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u32 ;
struct uart_port {unsigned long uartclk; int read_status_mask; int ignore_status_mask; int lock; int dev; } ;
struct sirfsoc_uart_port {int rx_period_time; scalar_t__ rx_dma_chan; scalar_t__ tx_dma_chan; TYPE_1__* uart_reg; scalar_t__ ms_enabled; } ;
struct sirfsoc_register {int sirfsoc_tx_rx_en; int sirfsoc_tx_fifo_op; int sirfsoc_rx_fifo_ctrl; int sirfsoc_tx_fifo_ctrl; int sirfsoc_rx_dma_io_ctrl; int sirfsoc_tx_dma_io_ctrl; int sirfsoc_async_param_reg; int sirfsoc_rx_frame_ctrl; int sirfsoc_tx_frame_ctrl; int sirfsoc_line_ctrl; int sirfsoc_mode2; int sirfsoc_divisor; } ;
struct sirfsoc_int_en {int sirfsoc_rx_oflow_en; int sirfsoc_frm_err_en; int sirfsoc_parity_err_en; int sirfsoc_rxd_brk_en; } ;
struct ktermios {int c_cflag; int c_iflag; } ;
struct TYPE_4__ {unsigned long baud_rate; unsigned int reg_val; } ;
struct TYPE_3__ {scalar_t__ uart_type; struct sirfsoc_int_en uart_int_en; struct sirfsoc_register uart_reg; } ;


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
 unsigned long FUNC_0 (unsigned long,int) ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 unsigned long VAR_25 ;
 unsigned long VAR_26 ;
 unsigned long VAR_27 ;
 unsigned long VAR_28 ;
 unsigned long VAR_29 ;
 int VAR_30 ;
 unsigned long VAR_31 ;
 int FUNC_1 (struct uart_port*) ;
 unsigned long VAR_32 ;
 unsigned long FUNC_2 (unsigned long) ;
 unsigned long VAR_33 ;
 unsigned long VAR_34 ;
 unsigned long VAR_35 ;
 unsigned long VAR_36 ;
 unsigned long VAR_37 ;
 unsigned long VAR_38 ;
 unsigned long VAR_39 ;
 unsigned long FUNC_3 (unsigned long) ;
 unsigned long FUNC_4 (unsigned long) ;
 unsigned long VAR_40 ;
 scalar_t__ VAR_41 ;
 scalar_t__ FUNC_5 (struct uart_port*,int) ;
 TYPE_2__* VAR_42 ;
 int FUNC_6 (int ,char*) ;
 unsigned long FUNC_7 (struct uart_port*,int ) ;
 unsigned int FUNC_8 (unsigned long,unsigned long,unsigned long*) ;
 int FUNC_9 (struct uart_port*) ;
 int FUNC_10 (struct uart_port*) ;
 unsigned int FUNC_11 (unsigned long,unsigned long,unsigned long*) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;
 struct sirfsoc_uart_port* FUNC_14 (struct uart_port*) ;
 scalar_t__ FUNC_15 (struct ktermios*) ;
 int FUNC_16 (struct ktermios*,unsigned long,unsigned long) ;
 unsigned long FUNC_17 (struct uart_port*,struct ktermios*,struct ktermios*,int ,int) ;
 int FUNC_18 (struct uart_port*,int,unsigned long) ;
 scalar_t__ FUNC_19 (int) ;
 int FUNC_20 (struct uart_port*,int ,unsigned long) ;

__attribute__((used)) static void FUNC_21(struct uart_port *VAR_43,
           struct ktermios *VAR_44,
           struct ktermios *VAR_45)
{
 struct sirfsoc_uart_port *VAR_46 = FUNC_14(VAR_43);
 struct sirfsoc_register *VAR_47 = &VAR_46->uart_reg->uart_reg;
 struct sirfsoc_int_en *VAR_48 = &VAR_46->uart_reg->uart_int_en;
 unsigned long VAR_49 = 0;
 unsigned long VAR_50;
 unsigned long VAR_51;
 unsigned long VAR_52;
 unsigned long VAR_53;
 unsigned int VAR_54 = 0;
 unsigned long VAR_55, VAR_56;
 unsigned long VAR_57;
 int VAR_58;
 u32 VAR_59, VAR_60, VAR_61;
 unsigned long VAR_62 = 0xf;
 VAR_56 = VAR_43->uartclk;

 switch (VAR_44->c_cflag & VAR_3) {
 default:
 case 128:
  VAR_59 = 8;
  VAR_49 |= VAR_28;
  break;
 case 129:
  VAR_59 = 7;
  VAR_49 |= VAR_27;
  break;
 case 130:
  VAR_59 = 6;
  VAR_49 |= VAR_26;
  break;
 case 131:
  VAR_59 = 5;
  VAR_49 |= VAR_25;
  break;
 }
 if (VAR_44->c_cflag & VAR_4) {
  VAR_49 |= VAR_38;
  VAR_60 = 2;
 } else
  VAR_60 = 1;

 FUNC_12(&VAR_43->lock, VAR_52);
 VAR_43->read_status_mask = VAR_48->sirfsoc_rx_oflow_en;
 VAR_43->ignore_status_mask = 0;
 if (VAR_46->uart_reg->uart_type == VAR_41) {
  if (VAR_44->c_iflag & VAR_7)
   VAR_43->read_status_mask |= VAR_48->sirfsoc_frm_err_en |
    VAR_48->sirfsoc_parity_err_en;
 } else {
  if (VAR_44->c_iflag & VAR_7)
   VAR_43->read_status_mask |= VAR_48->sirfsoc_frm_err_en;
 }
 if (VAR_44->c_iflag & (VAR_5 | VAR_0 | VAR_9))
   VAR_43->read_status_mask |= VAR_48->sirfsoc_rxd_brk_en;
 if (VAR_46->uart_reg->uart_type == VAR_41) {
  if (VAR_44->c_iflag & VAR_6)
   VAR_43->ignore_status_mask |=
    VAR_48->sirfsoc_frm_err_en |
    VAR_48->sirfsoc_parity_err_en;
  if (VAR_44->c_cflag & VAR_8) {
   if (VAR_44->c_cflag & VAR_1) {
    if (VAR_44->c_cflag & VAR_10)
     VAR_49 |= VAR_35;
    else
     VAR_49 |= VAR_37;
   } else {
    if (VAR_44->c_cflag & VAR_10)
     VAR_49 |= VAR_36;
    else
     VAR_49 |= VAR_34;
   }
  }
 } else {
  if (VAR_44->c_iflag & VAR_6)
   VAR_43->ignore_status_mask |=
    VAR_48->sirfsoc_frm_err_en;
  if (VAR_44->c_cflag & VAR_8)
   FUNC_6(VAR_43->dev,
     "USP-UART not support parity err\n");
 }
 if (VAR_44->c_iflag & VAR_5) {
  VAR_43->ignore_status_mask |=
   VAR_48->sirfsoc_rxd_brk_en;
  if (VAR_44->c_iflag & VAR_6)
   VAR_43->ignore_status_mask |=
    VAR_48->sirfsoc_rx_oflow_en;
 }
 if ((VAR_44->c_cflag & VAR_2) == 0)
  VAR_43->ignore_status_mask |= VAR_30;

 if (FUNC_5(VAR_43, VAR_44->c_cflag)) {
  if (!VAR_46->ms_enabled)
   FUNC_10(VAR_43);
 } else {
  if (VAR_46->ms_enabled)
   FUNC_9(VAR_43);
 }
 VAR_50 = FUNC_17(VAR_43, VAR_44, VAR_45, 0, 4000000);
 if (VAR_56 == 150000000) {
  for (VAR_53 = 0; VAR_53 < VAR_40; VAR_53++)
   if (VAR_50 == VAR_42[VAR_53].baud_rate)
    VAR_54 = VAR_42[VAR_53].reg_val;
 }
 VAR_51 = VAR_50;
 if (VAR_46->uart_reg->uart_type == VAR_41) {
  if (FUNC_19(VAR_54 == 0))
   VAR_54 = FUNC_8(VAR_50,
     VAR_56, &VAR_51);
  FUNC_20(VAR_43, VAR_47->sirfsoc_divisor, VAR_54);
 } else {
  VAR_54 = FUNC_11(VAR_50,
    VAR_56, &VAR_62);
  VAR_62--;
  VAR_51 = ((VAR_56 / (VAR_54+1) - 1) /
    (VAR_62 + 1));

  VAR_61 = ((1 << VAR_15) |
    (1 << VAR_16));
  VAR_61 |= ((VAR_54 & VAR_13)
    << VAR_14);
  FUNC_20(VAR_43, VAR_47->sirfsoc_mode2, VAR_61);
 }
 if (FUNC_15(VAR_44))
  FUNC_16(VAR_44, VAR_51, VAR_51);

 VAR_57 = FUNC_0(VAR_51, 20000);
 VAR_57 = FUNC_2(VAR_57);
 VAR_55 = FUNC_7(VAR_43, VAR_47->sirfsoc_tx_fifo_op);
 FUNC_20(VAR_43, VAR_47->sirfsoc_tx_fifo_op,
   (VAR_55 & ~VAR_31));
 if (VAR_46->uart_reg->uart_type == VAR_41) {
  VAR_49 |= FUNC_3(VAR_57);
  FUNC_20(VAR_43, VAR_47->sirfsoc_line_ctrl, VAR_49);
 } else {

  VAR_61 = (VAR_59 - 1) << VAR_22;
  VAR_61 |= (VAR_59 + 1 + VAR_60 - 1) <<
    VAR_23;
  VAR_61 |= ((VAR_59 - 1) <<
    VAR_24);
  VAR_61 |= (((VAR_54 & 0xc00) >> 10) <<
    VAR_21);
  FUNC_20(VAR_43, VAR_47->sirfsoc_tx_frame_ctrl, VAR_61);

  VAR_61 = (VAR_59 - 1) << VAR_18;
  VAR_61 |= (VAR_59 + 1 + VAR_60 - 1) <<
    VAR_19;
  VAR_61 |= (VAR_59 - 1) <<
    VAR_20;
  VAR_61 |= (((VAR_54 & 0xf000) >> 12) <<
    VAR_17);
  FUNC_20(VAR_43, VAR_47->sirfsoc_rx_frame_ctrl, VAR_61);

  FUNC_20(VAR_43, VAR_47->sirfsoc_async_param_reg,
   (FUNC_4(VAR_57)) |
   (VAR_62 & VAR_11) <<
   VAR_12);
 }
 if (VAR_46->tx_dma_chan)
  FUNC_20(VAR_43, VAR_47->sirfsoc_tx_dma_io_ctrl, VAR_29);
 else
  FUNC_20(VAR_43, VAR_47->sirfsoc_tx_dma_io_ctrl, VAR_32);
 if (VAR_46->rx_dma_chan)
  FUNC_20(VAR_43, VAR_47->sirfsoc_rx_dma_io_ctrl,
   FUNC_7(VAR_43, VAR_47->sirfsoc_rx_dma_io_ctrl) &
   ~VAR_32);
 else
  FUNC_20(VAR_43, VAR_47->sirfsoc_rx_dma_io_ctrl,
   FUNC_7(VAR_43, VAR_47->sirfsoc_rx_dma_io_ctrl) |
   VAR_32);
 VAR_46->rx_period_time = 20000000;

 if (VAR_51 < 1000000)
  VAR_58 = 1;
 else
  VAR_58 = 2;
 FUNC_20(VAR_43, VAR_47->sirfsoc_tx_fifo_ctrl,
    FUNC_1(VAR_43) / VAR_58);
 FUNC_20(VAR_43, VAR_47->sirfsoc_rx_fifo_ctrl,
    FUNC_1(VAR_43) / VAR_58);
 VAR_55 |= VAR_31;
 FUNC_20(VAR_43, VAR_47->sirfsoc_tx_fifo_op, VAR_55);
 FUNC_18(VAR_43, VAR_44->c_cflag, VAR_51);
 FUNC_20(VAR_43, VAR_47->sirfsoc_tx_rx_en, VAR_39 | VAR_33);
 FUNC_13(&VAR_43->lock, VAR_52);
}
