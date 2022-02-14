
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int line; } ;


 int FUNC_0 (struct uart_port*) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_0)
{
 FUNC_1("CPM uart[%d]:TX INT\n", VAR_0->line);

 FUNC_0(VAR_0);
}
