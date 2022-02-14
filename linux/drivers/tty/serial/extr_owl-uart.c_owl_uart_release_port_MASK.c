
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int flags; int * membase; int dev; int mapbase; } ;
struct resource {int dummy; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int ,int ) ;
 struct resource* FUNC_2 (struct platform_device*,int ,int ) ;
 int FUNC_3 (struct resource*) ;
 struct platform_device* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct uart_port *VAR_2)
{
 struct platform_device *VAR_3 = FUNC_4(VAR_2->dev);
 struct resource *VAR_4;

 VAR_4 = FUNC_2(VAR_3, VAR_0, 0);
 if (!VAR_4)
  return;

 if (VAR_2->flags & VAR_1) {
  FUNC_1(VAR_2->dev, VAR_2->mapbase,
   FUNC_3(VAR_4));
  FUNC_0(VAR_2->dev, VAR_2->membase);
  VAR_2->membase = ((void*)0);
 }
}
