
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_state {int port; } ;
struct tty_struct {struct uart_state* driver_data; } ;
struct file {int dummy; } ;


 int FUNC_0 (int *,struct tty_struct*,struct file*) ;

__attribute__((used)) static int FUNC_1(struct tty_struct *VAR_0, struct file *VAR_1)
{
 struct uart_state *VAR_2 = VAR_0->driver_data;
 int VAR_3;

 VAR_3 = FUNC_0(&VAR_2->port, VAR_0, VAR_1);
 if (VAR_3 > 0)
  VAR_3 = 0;

 return VAR_3;
}
