
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int lock; } ;
struct uart_pmac_port {int dummy; } ;
struct ktermios {int dummy; } ;


 scalar_t__ FUNC_0 (struct uart_pmac_port*) ;
 int FUNC_1 (struct uart_port*,struct ktermios*,struct ktermios*) ;
 int FUNC_2 (struct uart_pmac_port*,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct uart_pmac_port* FUNC_5 (struct uart_port*) ;

__attribute__((used)) static void FUNC_6(struct uart_port *VAR_0, struct ktermios *VAR_1,
       struct ktermios *VAR_2)
{
 struct uart_pmac_port *VAR_3 = FUNC_5(VAR_0);
 unsigned long VAR_4;

 FUNC_3(&VAR_0->lock, VAR_4);


 FUNC_2(VAR_3, 0);


 FUNC_1(VAR_0, VAR_1, VAR_2);


 if (FUNC_0(VAR_3))
  FUNC_2(VAR_3, 1);

 FUNC_4(&VAR_0->lock, VAR_4);
}
