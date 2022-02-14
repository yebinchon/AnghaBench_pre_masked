
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct dwc3_omap {int dev; int irq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct dwc3_omap*) ;
 int FUNC_2 (int ) ;
 struct dwc3_omap* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct dwc3_omap *VAR_1 = FUNC_3(VAR_0);

 FUNC_1(VAR_1);
 FUNC_0(VAR_1->irq);
 FUNC_2(VAR_1->dev);
 FUNC_5(&VAR_0->dev);
 FUNC_4(&VAR_0->dev);

 return 0;
}
