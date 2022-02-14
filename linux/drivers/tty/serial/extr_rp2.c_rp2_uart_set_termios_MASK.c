
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int uartclk; int lock; int ignore_status_mask; } ;
struct rp2_uart_port {int dummy; } ;
struct ktermios {int c_cflag; int c_iflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rp2_uart_port*,int,int ,unsigned int) ;
 struct rp2_uart_port* FUNC_1 (struct uart_port*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (struct ktermios*) ;
 int FUNC_5 (struct ktermios*,unsigned int,unsigned int) ;
 unsigned int FUNC_6 (struct uart_port*,struct ktermios*,struct ktermios*,int ,int) ;
 unsigned int FUNC_7 (struct uart_port*,unsigned int) ;
 int FUNC_8 (struct uart_port*,int,unsigned int) ;

__attribute__((used)) static void FUNC_9(struct uart_port *VAR_2,
     struct ktermios *VAR_3,
     struct ktermios *VAR_4)
{
 struct rp2_uart_port *VAR_5 = FUNC_1(VAR_2);
 unsigned long VAR_6;
 unsigned int VAR_7, VAR_8;

 VAR_7 = FUNC_6(VAR_2, VAR_3, VAR_4, 0, VAR_2->uartclk / 16);
 VAR_8 = FUNC_7(VAR_2, VAR_7);

 if (FUNC_4(VAR_3))
  FUNC_5(VAR_3, VAR_7, VAR_7);

 FUNC_2(&VAR_2->lock, VAR_6);


 VAR_2->ignore_status_mask = (VAR_3->c_cflag & VAR_0) ? 0 : VAR_1;

 FUNC_0(VAR_5, VAR_3->c_cflag, VAR_3->c_iflag, VAR_8);
 FUNC_8(VAR_2, VAR_3->c_cflag, VAR_7);

 FUNC_3(&VAR_2->lock, VAR_6);
}
