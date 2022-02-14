
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct lpc18xx_wdt_dev {int timer; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 struct lpc18xx_wdt_dev* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct lpc18xx_wdt_dev *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(&VAR_0->dev, "I quit now, hardware will probably reboot!\n");
 FUNC_0(&VAR_1->timer);

 return 0;
}
