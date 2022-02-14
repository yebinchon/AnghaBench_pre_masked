
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int lock; scalar_t__ membase; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_3, int VAR_4)
{
 unsigned int VAR_5;
 unsigned long VAR_6;

 FUNC_1(&VAR_3->lock, VAR_6);

 VAR_5 = FUNC_0(VAR_3->membase + VAR_0);

 if (VAR_4 == -1)
  FUNC_3(VAR_1 | VAR_5,
    VAR_3->membase + VAR_0);
 else {
  if ((VAR_5 & VAR_2) == 0)
   FUNC_3(VAR_2 | VAR_5,
     VAR_3->membase + VAR_0);
 }
 FUNC_2(&VAR_3->lock, VAR_6);
}
