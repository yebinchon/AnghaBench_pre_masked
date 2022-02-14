
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct uart_port {int uartclk; int lock; int dev; } ;
struct rda_uart_port {int dummy; } ;
struct ktermios {int c_cflag; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int FUNC_1 (int) ;
 unsigned int VAR_21 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct rda_uart_port*,unsigned int) ;
 unsigned int FUNC_4 (struct uart_port*,int ) ;
 int FUNC_5 (struct uart_port*,unsigned int,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 struct rda_uart_port* FUNC_8 (struct uart_port*) ;
 scalar_t__ FUNC_9 (struct ktermios*) ;
 int FUNC_10 (struct ktermios*,unsigned int,unsigned int) ;
 unsigned int FUNC_11 (struct uart_port*,struct ktermios*,struct ktermios*,int,int) ;
 int FUNC_12 (struct uart_port*,int,unsigned int) ;

__attribute__((used)) static void FUNC_13(struct uart_port *VAR_22,
     struct ktermios *VAR_23,
     struct ktermios *VAR_24)
{
 struct rda_uart_port *VAR_25 = FUNC_8(VAR_22);
 unsigned long VAR_26;
 unsigned int VAR_27, VAR_28, VAR_29, VAR_30;
 unsigned int VAR_31;
 u32 VAR_32;

 FUNC_6(&VAR_22->lock, VAR_26);

 VAR_31 = FUNC_11(VAR_22, VAR_23, VAR_24, 9600, VAR_22->uartclk / 4);
 FUNC_3(VAR_25, VAR_31);

 VAR_27 = FUNC_4(VAR_22, VAR_8);
 VAR_28 = FUNC_4(VAR_22, VAR_7);
 VAR_29 = FUNC_4(VAR_22, VAR_6);

 switch (VAR_23->c_cflag & VAR_2) {
 case 130:
 case 129:
  FUNC_2(VAR_22->dev, "bit size not supported, using 7 bits\n");

 case 128:
  VAR_27 &= ~VAR_9;
  break;
 default:
  VAR_27 |= VAR_9;
  break;
 }


 if (VAR_23->c_cflag & VAR_3)
  VAR_27 |= VAR_21;
 else
  VAR_27 &= ~VAR_21;


 if (VAR_23->c_cflag & VAR_4) {
  VAR_27 |= VAR_15;


  if (VAR_23->c_cflag & VAR_0) {
   if (VAR_23->c_cflag & VAR_5)
    VAR_27 |= VAR_17;
   else
    VAR_27 |= VAR_19;
  } else if (VAR_23->c_cflag & VAR_5) {
   VAR_27 |= VAR_18;
  } else {
   VAR_27 |= VAR_16;
  }
 } else {
  VAR_27 &= ~VAR_15;
 }


 if (VAR_23->c_cflag & VAR_1) {
  VAR_27 |= VAR_12;
  VAR_28 |= VAR_20;
 } else {
  VAR_27 &= ~VAR_12;
  VAR_29 |= VAR_20;
 }

 VAR_27 |= VAR_11;
 VAR_27 &= ~VAR_10;

 VAR_30 = (FUNC_0(20) | FUNC_1(16));
 VAR_32 = FUNC_4(VAR_22, VAR_13);
 FUNC_5(VAR_22, 0, VAR_13);

 FUNC_5(VAR_22, VAR_30, VAR_14);
 FUNC_5(VAR_22, VAR_27, VAR_8);
 FUNC_5(VAR_22, VAR_28, VAR_7);
 FUNC_5(VAR_22, VAR_29, VAR_6);

 FUNC_5(VAR_22, VAR_32, VAR_13);


 if (FUNC_9(VAR_23))
  FUNC_10(VAR_23, VAR_31, VAR_31);


 FUNC_12(VAR_22, VAR_23->c_cflag, VAR_31);

 FUNC_7(&VAR_22->lock, VAR_26);
}
