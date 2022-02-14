
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_port {int lock; int count; } ;
struct uart_state {struct tty_port port; } ;
struct uart_driver {struct uart_state* state; } ;
struct tty_struct {int index; int port; TYPE_1__* driver; struct uart_state* driver_data; } ;
struct file {int dummy; } ;
struct TYPE_2__ {struct uart_driver* driver_state; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,struct tty_struct*,struct file*) ;

__attribute__((used)) static void FUNC_4(struct tty_struct *VAR_0, struct file *VAR_1)
{
 struct uart_state *VAR_2 = VAR_0->driver_data;

 if (!VAR_2) {
  struct uart_driver *VAR_3 = VAR_0->driver->driver_state;
  struct tty_port *VAR_4;

  VAR_2 = VAR_3->state + VAR_0->index;
  VAR_4 = &VAR_2->port;
  FUNC_1(&VAR_4->lock);
  --VAR_4->count;
  FUNC_2(&VAR_4->lock);
  return;
 }

 FUNC_0("uart_close(%d) called\n", VAR_0->index);

 FUNC_3(VAR_0->port, VAR_0, VAR_1);
}
