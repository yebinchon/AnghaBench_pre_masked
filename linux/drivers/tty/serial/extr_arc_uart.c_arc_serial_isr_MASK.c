
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int lock; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_0 (struct uart_port*) ;
 int FUNC_1 (struct uart_port*) ;
 int FUNC_2 (struct uart_port*,unsigned int) ;
 int FUNC_3 (struct uart_port*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct uart_port*) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_4, void *VAR_5)
{
 struct uart_port *VAR_6 = VAR_5;
 unsigned int VAR_7;

 VAR_7 = FUNC_0(VAR_6);






 if (VAR_7 & VAR_1) {


  FUNC_4(&VAR_6->lock);
  FUNC_2(VAR_6, VAR_7);
  FUNC_5(&VAR_6->lock);
 }

 if ((VAR_7 & VAR_3) && (VAR_7 & VAR_2)) {




  FUNC_1(VAR_6);

  FUNC_4(&VAR_6->lock);

  if (!FUNC_6(VAR_6))
   FUNC_3(VAR_6);

  FUNC_5(&VAR_6->lock);
 }

 return VAR_0;
}
