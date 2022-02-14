
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {scalar_t__ membase; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static bool FUNC_1(struct uart_port *VAR_2)
{
 return !!(FUNC_0(VAR_2->membase + VAR_0) &
    VAR_1);
}
