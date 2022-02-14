
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {TYPE_1__* state; } ;
struct circ_buf {int dummy; } ;
struct TYPE_2__ {struct circ_buf xmit; } ;


 int FUNC_0 (struct uart_port*) ;
 scalar_t__ FUNC_1 (struct circ_buf*) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_0)
{
 struct circ_buf *VAR_1 = &VAR_0->state->xmit;

 if (FUNC_1(VAR_1))
  return;

 FUNC_0(VAR_0);
}
