
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dev; } ;
struct sc16is7xx_port {int kworker; } ;
struct sc16is7xx_one {int tx_work; } ;


 struct sc16is7xx_port* FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 struct sc16is7xx_one* FUNC_2 (struct uart_port*,struct uart_port*) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_0)
{
 struct sc16is7xx_port *VAR_1 = FUNC_0(VAR_0->dev);
 struct sc16is7xx_one *VAR_2 = FUNC_2(VAR_0, VAR_0);

 FUNC_1(&VAR_1->kworker, &VAR_2->tx_work);
}
