
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int tcflag_t ;
struct serial_rs485 {int flags; int delay_rts_after_send; int delay_rts_before_send; } ;
struct uart_port {int uartclk; scalar_t__ membase; int status; int read_status_mask; int ignore_status_mask; int lock; int dev; struct serial_rs485 rs485; } ;
struct stm32_usart_offsets {scalar_t__ cr1; scalar_t__ rqr; scalar_t__ cr3; scalar_t__ rtor; scalar_t__ brr; scalar_t__ cr2; } ;
struct stm32_usart_config {unsigned int uart_enable_bit; scalar_t__ has_7bits_data; } ;
struct stm32_port {int rdr_mask; int cr1_irq; int cr3_irq; scalar_t__ rx_ch; scalar_t__ fifoen; int hw_flow_control; TYPE_1__* info; } ;
struct ktermios {int c_cflag; int c_iflag; } ;
struct TYPE_2__ {struct stm32_usart_config cfg; struct stm32_usart_offsets ofs; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,unsigned int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int FUNC_2 (int ,char*,unsigned int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct uart_port*,scalar_t__,int) ;
 int FUNC_7 (int*,int*,int ,int ,unsigned int) ;
 unsigned int FUNC_8 (struct ktermios*) ;
 int FUNC_9 (struct uart_port*,scalar_t__,int) ;
 struct stm32_port* FUNC_10 (struct uart_port*) ;
 unsigned int FUNC_11 (struct uart_port*,struct ktermios*,struct ktermios*,int ,int) ;
 int FUNC_12 (struct uart_port*,int,unsigned int) ;
 int FUNC_13 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_14(struct uart_port *VAR_45, struct ktermios *VAR_46,
       struct ktermios *VAR_47)
{
 struct stm32_port *VAR_48 = FUNC_10(VAR_45);
 struct stm32_usart_offsets *VAR_49 = &VAR_48->info->ofs;
 struct stm32_usart_config *VAR_50 = &VAR_48->info->cfg;
 struct serial_rs485 *VAR_51 = &VAR_45->rs485;
 unsigned int VAR_52, VAR_53;
 u32 VAR_54, VAR_55, VAR_56, VAR_57;
 tcflag_t VAR_58 = VAR_46->c_cflag;
 u32 VAR_59, VAR_60, VAR_61;
 unsigned long VAR_62;

 if (!VAR_48->hw_flow_control)
  VAR_58 &= ~VAR_2;

 VAR_52 = FUNC_11(VAR_45, VAR_46, VAR_47, 0, VAR_45->uartclk / 8);

 FUNC_4(&VAR_45->lock, VAR_62);


 FUNC_13(0, VAR_45->membase + VAR_49->cr1);


 if (VAR_49->rqr != VAR_13)
  FUNC_9(VAR_45, VAR_49->rqr,
          VAR_40 | VAR_39);

 VAR_59 = VAR_27 | VAR_25;
 if (VAR_48->fifoen)
  VAR_59 |= VAR_19;
 VAR_60 = 0;
 VAR_61 = FUNC_3(VAR_45->membase + VAR_49->cr3);
 VAR_61 &= VAR_38 | VAR_35 | VAR_36
  | VAR_37;

 if (VAR_58 & VAR_3)
  VAR_60 |= VAR_29;

 VAR_53 = FUNC_8(VAR_46);
 VAR_48->rdr_mask = (FUNC_0(VAR_53) - 1);

 if (VAR_58 & VAR_7) {
  VAR_53++;
  VAR_59 |= VAR_23;
 }
 if (VAR_53 == 9)
  VAR_59 |= VAR_20;
 else if ((VAR_53 == 7) && VAR_50->has_7bits_data)
  VAR_59 |= VAR_21;
 else if (VAR_53 != 8)
  FUNC_2(VAR_45->dev, "Unsupported data bits config: %u bits\n"
   , VAR_53);

 if (VAR_49->rtor != VAR_13 && (VAR_48->rx_ch ||
           VAR_48->fifoen)) {
  if (VAR_58 & VAR_3)
   VAR_53 = VAR_53 + 3;
  else
   VAR_53 = VAR_53 + 2;


  VAR_48->cr1_irq = VAR_26;
  FUNC_13(VAR_53, VAR_45->membase + VAR_49->rtor);
  VAR_60 |= VAR_28;

  if (!VAR_48->rx_ch)
   VAR_48->cr3_irq = VAR_36;
 }

 VAR_59 |= VAR_48->cr1_irq;
 VAR_61 |= VAR_48->cr3_irq;

 if (VAR_58 & VAR_9)
  VAR_59 |= VAR_24;

 VAR_45->status &= ~(VAR_14 | VAR_15);
 if (VAR_58 & VAR_2) {
  VAR_45->status |= VAR_14 | VAR_15;
  VAR_61 |= VAR_30 | VAR_34;
 }

 VAR_54 = FUNC_1(VAR_45->uartclk, VAR_52);







 if (VAR_54 < 16) {
  VAR_57 = 8;
  VAR_59 |= VAR_22;
  FUNC_9(VAR_45, VAR_49->cr1, VAR_22);
 } else {
  VAR_57 = 16;
  VAR_59 &= ~VAR_22;
  FUNC_6(VAR_45, VAR_49->cr1, VAR_22);
 }

 VAR_55 = (VAR_54 / VAR_57) << VAR_16;
 VAR_56 = VAR_54 % VAR_57;
 FUNC_13(VAR_55 | VAR_56, VAR_45->membase + VAR_49->brr);

 FUNC_12(VAR_45, VAR_58, VAR_52);

 VAR_45->read_status_mask = VAR_43;
 if (VAR_46->c_iflag & VAR_6)
  VAR_45->read_status_mask |= VAR_44 | VAR_42;
 if (VAR_46->c_iflag & (VAR_4 | VAR_0 | VAR_8))
  VAR_45->read_status_mask |= VAR_42;


 VAR_45->ignore_status_mask = 0;
 if (VAR_46->c_iflag & VAR_5)
  VAR_45->ignore_status_mask = VAR_44 | VAR_42;
 if (VAR_46->c_iflag & VAR_4) {
  VAR_45->ignore_status_mask |= VAR_42;




  if (VAR_46->c_iflag & VAR_5)
   VAR_45->ignore_status_mask |= VAR_43;
 }


 if ((VAR_46->c_cflag & VAR_1) == 0)
  VAR_45->ignore_status_mask |= VAR_41;

 if (VAR_48->rx_ch)
  VAR_61 |= VAR_33;

 if (VAR_51->flags & VAR_10) {
  FUNC_7(&VAR_59, &VAR_61,
           VAR_51->delay_rts_before_send,
           VAR_51->delay_rts_after_send, VAR_52);
  if (VAR_51->flags & VAR_12) {
   VAR_61 &= ~VAR_32;
   VAR_51->flags &= ~VAR_11;
  } else {
   VAR_61 |= VAR_32;
   VAR_51->flags |= VAR_11;
  }

 } else {
  VAR_61 &= ~(VAR_31 | VAR_32);
  VAR_59 &= ~(VAR_18 | VAR_17);
 }

 FUNC_13(VAR_61, VAR_45->membase + VAR_49->cr3);
 FUNC_13(VAR_60, VAR_45->membase + VAR_49->cr2);
 FUNC_13(VAR_59, VAR_45->membase + VAR_49->cr1);

 FUNC_9(VAR_45, VAR_49->cr1, FUNC_0(VAR_50->uart_enable_bit));
 FUNC_5(&VAR_45->lock, VAR_62);
}
