
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {scalar_t__ membase; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_0 (struct uart_port*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct uart_port*,unsigned int) ;
 unsigned int FUNC_2 (scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_5, void *VAR_6)
{
 struct uart_port *VAR_7 = (struct uart_port *)VAR_6;
 unsigned int VAR_8 = FUNC_2(VAR_7->membase + VAR_4);

 if (VAR_8 & (FUNC_0(VAR_7) | VAR_3 | VAR_2 |
   VAR_1))
  FUNC_1(VAR_7, VAR_8);

 return VAR_0;
}
