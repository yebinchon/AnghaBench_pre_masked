
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {scalar_t__ membase; TYPE_1__* state; } ;
struct TYPE_2__ {int xmit; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (struct uart_port*) ;
 unsigned int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct uart_port*) ;
 int FUNC_4 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct uart_port *VAR_6)
{
 unsigned int VAR_7;

 if (FUNC_3(VAR_6))
  return;





 VAR_7 = FUNC_1(VAR_6->membase + VAR_0);
 VAR_7 &= ~VAR_1;
 VAR_7 |= VAR_2;
 FUNC_4(VAR_7, VAR_6->membase + VAR_0);

 if (FUNC_2(&VAR_6->state->xmit))
  return;

 FUNC_0(VAR_6);

 FUNC_4(VAR_5, VAR_6->membase + VAR_4);

 FUNC_4(VAR_5, VAR_6->membase + VAR_3);
}
