
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int c_cflag; } ;
struct tty_struct {int hw_stopped; TYPE_1__ termios; struct sdio_uart_port* driver_data; } ;
struct sdio_uart_port {int dummy; } ;
struct ktermios {unsigned int c_cflag; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (struct sdio_uart_port*,TYPE_1__*,struct ktermios*) ;
 scalar_t__ FUNC_1 (struct sdio_uart_port*) ;
 int FUNC_2 (struct sdio_uart_port*,unsigned int) ;
 int FUNC_3 (struct sdio_uart_port*) ;
 int FUNC_4 (struct sdio_uart_port*) ;
 int FUNC_5 (struct sdio_uart_port*,unsigned int) ;
 int FUNC_6 (struct sdio_uart_port*) ;
 int FUNC_7 (struct sdio_uart_port*) ;
 int FUNC_8 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_9(struct tty_struct *VAR_5,
      struct ktermios *VAR_6)
{
 struct sdio_uart_port *VAR_7 = VAR_5->driver_data;
 unsigned int VAR_8 = VAR_5->termios.c_cflag;

 if (FUNC_1(VAR_7) != 0)
  return;

 FUNC_0(VAR_7, &VAR_5->termios, VAR_6);


 if ((VAR_6->c_cflag & VAR_0) && !(VAR_8 & VAR_0))
  FUNC_2(VAR_7, VAR_4 | VAR_3);


 if (!(VAR_6->c_cflag & VAR_0) && (VAR_8 & VAR_0)) {
  unsigned int VAR_9 = VAR_3;
  if (!(VAR_8 & VAR_1) || !FUNC_8(VAR_5))
   VAR_9 |= VAR_4;
  FUNC_5(VAR_7, VAR_9);
 }


 if ((VAR_6->c_cflag & VAR_1) && !(VAR_8 & VAR_1)) {
  VAR_5->hw_stopped = 0;
  FUNC_6(VAR_7);
 }


 if (!(VAR_6->c_cflag & VAR_1) && (VAR_8 & VAR_1)) {
  if (!(FUNC_3(VAR_7) & VAR_2)) {
   VAR_5->hw_stopped = 1;
   FUNC_7(VAR_7);
  }
 }

 FUNC_4(VAR_7);
}
