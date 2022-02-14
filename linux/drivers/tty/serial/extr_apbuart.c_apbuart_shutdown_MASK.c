
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int irq; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_0 (struct uart_port*) ;
 int FUNC_1 (struct uart_port*,unsigned int) ;
 int FUNC_2 (int ,struct uart_port*) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_4)
{
 unsigned int VAR_5;


 VAR_5 = FUNC_0(VAR_4);
 FUNC_1(VAR_4,
        VAR_5 & ~(VAR_0 | VAR_2 |
        VAR_1 | VAR_3));


 FUNC_2(VAR_4->irq, VAR_4);
}
