
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {TYPE_1__* state; } ;
struct tty_port {int dummy; } ;
struct eg20t_port {struct uart_port port; } ;
struct TYPE_2__ {struct tty_port port; } ;


 int FUNC_0 (struct tty_port*) ;
 int FUNC_1 (struct tty_port*,unsigned char const*,int) ;

__attribute__((used)) static int FUNC_2(struct eg20t_port *VAR_0, const unsigned char *VAR_1,
     int VAR_2)
{
 struct uart_port *VAR_3 = &VAR_0->port;
 struct tty_port *VAR_4 = &VAR_3->state->port;

 FUNC_1(VAR_4, VAR_1, VAR_2);
 FUNC_0(VAR_4);

 return 0;
}
