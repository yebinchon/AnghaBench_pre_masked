
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int * membase; int mapbase; int dev; } ;
struct resource {int dummy; } ;
struct platform_device {int dummy; } ;
typedef int resource_size_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct resource* FUNC_1 (struct platform_device*,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct resource*) ;
 struct platform_device* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct uart_port *VAR_1)
{
 struct platform_device *VAR_2 = FUNC_4(VAR_1->dev);
 struct resource *VAR_3;
 resource_size_t VAR_4;

 VAR_3 = FUNC_1(VAR_2, VAR_0, 0);
 if (FUNC_5(!VAR_3))
  return;
 VAR_4 = FUNC_3(VAR_3);

 FUNC_2(VAR_1->mapbase, VAR_4);
 FUNC_0(VAR_1->membase);
 VAR_1->membase = ((void*)0);
}
