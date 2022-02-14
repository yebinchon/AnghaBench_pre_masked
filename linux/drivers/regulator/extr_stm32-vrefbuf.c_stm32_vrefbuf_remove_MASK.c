
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_vrefbuf {int clk; } ;
struct regulator_dev {int dummy; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int ) ;
 struct regulator_dev* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct stm32_vrefbuf* FUNC_6 (struct regulator_dev*) ;
 int FUNC_7 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_0)
{
 struct regulator_dev *VAR_1 = FUNC_1(VAR_0);
 struct stm32_vrefbuf *VAR_2 = FUNC_6(VAR_1);

 FUNC_3(&VAR_0->dev);
 FUNC_7(VAR_1);
 FUNC_0(VAR_2->clk);
 FUNC_2(&VAR_0->dev);
 FUNC_5(&VAR_0->dev);
 FUNC_4(&VAR_0->dev);

 return 0;
}
