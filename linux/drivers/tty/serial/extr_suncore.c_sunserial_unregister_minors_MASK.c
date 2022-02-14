
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_driver {int nr; } ;


 int VAR_0 ;
 int FUNC_0 (struct uart_driver*) ;

void FUNC_1(struct uart_driver *VAR_1, int VAR_2)
{
 VAR_1->nr -= VAR_2;
 VAR_0 -= VAR_2;

 if (VAR_1->nr == 0)
  FUNC_0(VAR_1);
}
