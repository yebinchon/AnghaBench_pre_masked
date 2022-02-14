
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {scalar_t__ membase; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct uart_port *VAR_4, int VAR_5)
{
 int VAR_6;

 if (!VAR_4->membase)
  return;

 do {
  VAR_6 = (FUNC_0(VAR_4->membase + VAR_2)
   & VAR_0) >> VAR_1;
 } while (VAR_6 == 0);
 FUNC_1(VAR_5, VAR_4->membase + VAR_3);
}
