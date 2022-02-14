
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* enable_ms ) (struct uart_port*) ;} ;


 int FUNC_0 (struct uart_port*) ;

__attribute__((used)) static void FUNC_1(struct uart_port *VAR_0)
{



 if (VAR_0->ops->enable_ms)
  VAR_0->ops->enable_ms(VAR_0);
}
