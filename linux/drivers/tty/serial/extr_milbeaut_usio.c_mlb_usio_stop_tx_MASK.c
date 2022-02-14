
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {scalar_t__ membase; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_4)
{
 FUNC_3(FUNC_1(VAR_4->membase + VAR_1) & ~VAR_0,
        VAR_4->membase + VAR_1);
 FUNC_2(FUNC_0(VAR_4->membase + VAR_2) & ~VAR_3,
        VAR_4->membase + VAR_2);
}
