
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uart_port {int irq; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,struct uart_port*) ;
 int FUNC_1 (struct uart_port*,int ) ;
 int FUNC_2 (struct uart_port*,int,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct uart_port *VAR_6)
{
 u32 VAR_7;
 unsigned long VAR_8;

 FUNC_3(&VAR_6->lock, VAR_8);

 VAR_7 = FUNC_1(VAR_6, VAR_0);
 VAR_7 &= ~(VAR_5 | VAR_3
  | VAR_4 | VAR_2 | VAR_1);
 FUNC_2(VAR_6, VAR_7, VAR_0);

 FUNC_4(&VAR_6->lock, VAR_8);

 FUNC_0(VAR_6->irq, VAR_6);
}
