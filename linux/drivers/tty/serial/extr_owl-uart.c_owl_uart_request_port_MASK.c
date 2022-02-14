
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int flags; int membase; int mapbase; int dev; } ;
struct resource {int dummy; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 struct resource* FUNC_3 (struct platform_device*,int ,int ) ;
 int FUNC_4 (struct resource*) ;
 struct platform_device* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct uart_port *VAR_4)
{
 struct platform_device *VAR_5 = FUNC_5(VAR_4->dev);
 struct resource *VAR_6;

 VAR_6 = FUNC_3(VAR_5, VAR_2, 0);
 if (!VAR_6)
  return -VAR_1;

 if (!FUNC_2(VAR_4->dev, VAR_4->mapbase,
   FUNC_4(VAR_6), FUNC_0(VAR_4->dev)))
  return -VAR_0;

 if (VAR_4->flags & VAR_3) {
  VAR_4->membase = FUNC_1(VAR_4->dev, VAR_4->mapbase,
    FUNC_4(VAR_6));
  if (!VAR_4->membase)
   return -VAR_0;
 }

 return 0;
}
