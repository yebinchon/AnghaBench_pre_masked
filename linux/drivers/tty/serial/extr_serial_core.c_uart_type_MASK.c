
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {TYPE_1__* ops; } ;
struct TYPE_2__ {char* (* type ) (struct uart_port*) ;} ;


 char* FUNC_0 (struct uart_port*) ;

__attribute__((used)) static const char *FUNC_1(struct uart_port *VAR_0)
{
 const char *VAR_1 = ((void*)0);

 if (VAR_0->ops->type)
  VAR_1 = VAR_0->ops->type(VAR_0);

 if (!VAR_1)
  VAR_1 = "unknown";

 return VAR_1;
}
