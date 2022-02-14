
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int lock; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct uart_port*) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (struct uart_port*) ;
 int FUNC_2 (struct uart_port*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_3, void *VAR_4)
{
 struct uart_port *VAR_5 = VAR_4;
 unsigned int VAR_6;

 FUNC_3(&VAR_5->lock);

 VAR_6 = FUNC_0(VAR_5);
 if (VAR_6 & VAR_1)
  FUNC_1(VAR_5);
 if (VAR_6 & VAR_2)
  FUNC_2(VAR_5);

 FUNC_4(&VAR_5->lock);

 return VAR_0;
}
