
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {scalar_t__ line; } ;
struct console {scalar_t__ index; } ;
struct TYPE_2__ {struct console* cons; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct uart_port *VAR_1)
{
 struct console *VAR_2 = VAR_0.cons;

 if (VAR_2 && VAR_2->index >= 0 && VAR_2->index == VAR_1->line)
  return 1;

 return 0;
}
