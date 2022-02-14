
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int lock; int uartclk; } ;
struct ktermios {int c_cflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (int ,unsigned int) ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_1 (struct uart_port*,unsigned int,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (struct ktermios*) ;
 int FUNC_5 (struct ktermios*,unsigned int,unsigned int) ;
 unsigned int FUNC_6 (struct uart_port*,struct ktermios*,struct ktermios*,unsigned int,unsigned int) ;
 int FUNC_7 (struct uart_port*,int,unsigned int) ;

__attribute__((used)) static void
FUNC_8(struct uart_port *VAR_8, struct ktermios *VAR_9,
        struct ktermios *VAR_10)
{
 unsigned long VAR_11;
 unsigned int VAR_12, VAR_13;

 VAR_9->c_cflag &= ~(VAR_1 | VAR_0);
 VAR_9->c_cflag &= ~VAR_3;
 VAR_9->c_cflag |= VAR_2;
 VAR_9->c_cflag &= ~VAR_5;
 VAR_9->c_cflag &= ~VAR_4;

 VAR_12 = FUNC_6(VAR_8, VAR_9, VAR_10,
   FUNC_0(VAR_8->uartclk, VAR_7),
   FUNC_0(VAR_8->uartclk, 16));

 VAR_13 = FUNC_0(VAR_8->uartclk, VAR_12);

 FUNC_2(&VAR_8->lock, VAR_11);

 FUNC_7(VAR_8, VAR_9->c_cflag, VAR_12);
 FUNC_1(VAR_8, VAR_13, VAR_6);

 FUNC_3(&VAR_8->lock, VAR_11);

 if (FUNC_4(VAR_9))
  FUNC_5(VAR_9, VAR_12, VAR_12);
}
