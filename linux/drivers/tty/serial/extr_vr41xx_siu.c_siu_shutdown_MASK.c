
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct uart_port {scalar_t__ type; int irq; int lock; int mctrl; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,struct uart_port*) ;
 int FUNC_1 (struct uart_port*) ;
 int FUNC_2 (struct uart_port*,int ) ;
 int FUNC_3 (struct uart_port*,int ) ;
 int FUNC_4 (struct uart_port*,int ,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct uart_port *VAR_7)
{
 unsigned long VAR_8;
 uint8_t VAR_9;

 FUNC_4(VAR_7, VAR_3, 0);

 FUNC_5(&VAR_7->lock, VAR_8);

 VAR_7->mctrl &= ~VAR_2;
 FUNC_3(VAR_7, VAR_7->mctrl);

 FUNC_6(&VAR_7->lock, VAR_8);

 VAR_9 = FUNC_2(VAR_7, VAR_4);
 VAR_9 &= ~VAR_5;
 FUNC_4(VAR_7, VAR_4, VAR_9);

 FUNC_1(VAR_7);

 (void)FUNC_2(VAR_7, VAR_6);

 if (VAR_7->type == VAR_1)
  FUNC_7(VAR_0);

 FUNC_0(VAR_7->irq, VAR_7);
}
