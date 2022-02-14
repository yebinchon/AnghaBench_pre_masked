
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uart_port {TYPE_1__* state; } ;
struct tty_port {int dummy; } ;
struct TYPE_4__ {scalar_t__ (* receive_chars ) (struct uart_port*) ;} ;
struct TYPE_3__ {struct tty_port port; } ;


 scalar_t__ FUNC_0 (struct uart_port*) ;
 int FUNC_1 () ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static struct tty_port *FUNC_2(struct uart_port *VAR_1)
{
 struct tty_port *VAR_2 = ((void*)0);

 if (VAR_1->state != ((void*)0))
  VAR_2 = &VAR_1->state->port;

 if (VAR_0->receive_chars(VAR_1))
  FUNC_1();

 return VAR_2;
}
