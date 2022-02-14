
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int lock; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int FUNC_0 (struct uart_port*,int ) ;
 int FUNC_1 (struct uart_port*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct uart_port*) ;
 int FUNC_5 (struct uart_port*) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_9, void *VAR_10)
{
 struct uart_port *VAR_11 = VAR_10;
 unsigned int VAR_12;

 FUNC_2(&VAR_11->lock);

 VAR_12 = FUNC_0(VAR_11, VAR_4);

 if (!VAR_12) {
  FUNC_3(&VAR_11->lock);
  return VAR_1;
 }

 if (VAR_12 & VAR_7)
  FUNC_1(VAR_11, VAR_2, VAR_3);

 if (VAR_12 & (VAR_6 | VAR_5 |
     VAR_7))
  FUNC_4(VAR_11);

 if (VAR_12 & VAR_8)
  FUNC_5(VAR_11);

 FUNC_3(&VAR_11->lock);

 return VAR_0;
}
