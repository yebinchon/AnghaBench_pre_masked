
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xvip_device {int clk; int dev; int iomem; } ;
struct resource {int dummy; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,struct resource*) ;
 struct resource* FUNC_5 (struct platform_device*,int ,int ) ;
 struct platform_device* FUNC_6 (int ) ;

int FUNC_7(struct xvip_device *VAR_1)
{
 struct platform_device *VAR_2 = FUNC_6(VAR_1->dev);
 struct resource *VAR_3;

 VAR_3 = FUNC_5(VAR_2, VAR_0, 0);
 VAR_1->iomem = FUNC_4(VAR_1->dev, VAR_3);
 if (FUNC_0(VAR_1->iomem))
  return FUNC_1(VAR_1->iomem);

 VAR_1->clk = FUNC_3(VAR_1->dev, ((void*)0));
 if (FUNC_0(VAR_1->clk))
  return FUNC_1(VAR_1->clk);

 FUNC_2(VAR_1->clk);
 return 0;
}
