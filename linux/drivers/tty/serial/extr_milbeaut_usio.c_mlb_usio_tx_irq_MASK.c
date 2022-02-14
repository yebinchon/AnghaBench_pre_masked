
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int lock; scalar_t__ membase; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct uart_port*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_3, void *VAR_4)
{
 struct uart_port *VAR_5 = VAR_4;

 FUNC_2(&VAR_5->lock);
 if (FUNC_1(VAR_5->membase + VAR_1) & VAR_2)
  FUNC_0(VAR_5);
 FUNC_3(&VAR_5->lock);

 return VAR_0;
}
