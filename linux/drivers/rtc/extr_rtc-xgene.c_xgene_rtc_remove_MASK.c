
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_rtc_dev {int clk; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 struct xgene_rtc_dev* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct xgene_rtc_dev *VAR_1 = FUNC_2(VAR_0);

 FUNC_3(&VAR_0->dev, 0);
 FUNC_1(&VAR_0->dev, 0);
 FUNC_0(VAR_1->clk);
 return 0;
}
