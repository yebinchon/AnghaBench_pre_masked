
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_state {int pm_state; } ;
struct uart_port {TYPE_1__* ops; } ;
typedef enum uart_pm_state { ____Placeholder_uart_pm_state } uart_pm_state ;
struct TYPE_2__ {int (* pm ) (struct uart_port*,int,int) ;} ;


 int FUNC_0 (struct uart_port*,int,int) ;
 struct uart_port* FUNC_1 (struct uart_state*) ;

__attribute__((used)) static void FUNC_2(struct uart_state *VAR_0,
      enum uart_pm_state VAR_1)
{
 struct uart_port *VAR_2 = FUNC_1(VAR_0);

 if (VAR_0->pm_state != VAR_1) {
  if (VAR_2 && VAR_2->ops->pm)
   VAR_2->ops->pm(VAR_2, VAR_1, VAR_0->pm_state);
  VAR_0->pm_state = VAR_1;
 }
}
