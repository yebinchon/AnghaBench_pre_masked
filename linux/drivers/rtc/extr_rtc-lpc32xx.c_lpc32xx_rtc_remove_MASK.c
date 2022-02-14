
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct lpc32xx_rtc {scalar_t__ irq; } ;


 int FUNC_0 (int *,int ) ;
 struct lpc32xx_rtc* FUNC_1 (struct platform_device*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 struct lpc32xx_rtc *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->irq >= 0)
  FUNC_0(&VAR_0->dev, 0);

 return 0;
}
