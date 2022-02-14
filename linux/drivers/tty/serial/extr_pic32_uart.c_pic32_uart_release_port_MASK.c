
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int mapbase; int dev; } ;
struct resource {int dummy; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 struct resource* FUNC_0 (struct platform_device*,int ,int ) ;
 int FUNC_1 (int ,unsigned int) ;
 unsigned int FUNC_2 (struct resource*) ;
 struct platform_device* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct uart_port *VAR_1)
{
 struct platform_device *VAR_2 = FUNC_3(VAR_1->dev);
 struct resource *VAR_3;
 unsigned int VAR_4;

 VAR_3 = FUNC_0(VAR_2, VAR_0, 0);
 if (FUNC_4(!VAR_3))
  return;
 VAR_4 = FUNC_2(VAR_3);

 FUNC_1(VAR_1->mapbase, VAR_4);
}
