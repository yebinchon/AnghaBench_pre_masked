
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int lock; scalar_t__ membase; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (void*,unsigned int) ;
 int FUNC_1 (void*) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (unsigned int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_6, void *VAR_7)
{
 struct uart_port *VAR_8 = (struct uart_port *)VAR_7;
 unsigned int VAR_9;

 FUNC_3(&VAR_8->lock);




 VAR_9 = FUNC_2(VAR_8->membase + VAR_2);
 FUNC_5(VAR_9, VAR_8->membase + VAR_2);

 if (VAR_9 & VAR_4) {
  FUNC_1(VAR_7);
  VAR_9 &= ~VAR_4;
 }





 if (VAR_9 & VAR_3 &&
     !(FUNC_2(VAR_8->membase + VAR_0) & VAR_1))
  FUNC_0(VAR_7, VAR_9);

 FUNC_4(&VAR_8->lock);
 return VAR_5;
}
