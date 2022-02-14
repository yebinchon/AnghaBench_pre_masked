
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int mapsize; scalar_t__ iotype; scalar_t__ type; int regshift; } ;
struct uart_8250_port {TYPE_1__ port; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct uart_8250_port*) ;

__attribute__((used)) static unsigned int FUNC_1(struct uart_8250_port *VAR_2)
{
 if (VAR_2->port.mapsize)
  return VAR_2->port.mapsize;
 if (VAR_2->port.iotype == VAR_1) {
  if (VAR_2->port.type == VAR_0)
   return 0x100;
  return 0x1000;
 }
 if (FUNC_0(VAR_2))
  return 0x16 << VAR_2->port.regshift;

 return 8 << VAR_2->port.regshift;
}
