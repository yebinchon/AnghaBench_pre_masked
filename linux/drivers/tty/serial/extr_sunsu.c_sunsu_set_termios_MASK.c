
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int uartclk; } ;
struct ktermios {int c_iflag; int c_cflag; } ;


 int FUNC_0 (struct uart_port*,int ,int ,unsigned int) ;
 unsigned int FUNC_1 (struct uart_port*,struct ktermios*,struct ktermios*,int ,int) ;
 unsigned int FUNC_2 (struct uart_port*,unsigned int) ;

__attribute__((used)) static void
FUNC_3(struct uart_port *VAR_0, struct ktermios *VAR_1,
    struct ktermios *VAR_2)
{
 unsigned int VAR_3, VAR_4;




 VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2, 0, VAR_0->uartclk/16);
 VAR_4 = FUNC_2(VAR_0, VAR_3);

 FUNC_0(VAR_0, VAR_1->c_cflag, VAR_1->c_iflag, VAR_4);
}
