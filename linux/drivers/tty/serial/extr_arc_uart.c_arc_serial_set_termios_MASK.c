
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int uartclk; int lock; } ;
struct ktermios {int c_cflag; } ;
struct arc_uart_port {int baud; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct uart_port*) ;
 int FUNC_1 (struct uart_port*) ;
 int FUNC_2 (struct uart_port*,unsigned int) ;
 int FUNC_3 (struct uart_port*,unsigned int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct arc_uart_port* FUNC_6 (struct uart_port*) ;
 scalar_t__ FUNC_7 (struct ktermios*) ;
 int FUNC_8 (struct ktermios*,struct ktermios*) ;
 int FUNC_9 (struct ktermios*,unsigned int,unsigned int) ;
 unsigned int FUNC_10 (struct uart_port*,struct ktermios*,struct ktermios*,int ,int) ;
 int FUNC_11 (struct uart_port*,int,unsigned int) ;

__attribute__((used)) static void
FUNC_12(struct uart_port *VAR_4, struct ktermios *VAR_5,
         struct ktermios *VAR_6)
{
 struct arc_uart_port *VAR_7 = FUNC_6(VAR_4);
 unsigned int VAR_8, VAR_9, VAR_10, VAR_11;
 unsigned long VAR_12;
 VAR_8 = FUNC_10(VAR_4, VAR_5, VAR_6, 0, 460800);

 VAR_11 = VAR_4->uartclk / (VAR_7->baud * 4) - 1;
 VAR_9 = VAR_11 & 0xFF;
 VAR_10 = (VAR_11 >> 8) & 0xFF;

 FUNC_4(&VAR_4->lock, VAR_12);

 FUNC_0(VAR_4);

 FUNC_3(VAR_4, VAR_9);
 FUNC_2(VAR_4, VAR_10);

 FUNC_1(VAR_4);





 VAR_5->c_cflag &= ~(VAR_0|VAR_1|VAR_3);
 VAR_5->c_cflag |= VAR_2;

 if (VAR_6)
  FUNC_8(VAR_5, VAR_6);


 if (FUNC_7(VAR_5))
  FUNC_9(VAR_5, VAR_8, VAR_8);

 FUNC_11(VAR_4, VAR_5->c_cflag, VAR_8);

 FUNC_5(&VAR_4->lock, VAR_12);
}
