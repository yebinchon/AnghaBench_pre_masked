
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uart_port {TYPE_1__* state; } ;
struct circ_buf {int dummy; } ;
struct TYPE_4__ {int (* transmit_chars ) (struct uart_port*,struct circ_buf*) ;} ;
struct TYPE_3__ {struct circ_buf xmit; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct uart_port*,struct circ_buf*) ;
 TYPE_2__* VAR_1 ;
 scalar_t__ FUNC_1 (struct circ_buf*) ;
 scalar_t__ FUNC_2 (struct circ_buf*) ;
 scalar_t__ FUNC_3 (struct uart_port*) ;
 int FUNC_4 (struct uart_port*) ;

__attribute__((used)) static void FUNC_5(struct uart_port *VAR_2)
{
 struct circ_buf *VAR_3;

 if (!VAR_2->state)
  return;

 VAR_3 = &VAR_2->state->xmit;
 if (FUNC_2(VAR_3) || FUNC_3(VAR_2))
  return;

 VAR_1->transmit_chars(VAR_2, VAR_3);

 if (FUNC_1(VAR_3) < VAR_0)
  FUNC_4(VAR_2);
}
