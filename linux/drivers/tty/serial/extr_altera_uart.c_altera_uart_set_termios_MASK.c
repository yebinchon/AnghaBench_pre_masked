
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {unsigned int uartclk; int lock; } ;
struct ktermios {int c_cflag; } ;


 int VAR_0 ;
 int FUNC_0 (struct uart_port*,unsigned int,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct ktermios*,struct ktermios*) ;
 int FUNC_4 (struct ktermios*,unsigned int,unsigned int) ;
 unsigned int FUNC_5 (struct uart_port*,struct ktermios*,struct ktermios*,int ,int) ;
 int FUNC_6 (struct uart_port*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_7(struct uart_port *VAR_1,
        struct ktermios *VAR_2,
        struct ktermios *VAR_3)
{
 unsigned long VAR_4;
 unsigned int VAR_5, VAR_6;

 VAR_5 = FUNC_5(VAR_1, VAR_2, VAR_3, 0, 4000000);
 VAR_6 = VAR_1->uartclk / VAR_5;

 if (VAR_3)
  FUNC_3(VAR_2, VAR_3);
 FUNC_4(VAR_2, VAR_5, VAR_5);

 FUNC_1(&VAR_1->lock, VAR_4);
 FUNC_6(VAR_1, VAR_2->c_cflag, VAR_5);
 FUNC_0(VAR_1, VAR_6, VAR_0);
 FUNC_2(&VAR_1->lock, VAR_4);






}
