
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int lock; scalar_t__ membase; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct uart_port*) ;
 int FUNC_1 (struct uart_port*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_6, void *VAR_7)
{
 struct uart_port *VAR_8 = (struct uart_port *)VAR_7;

 FUNC_3(&VAR_8->lock);

 if (!(FUNC_2(VAR_8->membase + VAR_2) & VAR_1))
  FUNC_0(VAR_8);

 if (!(FUNC_2(VAR_8->membase + VAR_2) & VAR_3)) {
  if (FUNC_2(VAR_8->membase + VAR_0) & VAR_4)
   FUNC_1(VAR_8);
 }

 FUNC_4(&VAR_8->lock);

 return VAR_5;
}
