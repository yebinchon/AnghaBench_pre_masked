
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int regshift; scalar_t__ membase; } ;


 unsigned int FUNC_0 (struct uart_port*,int,unsigned int) ;
 unsigned int FUNC_1 (scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_2(struct uart_port *VAR_0, int VAR_1)
{
 unsigned int VAR_2 = FUNC_1(VAR_0->membase + (VAR_1 << VAR_0->regshift));

 return FUNC_0(VAR_0, VAR_1, VAR_2);
}
