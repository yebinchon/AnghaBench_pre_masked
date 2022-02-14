
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_port {int mutex; } ;
struct uart_state {struct tty_port port; } ;
struct uart_port {int dummy; } ;
struct tty_struct {struct uart_state* driver_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tty_struct*) ;
 struct uart_port* FUNC_3 (struct uart_state*) ;
 int FUNC_4 (struct uart_port*,unsigned int,unsigned int) ;

__attribute__((used)) static int
FUNC_5(struct tty_struct *VAR_1, unsigned int VAR_2, unsigned int VAR_3)
{
 struct uart_state *VAR_4 = VAR_1->driver_data;
 struct tty_port *VAR_5 = &VAR_4->port;
 struct uart_port *VAR_6;
 int VAR_7 = -VAR_0;

 FUNC_0(&VAR_5->mutex);
 VAR_6 = FUNC_3(VAR_4);
 if (!VAR_6)
  goto out;

 if (!FUNC_2(VAR_1)) {
  FUNC_4(VAR_6, VAR_2, VAR_3);
  VAR_7 = 0;
 }
out:
 FUNC_1(&VAR_5->mutex);
 return VAR_7;
}
