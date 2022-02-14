
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int regshift; scalar_t__ membase; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_2)
{
 unsigned int VAR_3 = 20000;
 unsigned int VAR_4 = VAR_3 - 1000;
 unsigned int VAR_5;

 while (VAR_3--) {
  VAR_5 = FUNC_0 (VAR_2->membase + (VAR_0 << VAR_2->regshift));
  if (VAR_5 & VAR_1)
   break;





  if (VAR_3 < VAR_4)
   FUNC_1 (1);
 }
}
