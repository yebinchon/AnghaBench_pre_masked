
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uart_port {scalar_t__ membase; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_1(struct uart_port *VAR_4)
{
 u32 VAR_5;

 VAR_5 = FUNC_0(VAR_4->membase + VAR_0);
 VAR_5 &= (VAR_1 | VAR_2);
 return (VAR_5 == VAR_1) ? VAR_3 : 0;
}
