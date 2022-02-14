
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct aspeed_sdc {int clk; } ;


 int FUNC_0 (int ) ;
 struct aspeed_sdc* FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 struct aspeed_sdc *VAR_1 = FUNC_1(&VAR_0->dev);

 FUNC_0(VAR_1->clk);

 return 0;
}
