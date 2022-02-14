
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dev; } ;
struct sc16is7xx_port {int kworker; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sc16is7xx_port* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct uart_port*,int ,int,int) ;
 int FUNC_3 (struct uart_port*,int ,int ) ;
 int FUNC_4 (struct uart_port*,int ) ;

__attribute__((used)) static void FUNC_5(struct uart_port *VAR_4)
{
 struct sc16is7xx_port *VAR_5 = FUNC_0(VAR_4->dev);


 FUNC_3(VAR_4, VAR_3, 0);

 FUNC_2(VAR_4, VAR_0,
         VAR_1 |
         VAR_2,
         VAR_1 |
         VAR_2);

 FUNC_4(VAR_4, 0);

 FUNC_1(&VAR_5->kworker);
}
