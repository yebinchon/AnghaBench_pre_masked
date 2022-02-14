
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_tscadc_dev {int dev; int regmap; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct ti_tscadc_dev* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_1)
{
 struct ti_tscadc_dev *VAR_2 = FUNC_1(VAR_1);

 FUNC_4(VAR_2->regmap, VAR_0, 0x00);

 FUNC_3(&VAR_1->dev);
 FUNC_2(&VAR_1->dev);

 FUNC_0(VAR_2->dev);

 return 0;
}
