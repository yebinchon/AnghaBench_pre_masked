
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {scalar_t__ membase; } ;


 int FUNC_0 (unsigned int,scalar_t__) ;

__attribute__((used)) static
void FUNC_1(struct uart_port *VAR_0, unsigned int VAR_1, unsigned int VAR_2)
{
 FUNC_0(VAR_1, VAR_0->membase + VAR_2);
}
