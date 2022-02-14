
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {scalar_t__ membase; } ;


 scalar_t__ VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned char,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_2)
{
 unsigned char VAR_3;

 VAR_3 = FUNC_0(VAR_2->membase + VAR_0);
 FUNC_1(VAR_3 & ~VAR_1, VAR_2->membase + VAR_0);
}
