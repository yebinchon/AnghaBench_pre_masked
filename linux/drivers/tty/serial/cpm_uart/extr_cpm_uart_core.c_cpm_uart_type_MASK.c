
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {scalar_t__ type; int line; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ) ;

__attribute__((used)) static const char *FUNC_1(struct uart_port *VAR_1)
{
 FUNC_0("CPM uart[%d]:uart_type\n", VAR_1->line);

 return VAR_1->type == VAR_0 ? "CPM UART" : ((void*)0);
}
