
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mutex; } ;
struct uart_state {TYPE_1__ port; } ;
struct uart_port {TYPE_2__* ops; } ;
struct tty_struct {int termios; struct uart_state* driver_data; } ;
struct TYPE_4__ {int (* set_ldisc ) (struct uart_port*,int *) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct uart_port*,int *) ;
 struct uart_port* FUNC_3 (struct uart_state*) ;

__attribute__((used)) static void FUNC_4(struct tty_struct *VAR_0)
{
 struct uart_state *VAR_1 = VAR_0->driver_data;
 struct uart_port *VAR_2;

 FUNC_0(&VAR_1->port.mutex);
 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2 && VAR_2->ops->set_ldisc)
  VAR_2->ops->set_ldisc(VAR_2, &VAR_0->termios);
 FUNC_1(&VAR_1->port.mutex);
}
