
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_port {int dummy; } ;
struct uart_state {struct tty_port port; } ;
struct tty_struct {struct uart_state* driver_data; } ;
struct serial_struct {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct tty_port*,struct serial_struct*) ;

__attribute__((used)) static int FUNC_1(struct tty_struct *VAR_1,
    struct serial_struct *VAR_2)
{
 struct uart_state *VAR_3 = VAR_1->driver_data;
 struct tty_port *VAR_4 = &VAR_3->port;

 return FUNC_0(VAR_4, VAR_2) < 0 ? -VAR_0 : 0;
}
