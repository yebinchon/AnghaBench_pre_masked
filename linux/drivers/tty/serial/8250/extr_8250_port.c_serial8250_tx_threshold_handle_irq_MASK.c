
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int lock; } ;
struct uart_8250_port {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct uart_port*,unsigned int) ;
 int FUNC_1 (struct uart_8250_port*) ;
 unsigned int FUNC_2 (struct uart_port*,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct uart_8250_port* FUNC_5 (struct uart_port*) ;

__attribute__((used)) static int FUNC_6(struct uart_port *VAR_3)
{
 unsigned long VAR_4;
 unsigned int VAR_5 = FUNC_2(VAR_3, VAR_0);


 if ((VAR_5 & VAR_1) == VAR_2) {
  struct uart_8250_port *VAR_6 = FUNC_5(VAR_3);

  FUNC_3(&VAR_3->lock, VAR_4);
  FUNC_1(VAR_6);
  FUNC_4(&VAR_3->lock, VAR_4);
 }

 VAR_5 = FUNC_2(VAR_3, VAR_0);
 return FUNC_0(VAR_3, VAR_5);
}
