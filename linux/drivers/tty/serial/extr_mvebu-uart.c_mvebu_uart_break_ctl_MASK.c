
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int lock; scalar_t__ membase; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (struct uart_port*) ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct uart_port *VAR_1, int VAR_2)
{
 unsigned int VAR_3;
 unsigned long VAR_4;

 FUNC_2(&VAR_1->lock, VAR_4);
 VAR_3 = FUNC_1(VAR_1->membase + FUNC_0(VAR_1));
 if (VAR_2 == -1)
  VAR_3 |= VAR_0;
 else
  VAR_3 &= ~VAR_0;
 FUNC_4(VAR_3, VAR_1->membase + FUNC_0(VAR_1));
 FUNC_3(&VAR_1->lock, VAR_4);
}
