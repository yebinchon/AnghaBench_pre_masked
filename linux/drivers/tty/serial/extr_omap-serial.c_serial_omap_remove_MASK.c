
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_omap_port {int pm_qos_request; int dev; int port; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int *,int) ;
 struct uart_omap_port* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_0 ;
 int FUNC_7 (int *,int *) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_1)
{
 struct uart_omap_port *VAR_2 = FUNC_1(VAR_1);

 FUNC_5(VAR_2->dev);

 FUNC_7(&VAR_0, &VAR_2->port);

 FUNC_4(VAR_2->dev);
 FUNC_6(VAR_2->dev);
 FUNC_3(VAR_2->dev);
 FUNC_2(&VAR_2->pm_qos_request);
 FUNC_0(&VAR_1->dev, 0);

 return 0;
}
