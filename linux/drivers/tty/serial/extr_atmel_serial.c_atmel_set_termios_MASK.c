
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int flags; unsigned int tg; } ;
struct TYPE_3__ {int flags; unsigned int delay_rts_after_send; } ;
struct uart_port {int uartclk; int read_status_mask; int ignore_status_mask; int lock; TYPE_2__ iso7816; TYPE_1__ rs485; } ;
struct ktermios {int c_cflag; int c_iflag; } ;
struct atmel_uart_port {int tx_stopped; scalar_t__ has_frac_baudrate; int gpios; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned int FUNC_0 (int) ;
 int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 int VAR_17 ;
 unsigned int VAR_18 ;
 int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 unsigned int VAR_25 ;
 unsigned int VAR_26 ;
 unsigned int VAR_27 ;
 unsigned int VAR_28 ;
 int VAR_29 ;
 unsigned int VAR_30 ;
 unsigned int VAR_31 ;
 int VAR_32 ;
 unsigned int VAR_33 ;
 unsigned int VAR_34 ;
 unsigned int VAR_35 ;
 unsigned int VAR_36 ;
 unsigned int VAR_37 ;
 unsigned int VAR_38 ;
 unsigned int VAR_39 ;
 unsigned int VAR_40 ;
 unsigned int VAR_41 ;
 unsigned int VAR_42 ;
 unsigned int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;



