
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_state {int dummy; } ;
struct uart_driver {struct uart_state* state; } ;
struct tty_struct {int index; struct uart_state* driver_data; } ;
struct tty_driver {struct uart_driver* driver_state; } ;


 int FUNC_0 (struct tty_driver*,struct tty_struct*) ;

__attribute__((used)) static int FUNC_1(struct tty_driver *VAR_0, struct tty_struct *VAR_1)
{
 struct uart_driver *VAR_2 = VAR_0->driver_state;
 struct uart_state *VAR_3 = VAR_2->state + VAR_1->index;

 VAR_1->driver_data = VAR_3;

 return FUNC_0(VAR_0, VAR_1);
}
