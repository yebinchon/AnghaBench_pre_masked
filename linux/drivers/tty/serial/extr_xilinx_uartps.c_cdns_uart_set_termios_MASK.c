
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int uartclk; int read_status_mask; int ignore_status_mask; int lock; scalar_t__ membase; int dev; } ;
struct ktermios {int c_cflag; int c_iflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 unsigned int VAR_25 ;
 unsigned int VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 unsigned int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;



 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 unsigned int FUNC_0 (struct uart_port*,unsigned int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*) ;
 unsigned int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,unsigned int,unsigned int,int,int ) ;
 unsigned int VAR_39 ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 scalar_t__ FUNC_7 (struct ktermios*) ;
 int FUNC_8 (struct ktermios*,unsigned int,unsigned int) ;
 unsigned int FUNC_9 (struct uart_port*,struct ktermios*,struct ktermios*,unsigned int,unsigned int) ;
 int FUNC_10 (struct uart_port*,int,unsigned int) ;
 int FUNC_11 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_12(struct uart_port *VAR_40,
    struct ktermios *VAR_41, struct ktermios *VAR_42)
{
 unsigned int VAR_43 = 0;
 unsigned int VAR_44, VAR_45, VAR_46;
 unsigned long VAR_47;
 unsigned int VAR_48, VAR_49, VAR_50;
 int VAR_51;


 if (!(FUNC_3(VAR_40->membase + VAR_3) &
    VAR_8)) {
  VAR_51 = FUNC_4(VAR_40->membase + VAR_28,
      VAR_50, (VAR_50 & VAR_29),
      1000, VAR_38);
  if (VAR_51) {
   FUNC_2(VAR_40->dev, "timed out waiting for tx empty");
   return;
  }
 }
 FUNC_5(&VAR_40->lock, VAR_47);


 VAR_48 = FUNC_3(VAR_40->membase + VAR_3);
 VAR_48 |= VAR_8 | VAR_5;
 FUNC_11(VAR_48, VAR_40->membase + VAR_3);






 VAR_45 = VAR_40->uartclk /
   ((VAR_0 + 1) * VAR_2 * 8);
 VAR_46 = VAR_40->uartclk / (VAR_1 + 1);
 VAR_44 = FUNC_9(VAR_40, VAR_41, VAR_42, VAR_45, VAR_46);
 VAR_44 = FUNC_0(VAR_40, VAR_44);
 if (FUNC_7(VAR_41))
  FUNC_8(VAR_41, VAR_44, VAR_44);


 FUNC_10(VAR_40, VAR_41->c_cflag, VAR_44);


 VAR_48 = FUNC_3(VAR_40->membase + VAR_3);
 VAR_48 |= VAR_7 | VAR_4;
 FUNC_11(VAR_48, VAR_40->membase + VAR_3);

 while (FUNC_3(VAR_40->membase + VAR_3) &
  (VAR_7 | VAR_4))
  FUNC_1();





 VAR_48 = FUNC_3(VAR_40->membase + VAR_3);
 VAR_48 &= ~(VAR_8 | VAR_5);
 VAR_48 |= VAR_9 | VAR_6;
 FUNC_11(VAR_48, VAR_40->membase + VAR_3);

 FUNC_11(VAR_39, VAR_40->membase + VAR_27);

 VAR_40->read_status_mask = VAR_15 | VAR_13 |
   VAR_11 | VAR_14;
 VAR_40->ignore_status_mask = 0;

 if (VAR_41->c_iflag & VAR_35)
  VAR_40->read_status_mask |= VAR_12 |
  VAR_10;

 if (VAR_41->c_iflag & VAR_34)
  VAR_40->ignore_status_mask |= VAR_12 |
   VAR_10 | VAR_11;


 if ((VAR_41->c_cflag & VAR_31) == 0)
  VAR_40->ignore_status_mask |= VAR_13 |
   VAR_14 | VAR_12 |
   VAR_10 | VAR_11;

 VAR_49 = FUNC_3(VAR_40->membase + VAR_16);


 switch (VAR_41->c_cflag & VAR_32) {
 case 130:
  VAR_43 |= VAR_17;
  break;
 case 129:
  VAR_43 |= VAR_18;
  break;
 default:
 case 128:
  VAR_43 |= VAR_19;
  VAR_41->c_cflag &= ~VAR_32;
  VAR_41->c_cflag |= 128;
  break;
 }


 if (VAR_41->c_cflag & VAR_33)
  VAR_43 |= VAR_26;
 else
  VAR_43 |= VAR_25;

 if (VAR_41->c_cflag & VAR_36) {

  if (VAR_41->c_cflag & VAR_30) {
   if (VAR_41->c_cflag & VAR_37)
    VAR_43 |= VAR_21;
   else
    VAR_43 |= VAR_24;
  } else {
   if (VAR_41->c_cflag & VAR_37)
    VAR_43 |= VAR_23;
   else
    VAR_43 |= VAR_20;
  }
 } else {
  VAR_43 |= VAR_22;
 }
 VAR_43 |= VAR_49 & 1;
 FUNC_11(VAR_43, VAR_40->membase + VAR_16);

 FUNC_6(&VAR_40->lock, VAR_47);
}
