
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int irq; int dev; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ,struct uart_port*) ;
 int VAR_1 ;
 int FUNC_1 (struct uart_port*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct uart_port *VAR_2)
{
 int VAR_3 = 0;
 unsigned long VAR_4;

 FUNC_2(&VAR_2->lock, VAR_4);

 FUNC_1(VAR_2);

 FUNC_3(&VAR_2->lock, VAR_4);

 VAR_3 = FUNC_0(VAR_2->dev, VAR_2->irq, VAR_1, 0,
          VAR_0, VAR_2);

 return VAR_3;
}
