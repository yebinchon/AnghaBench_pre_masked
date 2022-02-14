
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct sc16is7xx_one {int line; } ;


 struct sc16is7xx_one* FUNC_0 (struct uart_port*,struct uart_port*) ;

__attribute__((used)) static int FUNC_1(struct uart_port *VAR_0)
{
 struct sc16is7xx_one *VAR_1 = FUNC_0(VAR_0, VAR_0);

 return VAR_1->line;
}
