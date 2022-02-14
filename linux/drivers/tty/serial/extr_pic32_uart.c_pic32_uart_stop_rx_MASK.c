
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct pic32_sport {int irq_rx; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pic32_sport*,int ,int ) ;
 struct pic32_sport* FUNC_3 (struct uart_port*) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_2)
{
 struct pic32_sport *VAR_3 = FUNC_3(VAR_2);


 FUNC_1(VAR_3->irq_rx);


 FUNC_2(VAR_3, FUNC_0(VAR_0),
    VAR_1);
}
