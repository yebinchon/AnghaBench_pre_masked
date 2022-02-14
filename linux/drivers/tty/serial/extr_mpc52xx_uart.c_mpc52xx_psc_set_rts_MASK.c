
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_2__ {int op0; int op1; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct uart_port*) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_1, int VAR_2)
{
 if (VAR_2)
  FUNC_1(&FUNC_0(VAR_1)->op1, VAR_0);
 else
  FUNC_1(&FUNC_0(VAR_1)->op0, VAR_0);
}
