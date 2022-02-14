
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int lock; scalar_t__ membase; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static unsigned int FUNC_3(struct uart_port *VAR_3)
{
 unsigned long VAR_4;
 unsigned int VAR_5;

 FUNC_1(&VAR_3->lock, VAR_4);
 VAR_5 = FUNC_0(VAR_3->membase + VAR_2);
 FUNC_2(&VAR_3->lock, VAR_4);

 return (VAR_5 & VAR_0) ? VAR_1 : 0;
}
