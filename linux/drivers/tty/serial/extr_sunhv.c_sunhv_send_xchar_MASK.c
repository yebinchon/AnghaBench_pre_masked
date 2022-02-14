
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int lock; } ;


 long VAR_0 ;
 char VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 long FUNC_2 (char) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_2, char VAR_3)
{
 unsigned long VAR_4;
 int VAR_5 = 10000;

 if (VAR_3 == VAR_1)
  return;

 FUNC_0(&VAR_2->lock, VAR_4);

 while (VAR_5-- > 0) {
  long VAR_6 = FUNC_2(VAR_3);
  if (VAR_6 == VAR_0)
   break;
  FUNC_3(1);
 }

 FUNC_1(&VAR_2->lock, VAR_4);
}
