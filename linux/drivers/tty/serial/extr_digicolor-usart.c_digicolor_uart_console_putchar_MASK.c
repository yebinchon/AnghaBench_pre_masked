
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {scalar_t__ membase; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct uart_port*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_1, int VAR_2)
{
 while (FUNC_1(VAR_1))
  FUNC_0();

 FUNC_2(VAR_2, VAR_1->membase + VAR_0);
}
