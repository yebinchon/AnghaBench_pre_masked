
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {scalar_t__ mapbase; struct cdns_uart* private_data; } ;
struct platform_device {int dev; } ;
struct cdns_uart {scalar_t__ id; int cdns_uart_driver; int pclk; int uartclk; int clk_rate_change_nb; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 struct uart_port* VAR_3 ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct uart_port* FUNC_7 (struct platform_device*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,struct uart_port*) ;
 int FUNC_12 (int ) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_5)
{
 struct uart_port *VAR_6 = FUNC_7(VAR_5);
 struct cdns_uart *VAR_7 = VAR_6->private_data;
 int VAR_8;






 VAR_8 = FUNC_11(VAR_7->cdns_uart_driver, VAR_6);
 VAR_6->mapbase = 0;
 FUNC_5(&VAR_2);
 if (VAR_7->id < VAR_0)
  FUNC_1(VAR_7->id, VAR_1);
 FUNC_6(&VAR_2);
 FUNC_2(VAR_7->uartclk);
 FUNC_2(VAR_7->pclk);
 FUNC_8(&VAR_5->dev);
 FUNC_10(&VAR_5->dev);
 FUNC_9(&VAR_5->dev);
 FUNC_4(&VAR_5->dev, 0);







 FUNC_5(&VAR_2);
 if (FUNC_0(VAR_1, VAR_0))
  VAR_4 = 0;
 FUNC_6(&VAR_2);

 FUNC_12(VAR_7->cdns_uart_driver);
 return VAR_8;
}
