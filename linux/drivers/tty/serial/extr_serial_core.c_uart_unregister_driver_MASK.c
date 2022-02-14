
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_driver {unsigned int nr; struct tty_driver* tty_driver; TYPE_1__* state; } ;
struct tty_driver {int dummy; } ;
struct TYPE_2__ {int port; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct tty_driver*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tty_driver*) ;

void FUNC_4(struct uart_driver *VAR_0)
{
 struct tty_driver *VAR_1 = VAR_0->tty_driver;
 unsigned int VAR_2;

 FUNC_3(VAR_1);
 FUNC_1(VAR_1);
 for (VAR_2 = 0; VAR_2 < VAR_0->nr; VAR_2++)
  FUNC_2(&VAR_0->state[VAR_2].port);
 FUNC_0(VAR_0->state);
 VAR_0->state = ((void*)0);
 VAR_0->tty_driver = ((void*)0);
}
