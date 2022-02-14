
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uart_port {int line; } ;
struct TYPE_4__ {int * of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_3__ {int buf; } ;
struct atmel_uart_port {int * clk; TYPE_1__ rx_ring; int tasklet_tx; int tasklet_rx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (int ) ;
 struct uart_port* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (int *) ;
 struct atmel_uart_port* FUNC_6 (struct uart_port*) ;
 int FUNC_7 (int *,struct uart_port*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_2)
{
 struct uart_port *VAR_3 = FUNC_4(VAR_2);
 struct atmel_uart_port *VAR_4 = FUNC_6(VAR_3);
 int VAR_5 = 0;

 FUNC_5(&VAR_4->tasklet_rx);
 FUNC_5(&VAR_4->tasklet_tx);

 FUNC_2(&VAR_2->dev, 0);

 VAR_5 = FUNC_7(&VAR_1, VAR_3);

 FUNC_3(VAR_4->rx_ring.buf);



 FUNC_0(VAR_3->line, VAR_0);

 FUNC_1(VAR_4->clk);
 VAR_4->clk = ((void*)0);
 VAR_2->dev.of_node = ((void*)0);

 return VAR_5;
}
