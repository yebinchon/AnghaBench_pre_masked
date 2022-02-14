
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int irq; int lock; scalar_t__ membase; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,struct uart_port*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct uart_port *VAR_6)
{
 int VAR_7;
 unsigned long VAR_8;

 FUNC_2(&VAR_6->lock, VAR_8);


 VAR_7 = FUNC_1(VAR_6->membase + VAR_4);
 FUNC_4(VAR_7, VAR_6->membase + VAR_3);
 FUNC_4(0xffffffff, VAR_6->membase + VAR_5);


 FUNC_4(VAR_2 | VAR_1,
   VAR_6->membase + VAR_0);

 FUNC_3(&VAR_6->lock, VAR_8);

 FUNC_0(VAR_6->irq, VAR_6);
}
