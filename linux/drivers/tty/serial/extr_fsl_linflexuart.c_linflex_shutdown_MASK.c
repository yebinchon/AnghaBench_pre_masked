
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int irq; int dev; int lock; scalar_t__ membase; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,struct uart_port*) ;
 unsigned long FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct uart_port *VAR_3)
{
 unsigned long VAR_4;
 unsigned long VAR_5;

 FUNC_2(&VAR_3->lock, VAR_5);


 VAR_4 = FUNC_1(VAR_3->membase + VAR_2);
 VAR_4 &= ~(VAR_0 | VAR_1);
 FUNC_4(VAR_4, VAR_3->membase + VAR_2);

 FUNC_3(&VAR_3->lock, VAR_5);

 FUNC_0(VAR_3->dev, VAR_3->irq, VAR_3);
}
