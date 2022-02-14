
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t type; int * attr_group; } ;
struct uart_8250_port {TYPE_1__ port; } ;
struct serial8250_config {scalar_t__* rxtrig_bytes; } ;


 int VAR_0 ;
 struct serial8250_config* VAR_1 ;

__attribute__((used)) static void FUNC_0(struct uart_8250_port *VAR_2)
{
 const struct serial8250_config *VAR_3 = &VAR_1[VAR_2->port.type];

 if (VAR_3->rxtrig_bytes[0])
  VAR_2->port.attr_group = &VAR_0;
}