 int VAR_47 ;
 int VAR_48 ;
 unsigned int FUNC_1 (int,unsigned int) ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int FUNC_2 (int ) ;
 int VAR_56 ;
 int VAR_57 ;
 scalar_t__ FUNC_3 (struct uart_port*,int) ;
 int VAR_58 ;
 int FUNC_4 (struct uart_port*) ;
 int FUNC_5 (struct uart_port*) ;
 unsigned int FUNC_6 (struct uart_port*,int ) ;
 int FUNC_7 (struct uart_port*,int ,unsigned int) ;
 scalar_t__ FUNC_8 (struct uart_port*) ;
 scalar_t__ FUNC_9 (struct uart_port*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;
 struct atmel_uart_port* FUNC_13 (struct uart_port*) ;
 unsigned int FUNC_14 (struct uart_port*,struct ktermios*,struct ktermios*,int ,int) ;
 unsigned int FUNC_15 (struct uart_port*,unsigned int) ;
 int FUNC_16 (struct uart_port*,int,unsigned int) ;

__attribute__((used)) static void FUNC_17(struct uart_port *VAR_59, struct ktermios *VAR_60,
         struct ktermios *VAR_61)
{
 struct atmel_uart_port *VAR_62 = FUNC_13(VAR_59);
 unsigned long VAR_63;
 unsigned int VAR_64, VAR_65, VAR_66, VAR_67, VAR_68, VAR_69, VAR_70, VAR_71 = 0;


 VAR_65 = VAR_64 = FUNC_6(VAR_59, VAR_14);


 VAR_65 &= ~(VAR_35 | VAR_1 | VAR_15 |
    VAR_18 | VAR_38);

 VAR_68 = FUNC_14(VAR_59, VAR_60, VAR_61, 0, VAR_59->uartclk / 16);


 switch (VAR_60->c_cflag & VAR_47) {
 case 130:
  VAR_65 |= VAR_2;
  break;
 case 129:
  VAR_65 |= VAR_3;
  break;
 case 128:
  VAR_65 |= VAR_4;
  break;
 default:
  VAR_65 |= VAR_5;
  break;
 }


 if (VAR_60->c_cflag & VAR_48)
  VAR_65 |= VAR_16;


 if (VAR_60->c_cflag & VAR_52) {

  if (VAR_60->c_cflag & VAR_45) {
   if (VAR_60->c_cflag & VAR_54)
    VAR_65 |= VAR_21;
   else
    VAR_65 |= VAR_24;
  } else if (VAR_60->c_cflag & VAR_54)
   VAR_65 |= VAR_23;
  else
   VAR_65 |= VAR_20;
 } else
  VAR_65 |= VAR_22;

 FUNC_11(&VAR_59->lock, VAR_63);

 VAR_59->read_status_mask = VAR_17;
 if (VAR_60->c_iflag & VAR_51)
  VAR_59->read_status_mask |= (VAR_10 | VAR_19);
 if (VAR_60->c_iflag & (VAR_49 | VAR_44 | VAR_53))
  VAR_59->read_status_mask |= VAR_29;

 if (FUNC_9(VAR_59))

  FUNC_7(VAR_59, VAR_12, VAR_59->read_status_mask);




 VAR_59->ignore_status_mask = 0;
 if (VAR_60->c_iflag & VAR_50)
  VAR_59->ignore_status_mask |= (VAR_10 | VAR_19);
 if (VAR_60->c_iflag & VAR_49) {
  VAR_59->ignore_status_mask |= VAR_29;




  if (VAR_60->c_iflag & VAR_50)
   VAR_59->ignore_status_mask |= VAR_17;
 }



 FUNC_16(VAR_59, VAR_60->c_cflag, VAR_68);






 VAR_66 = FUNC_6(VAR_59, VAR_13);
 FUNC_7(VAR_59, VAR_11, -1);


 FUNC_7(VAR_59, VAR_7, VAR_33 | VAR_30);
 VAR_62->tx_stopped = 1;


 if (VAR_59->rs485.flags & VAR_57) {
  FUNC_7(VAR_59, VAR_32,
      VAR_59->rs485.delay_rts_after_send);
  VAR_65 |= VAR_43;
 } else if (VAR_59->iso7816.flags & VAR_55) {
  FUNC_7(VAR_59, VAR_32, VAR_59->iso7816.tg);

  VAR_65 |= VAR_36 | VAR_6;

  VAR_65 |= FUNC_0(3);
  if ((VAR_59->iso7816.flags & VAR_56)
    == FUNC_2(0))
   VAR_65 |= VAR_40;
  else
   VAR_65 |= VAR_41;
 } else if (VAR_60->c_cflag & VAR_46) {

  if (FUNC_8(VAR_59) &&
      !FUNC_10(VAR_62->gpios, VAR_58)) {
   VAR_65 |= VAR_39;
  } else {




   VAR_65 |= VAR_42;
  }
 } else {

  VAR_65 |= VAR_42;
 }


 FUNC_7(VAR_59, VAR_14, VAR_65);





 if ((VAR_64 & VAR_38) != (VAR_65 & VAR_38)) {
  unsigned int VAR_72;

  if ((VAR_65 & VAR_38) == VAR_39) {

   VAR_72 = VAR_27;
  } else {

   VAR_72 = VAR_28;
  }

  FUNC_7(VAR_59, VAR_7, VAR_72);
 }
 if (VAR_62->has_frac_baudrate) {
  VAR_69 = FUNC_1(VAR_59->uartclk, VAR_68 * 2);
  VAR_70 = VAR_69 >> 3;
  VAR_71 = VAR_69 & VAR_8;
 } else {
  VAR_70 = FUNC_15(VAR_59, VAR_68);
 }

 if (VAR_70 > 65535) {
  VAR_70 /= 8;
  VAR_65 |= VAR_37;
 }
 VAR_67 = VAR_70 | VAR_71 << VAR_9;

 if (!(VAR_59->iso7816.flags & VAR_55))
  FUNC_7(VAR_59, VAR_0, VAR_67);
 FUNC_7(VAR_59, VAR_7, VAR_26 | VAR_25);
 FUNC_7(VAR_59, VAR_7, VAR_34 | VAR_31);
 VAR_62->tx_stopped = 0;


 FUNC_7(VAR_59, VAR_12, VAR_66);


 if (FUNC_3(VAR_59, VAR_60->c_cflag))
  FUNC_5(VAR_59);
 else
  FUNC_4(VAR_59);

 FUNC_12(&VAR_59->lock, VAR_63);
}
