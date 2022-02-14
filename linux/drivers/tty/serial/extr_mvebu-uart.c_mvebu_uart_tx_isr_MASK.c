
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {scalar_t__ membase; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct uart_port*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct uart_port*,unsigned int) ;
 unsigned int FUNC_2 (scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 struct uart_port *VAR_4 = (struct uart_port *)VAR_3;
 unsigned int VAR_5 = FUNC_2(VAR_4->membase + VAR_1);

 if (VAR_5 & FUNC_0(VAR_4))
  FUNC_1(VAR_4, VAR_5);

 return VAR_0;
}
