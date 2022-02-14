
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;


 long VAR_0 ;
 long FUNC_0 (char) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline void FUNC_2(struct uart_port *VAR_1, char VAR_2)
{
 int VAR_3 = 1000000;

 while (VAR_3-- > 0) {
  long VAR_4 = FUNC_0(VAR_2);
  if (VAR_4 == VAR_0)
   break;
  FUNC_1(1);
 }
}
