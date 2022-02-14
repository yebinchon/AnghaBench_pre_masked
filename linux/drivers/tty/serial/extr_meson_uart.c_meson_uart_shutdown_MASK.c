
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uart_port {int lock; scalar_t__ membase; int irq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct uart_port*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct uart_port *VAR_4)
{
 unsigned long VAR_5;
 u32 VAR_6;

 FUNC_0(VAR_4->irq, VAR_4);

 FUNC_2(&VAR_4->lock, VAR_5);

 VAR_6 = FUNC_1(VAR_4->membase + VAR_0);
 VAR_6 &= ~VAR_1;
 VAR_6 &= ~(VAR_2 | VAR_3);
 FUNC_4(VAR_6, VAR_4->membase + VAR_0);

 FUNC_3(&VAR_4->lock, VAR_5);
}
