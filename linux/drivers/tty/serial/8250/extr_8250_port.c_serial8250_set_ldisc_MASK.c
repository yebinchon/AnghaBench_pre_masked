
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int (* set_ldisc ) (struct uart_port*,struct ktermios*) ;} ;
struct ktermios {int dummy; } ;


 int FUNC_0 (struct uart_port*,struct ktermios*) ;
 int FUNC_1 (struct uart_port*,struct ktermios*) ;

__attribute__((used)) static void
FUNC_2(struct uart_port *VAR_0, struct ktermios *VAR_1)
{
 if (VAR_0->set_ldisc)
  VAR_0->set_ldisc(VAR_0, VAR_1);
 else
  FUNC_0(VAR_0, VAR_1);
}
