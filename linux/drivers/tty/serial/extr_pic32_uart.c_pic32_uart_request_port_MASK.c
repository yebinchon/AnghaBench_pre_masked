
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int mapbase; int dev; int membase; } ;
struct resource {int dummy; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int ) ;
 struct resource* FUNC_2 (struct platform_device*,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,char*) ;
 int FUNC_5 (struct resource*) ;
 struct platform_device* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct uart_port *VAR_4)
{
 struct platform_device *VAR_5 = FUNC_6(VAR_4->dev);
 struct resource *VAR_6;

 VAR_6 = FUNC_2(VAR_5, VAR_3, 0);
 if (FUNC_7(!VAR_6))
  return -VAR_1;

 if (!FUNC_4(VAR_4->mapbase, FUNC_5(VAR_6),
    "pic32_uart_mem"))
  return -VAR_0;

 VAR_4->membase = FUNC_1(VAR_4->dev, VAR_4->mapbase,
      FUNC_5(VAR_6));
 if (!VAR_4->membase) {
  FUNC_0(VAR_4->dev, "Unable to map registers\n");
  FUNC_3(VAR_4->mapbase, FUNC_5(VAR_6));
  return -VAR_2;
 }

 return 0;
}
