
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int line; } ;
struct TYPE_2__ {scalar_t__ type; scalar_t__ iobase; } ;
struct uart_8250_port {TYPE_1__ port; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct uart_8250_port* VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*,struct uart_port*) ;

__attribute__((used)) static struct uart_8250_port *FUNC_1(struct uart_port *VAR_3)
{
 int VAR_4;




 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  if (FUNC_0(&VAR_2[VAR_4].port, VAR_3))
   return &VAR_2[VAR_4];


 VAR_4 = VAR_3->line;
 if (VAR_4 < VAR_1 && VAR_2[VAR_4].port.type == VAR_0 &&
   VAR_2[VAR_4].port.iobase == 0)
  return &VAR_2[VAR_4];





 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  if (VAR_2[VAR_4].port.type == VAR_0 &&
      VAR_2[VAR_4].port.iobase == 0)
   return &VAR_2[VAR_4];





 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  if (VAR_2[VAR_4].port.type == VAR_0)
   return &VAR_2[VAR_4];

 return ((void*)0);
}
