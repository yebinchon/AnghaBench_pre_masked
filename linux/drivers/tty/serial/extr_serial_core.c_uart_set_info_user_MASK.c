
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_port {int mutex; } ;
struct uart_state {struct tty_port port; } ;
struct tty_struct {int termios_rwsem; struct uart_state* driver_data; } ;
struct serial_struct {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tty_struct*,struct tty_port*,struct uart_state*,struct serial_struct*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct tty_struct *VAR_0, struct serial_struct *VAR_1)
{
 struct uart_state *VAR_2 = VAR_0->driver_data;
 struct tty_port *VAR_3 = &VAR_2->port;
 int VAR_4;

 FUNC_0(&VAR_0->termios_rwsem);







 FUNC_1(&VAR_3->mutex);
 VAR_4 = FUNC_3(VAR_0, VAR_3, VAR_2, VAR_1);
 FUNC_2(&VAR_3->mutex);
 FUNC_4(&VAR_0->termios_rwsem);
 return VAR_4;
}
