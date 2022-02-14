
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int lock; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct uart_port*) ;
 int FUNC_1 (struct uart_port*) ;
 int FUNC_2 (struct uart_port*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 unsigned long FUNC_5 (struct uart_port*,int ) ;
 int FUNC_6 (struct uart_port*,unsigned long,int ) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_5, void *VAR_6)
{
 struct uart_port *VAR_7 = VAR_6;
 unsigned long VAR_8;

 FUNC_3(&VAR_7->lock);
 VAR_8 = FUNC_5(VAR_7, VAR_4);


 FUNC_6(VAR_7, VAR_8, VAR_4);

 if (VAR_8 & VAR_1)
  FUNC_1(VAR_7);
 if (VAR_8 & VAR_3)
  FUNC_2(VAR_7);
 if (VAR_8 & VAR_2)
  FUNC_0(VAR_7);

 FUNC_4(&VAR_7->lock);

 return VAR_0;
}
