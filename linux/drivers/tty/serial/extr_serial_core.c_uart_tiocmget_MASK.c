
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_port {int mutex; } ;
struct uart_state {struct tty_port port; } ;
struct uart_port {int mctrl; int lock; TYPE_1__* ops; } ;
struct tty_struct {struct uart_state* driver_data; } ;
struct TYPE_2__ {int (* get_mctrl ) (struct uart_port*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct uart_port*) ;
 int FUNC_5 (struct tty_struct*) ;
 struct uart_port* FUNC_6 (struct uart_state*) ;

__attribute__((used)) static int FUNC_7(struct tty_struct *VAR_1)
{
 struct uart_state *VAR_2 = VAR_1->driver_data;
 struct tty_port *VAR_3 = &VAR_2->port;
 struct uart_port *VAR_4;
 int VAR_5 = -VAR_0;

 FUNC_0(&VAR_3->mutex);
 VAR_4 = FUNC_6(VAR_2);
 if (!VAR_4)
  goto out;

 if (!FUNC_5(VAR_1)) {
  VAR_5 = VAR_4->mctrl;
  FUNC_2(&VAR_4->lock);
  VAR_5 |= VAR_4->ops->get_mctrl(VAR_4);
  FUNC_3(&VAR_4->lock);
 }
out:
 FUNC_1(&VAR_3->mutex);
 return VAR_5;
}
