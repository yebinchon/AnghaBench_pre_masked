
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uart_port {int irq; int lock; int mapbase; int membase; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,struct uart_port*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static void FUNC_7(struct uart_port *VAR_3)
{
 u32 VAR_4;
 unsigned long VAR_5;

 FUNC_4(&VAR_3->lock, VAR_5);

 VAR_4 = VAR_2 | VAR_0 |
  FUNC_1(20) | VAR_1;
 FUNC_6(VAR_4, FUNC_0(VAR_3->membase));

 FUNC_3(VAR_3->mapbase, 1);

 FUNC_5(&VAR_3->lock, VAR_5);

 FUNC_2(VAR_3->irq, VAR_3);
}
