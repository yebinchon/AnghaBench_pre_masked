
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {scalar_t__ membase; } ;


 scalar_t__ VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned char,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_3)
{
 unsigned char VAR_4;

 VAR_4 = FUNC_0(VAR_3->membase + VAR_0);
 VAR_4 &= ~(VAR_2 | VAR_1);
 FUNC_1(VAR_4, VAR_3->membase + VAR_0);
}
