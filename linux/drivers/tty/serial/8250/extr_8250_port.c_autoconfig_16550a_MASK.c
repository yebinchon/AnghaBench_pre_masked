
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; int uartclk; } ;
struct uart_8250_port {int capabilities; TYPE_1__ port; } ;


 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 int VAR_17 ;
 unsigned int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned char VAR_23 ;
 int VAR_24 ;
 int FUNC_1 (struct uart_8250_port*) ;
 int FUNC_2 (struct uart_8250_port*) ;
 scalar_t__ FUNC_3 (struct uart_8250_port*) ;
 unsigned char FUNC_4 (struct uart_8250_port*) ;
 int FUNC_5 (struct uart_8250_port*,unsigned char) ;
 unsigned short FUNC_6 (struct uart_8250_port*) ;
 int FUNC_7 (struct uart_8250_port*,unsigned short) ;
 unsigned int FUNC_8 (struct uart_8250_port*,int) ;
 int FUNC_9 (struct uart_8250_port*,int,unsigned int) ;
 int FUNC_10 (struct uart_8250_port*) ;

__attribute__((used)) static void FUNC_11(struct uart_8250_port *VAR_25)
{
 unsigned char VAR_26, VAR_27;
 unsigned int VAR_28;

 VAR_25->port.type = VAR_0;
 VAR_25->capabilities |= VAR_9;





 FUNC_9(VAR_25, VAR_20, VAR_21);
 if (FUNC_8(VAR_25, VAR_13) == 0) {
  FUNC_9(VAR_25, VAR_13, 0xA8);
  if (FUNC_8(VAR_25, VAR_13) != 0) {
   FUNC_0("EFRv1 ");
   VAR_25->port.type = VAR_2;
   VAR_25->capabilities |= VAR_8 | VAR_11;
  } else {
   FUNC_9(VAR_25, VAR_20, 0);
   FUNC_9(VAR_25, VAR_14, VAR_16 |
       VAR_15);
   VAR_26 = FUNC_8(VAR_25, VAR_19) >> 5;
   FUNC_9(VAR_25, VAR_14, 0);
   FUNC_9(VAR_25, VAR_20, 0);

   if (VAR_26 == 7)
    VAR_25->port.type = VAR_1;
   else
    FUNC_0("Motorola 8xxx DUART ");
  }
  FUNC_9(VAR_25, VAR_13, 0);
  return;
 }





 FUNC_9(VAR_25, VAR_20, VAR_22);
 if (FUNC_8(VAR_25, VAR_13) == 0 && !FUNC_2(VAR_25)) {
  FUNC_0("EFRv2 ");
  FUNC_1(VAR_25);
  return;
 }
 FUNC_9(VAR_25, VAR_20, 0);
 VAR_26 = FUNC_4(VAR_25);
 FUNC_9(VAR_25, VAR_20, 0xE0);
 VAR_27 = FUNC_8(VAR_25, 0x02);

 if (!((VAR_27 ^ VAR_26) & VAR_23)) {
  FUNC_9(VAR_25, VAR_20, 0);
  FUNC_5(VAR_25, VAR_26 ^ VAR_23);
  FUNC_9(VAR_25, VAR_20, 0xE0);
  VAR_27 = FUNC_8(VAR_25, 0x02);
  FUNC_9(VAR_25, VAR_20, 0);
  FUNC_5(VAR_25, VAR_26);

  if ((VAR_27 ^ VAR_26) & VAR_23) {
   unsigned short VAR_29;

   FUNC_9(VAR_25, VAR_20, 0xE0);

   VAR_29 = FUNC_6(VAR_25);
   VAR_29 <<= 3;

   if (FUNC_3(VAR_25))
    FUNC_7(VAR_25, VAR_29);

   FUNC_9(VAR_25, VAR_20, 0);

   VAR_25->port.uartclk = 921600*16;
   VAR_25->port.type = VAR_4;
   VAR_25->capabilities |= VAR_24;
   return;
  }
 }







 FUNC_9(VAR_25, VAR_20, 0);
 FUNC_9(VAR_25, VAR_14, VAR_16 | VAR_15);
 VAR_26 = FUNC_8(VAR_25, VAR_19) >> 5;
 FUNC_9(VAR_25, VAR_14, VAR_16);
 FUNC_9(VAR_25, VAR_20, VAR_21);
 FUNC_9(VAR_25, VAR_14, VAR_16 | VAR_15);
 VAR_27 = FUNC_8(VAR_25, VAR_19) >> 5;
 FUNC_9(VAR_25, VAR_14, VAR_16);
 FUNC_9(VAR_25, VAR_20, 0);

 FUNC_0("iir1=%d iir2=%d ", VAR_26, VAR_27);

 if (VAR_26 == 6 && VAR_27 == 7) {
  VAR_25->port.type = VAR_3;
  VAR_25->capabilities |= VAR_7 | VAR_11;
  return;
 }
 VAR_28 = FUNC_8(VAR_25, VAR_17);
 FUNC_9(VAR_25, VAR_17, VAR_28 & ~VAR_18);
 if (!(FUNC_8(VAR_25, VAR_17) & VAR_18)) {




  FUNC_9(VAR_25, VAR_17, VAR_28 | VAR_18);
  if (FUNC_8(VAR_25, VAR_17) & VAR_18) {




   FUNC_0("Xscale ");
   VAR_25->port.type = VAR_6;
   VAR_25->capabilities |= VAR_12 | VAR_10;
   return;
  }
 } else {




  FUNC_0("Couldn't force IER_UUE to 0 ");
 }
 FUNC_9(VAR_25, VAR_17, VAR_28);





 if (VAR_25->port.type == VAR_0 && FUNC_10(VAR_25) == 64) {
  VAR_25->port.type = VAR_5;
  VAR_25->capabilities |= VAR_7;
 }
}
