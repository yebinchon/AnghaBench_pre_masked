
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_driver {struct tty_driver* tty_driver; } ;
struct tty_driver {int dummy; } ;
struct console {int index; struct uart_driver* data; } ;



struct tty_driver *FUNC_0(struct console *VAR_0, int *VAR_1)
{
 struct uart_driver *VAR_2 = VAR_0->data;
 *VAR_1 = VAR_0->index;
 return VAR_2->tty_driver;
}
