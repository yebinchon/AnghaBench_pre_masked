
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_2__ {int (* stop_tx ) (struct uart_port*) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct uart_port*) ;

__attribute__((used)) static void
FUNC_1(struct uart_port *VAR_1)
{

 VAR_0->stop_tx(VAR_1);
}
