
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int lock; } ;
struct uart_8250_port {int lcr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct uart_8250_port*) ;
 int FUNC_1 (struct uart_8250_port*) ;
 int FUNC_2 (struct uart_port*,int ,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct uart_8250_port* FUNC_5 (struct uart_port*) ;

__attribute__((used)) static void FUNC_6(struct uart_port *VAR_2, int VAR_3)
{
 struct uart_8250_port *VAR_4 = FUNC_5(VAR_2);
 unsigned long VAR_5;

 FUNC_0(VAR_4);
 FUNC_3(&VAR_2->lock, VAR_5);
 if (VAR_3 == -1)
  VAR_4->lcr |= VAR_1;
 else
  VAR_4->lcr &= ~VAR_1;
 FUNC_2(VAR_2, VAR_0, VAR_4->lcr);
 FUNC_4(&VAR_2->lock, VAR_5);
 FUNC_1(VAR_4);
}
