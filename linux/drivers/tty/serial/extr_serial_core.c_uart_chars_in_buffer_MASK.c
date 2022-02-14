
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_state {int xmit; } ;
struct uart_port {int dummy; } ;
struct tty_struct {struct uart_state* driver_data; } ;


 int FUNC_0 (int *) ;
 struct uart_port* FUNC_1 (struct uart_state*,unsigned long) ;
 int FUNC_2 (struct uart_port*,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct tty_struct *VAR_0)
{
 struct uart_state *VAR_1 = VAR_0->driver_data;
 struct uart_port *VAR_2;
 unsigned long VAR_3;
 int VAR_4;

 VAR_2 = FUNC_1(VAR_1, VAR_3);
 VAR_4 = FUNC_0(&VAR_1->xmit);
 FUNC_2(VAR_2, VAR_3);
 return VAR_4;
}
