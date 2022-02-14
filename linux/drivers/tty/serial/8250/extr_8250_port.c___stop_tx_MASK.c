
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_8250_port {struct uart_8250_em485* em485; } ;
struct uart_8250_em485 {int * active_timer; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct uart_8250_port*) ;
 int FUNC_1 (struct uart_8250_port*) ;
 unsigned char FUNC_2 (struct uart_8250_port*,int ) ;

__attribute__((used)) static inline void FUNC_3(struct uart_8250_port *VAR_2)
{
 struct uart_8250_em485 *VAR_3 = VAR_2->em485;

 if (VAR_3) {
  unsigned char VAR_4 = FUNC_2(VAR_2, VAR_1);






  if ((VAR_4 & VAR_0) != VAR_0)
   return;

  VAR_3->active_timer = ((void*)0);

  FUNC_1(VAR_2);
 }
 FUNC_0(VAR_2);
}
