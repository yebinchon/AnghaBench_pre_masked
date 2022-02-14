
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_port {int mutex; } ;
struct uart_state {struct tty_port port; } ;
struct uart_port {scalar_t__ type; TYPE_1__* ops; } ;
struct tty_struct {struct uart_state* driver_data; } ;
struct TYPE_2__ {int (* break_ctl ) (struct uart_port*,int) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct uart_port*,int) ;
 struct uart_port* FUNC_3 (struct uart_state*) ;

__attribute__((used)) static int FUNC_4(struct tty_struct *VAR_2, int VAR_3)
{
 struct uart_state *VAR_4 = VAR_2->driver_data;
 struct tty_port *VAR_5 = &VAR_4->port;
 struct uart_port *VAR_6;
 int VAR_7 = -VAR_0;

 FUNC_0(&VAR_5->mutex);
 VAR_6 = FUNC_3(VAR_4);
 if (!VAR_6)
  goto out;

 if (VAR_6->type != VAR_1)
  VAR_6->ops->break_ctl(VAR_6, VAR_3);
 VAR_7 = 0;
out:
 FUNC_1(&VAR_5->mutex);
 return VAR_7;
}
