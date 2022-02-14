
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {scalar_t__ membase; } ;


 unsigned int FUNC_0 (scalar_t__) ;

__attribute__((used)) static
unsigned int FUNC_1(struct uart_port *VAR_0, unsigned int VAR_1)
{
 return FUNC_0(VAR_0->membase + VAR_1);
}
