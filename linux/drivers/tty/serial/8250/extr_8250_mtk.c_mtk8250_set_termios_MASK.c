
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uart_port {int uartclk; int lock; } ;
struct TYPE_4__ {TYPE_1__* cons; int dev; } ;
struct uart_8250_port {int lcr; TYPE_2__ port; int * dma; } ;
struct ktermios {int c_cflag; int c_iflag; } ;
struct TYPE_3__ {int cflag; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,int) ;
 unsigned int FUNC_1 (int,int) ;
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
 int VAR_11 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct uart_8250_port*) ;
 int FUNC_4 (struct uart_8250_port*,int) ;
 int FUNC_5 (struct uart_port*,struct ktermios*,struct ktermios*) ;
 int FUNC_6 (struct uart_8250_port*,unsigned int) ;
 int FUNC_7 (struct uart_port*,int ,int) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 scalar_t__ FUNC_10 (struct ktermios*) ;
 int FUNC_11 (struct ktermios*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_12 (struct uart_port*) ;
 unsigned int FUNC_13 (struct uart_port*,struct ktermios*,struct ktermios*,int,int) ;
 unsigned int FUNC_14 (struct uart_port*,unsigned int) ;
 struct uart_8250_port* FUNC_15 (struct uart_port*) ;

__attribute__((used)) static void
FUNC_16(struct uart_port *VAR_12, struct ktermios *VAR_13,
   struct ktermios *VAR_14)
{
 unsigned short VAR_15[] = {
  0, 1, 0x5, 0x15, 0x55, 0x57, 0x57, 0x77, 0x7F, 0xFF, 0xFF
 };
 unsigned short VAR_16[] = {
  0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 3
 };
 struct uart_8250_port *VAR_17 = FUNC_15(VAR_12);
 unsigned int VAR_18, VAR_19, VAR_20;
 unsigned long VAR_21;
 int VAR_22;
 FUNC_5(VAR_12, VAR_13, VAR_14);
 VAR_18 = FUNC_13(VAR_12, VAR_13, VAR_14,
      VAR_12->uartclk / 16 / VAR_9,
      VAR_12->uartclk);

 if (VAR_18 < 115200) {
  FUNC_7(VAR_12, VAR_6, 0x0);
  VAR_19 = FUNC_14(VAR_12, VAR_18);
 } else {
  FUNC_7(VAR_12, VAR_6, 0x3);
  VAR_19 = FUNC_1(VAR_12->uartclk, 256 * VAR_18);
 }





 FUNC_8(&VAR_12->lock, VAR_21);


 FUNC_7(VAR_12, VAR_10, VAR_17->lcr | VAR_11);
 FUNC_6(VAR_17, VAR_19);


 FUNC_7(VAR_12, VAR_10, VAR_17->lcr);

 if (VAR_18 >= 115200) {
  unsigned int VAR_23;

  VAR_23 = (VAR_12->uartclk / (VAR_18 * VAR_19)) - 1;
  FUNC_7(VAR_12, VAR_7, VAR_23);
  FUNC_7(VAR_12, VAR_8,
     (VAR_23 >> 1) - 1);


  VAR_20 = ((VAR_12->uartclk * 100) / VAR_18 / VAR_19) % 100;
  VAR_20 = FUNC_0(VAR_20, 10);
  FUNC_7(VAR_12, VAR_4,
      VAR_15[VAR_20]);
  FUNC_7(VAR_12, VAR_5,
      VAR_16[VAR_20]);
 } else {
  FUNC_7(VAR_12, VAR_7, 0x00);
  FUNC_7(VAR_12, VAR_8, 0xff);
  FUNC_7(VAR_12, VAR_4, 0x00);
  FUNC_7(VAR_12, VAR_5, 0x00);
 }

 if ((VAR_13->c_cflag & VAR_0) && (!(VAR_13->c_iflag & VAR_0)))
  VAR_22 = VAR_1;
 else if (VAR_13->c_iflag & VAR_0)
  VAR_22 = VAR_3;
 else
  VAR_22 = VAR_2;

 FUNC_4(VAR_17, VAR_22);

 if (FUNC_12(VAR_12))
  VAR_17->port.cons->cflag = VAR_13->c_cflag;

 FUNC_9(&VAR_12->lock, VAR_21);

 if (FUNC_10(VAR_13))
  FUNC_11(VAR_13, VAR_18, VAR_18);
}
