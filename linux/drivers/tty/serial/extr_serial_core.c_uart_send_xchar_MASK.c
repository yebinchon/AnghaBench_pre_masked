
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_state {int dummy; } ;
struct uart_port {char x_char; int lock; TYPE_1__* ops; } ;
struct tty_struct {struct uart_state* driver_data; } ;
struct TYPE_2__ {int (* start_tx ) (struct uart_port*) ;int (* send_xchar ) (struct uart_port*,char) ;} ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct uart_port*,char) ;
 int FUNC_3 (struct uart_port*) ;
 int FUNC_4 (struct uart_port*) ;
 struct uart_port* FUNC_5 (struct uart_state*) ;

__attribute__((used)) static void FUNC_6(struct tty_struct *VAR_0, char VAR_1)
{
 struct uart_state *VAR_2 = VAR_0->driver_data;
 struct uart_port *VAR_3;
 unsigned long VAR_4;

 VAR_3 = FUNC_5(VAR_2);
 if (!VAR_3)
  return;

 if (VAR_3->ops->send_xchar)
  VAR_3->ops->send_xchar(VAR_3, VAR_1);
 else {
  FUNC_0(&VAR_3->lock, VAR_4);
  VAR_3->x_char = VAR_1;
  if (VAR_1)
   VAR_3->ops->start_tx(VAR_3);
  FUNC_1(&VAR_3->lock, VAR_4);
 }
 FUNC_4(VAR_3);
}
