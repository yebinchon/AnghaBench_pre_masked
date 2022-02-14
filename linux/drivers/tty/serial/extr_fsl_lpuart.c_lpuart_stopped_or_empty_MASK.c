
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {TYPE_1__* state; } ;
struct TYPE_2__ {int xmit; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct uart_port*) ;

__attribute__((used)) static bool FUNC_2(struct uart_port *VAR_0)
{
 return FUNC_0(&VAR_0->state->xmit) || FUNC_1(VAR_0);
}
