
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {scalar_t__ membase; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static unsigned int
FUNC_1(struct uart_port *VAR_3)
{
 int VAR_4;
 VAR_4 = FUNC_0(VAR_3->membase + VAR_1) &
   VAR_0;
 return VAR_4 ? 0 : VAR_2;
}
