
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* state; } ;
struct uart_8250_port {TYPE_2__ port; } ;
struct timer_list {int dummy; } ;
struct aspeed_vuart {int unthrottle_timer; struct uart_8250_port* port; } ;
struct TYPE_3__ {int port; } ;


 int FUNC_0 (TYPE_2__*) ;
 struct aspeed_vuart* FUNC_1 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct aspeed_vuart* VAR_3 ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_4)
{
 struct aspeed_vuart *VAR_5 = FUNC_1(VAR_5, VAR_4, VAR_2);
 struct uart_8250_port *VAR_6 = VAR_5->port;

 if (!FUNC_3(&VAR_6->port.state->port)) {
  FUNC_2(&VAR_5->unthrottle_timer,
     VAR_0 + VAR_1);
  return;
 }

 FUNC_0(&VAR_6->port);
}
