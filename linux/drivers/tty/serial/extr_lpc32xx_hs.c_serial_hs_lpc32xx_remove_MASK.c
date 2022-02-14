
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct lpc32xx_hsuart_port {int port; } ;


 int VAR_0 ;
 struct lpc32xx_hsuart_port* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_1)
{
 struct lpc32xx_hsuart_port *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(&VAR_0, &VAR_2->port);

 return 0;
}
