
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct ab8500_gpadc {scalar_t__ irq_sw; scalar_t__ irq_hw; int dev; int regu; int node; } ;


 int FUNC_0 (scalar_t__,struct ab8500_gpadc*) ;
 int FUNC_1 (int *) ;
 struct ab8500_gpadc* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_0)
{
 struct ab8500_gpadc *VAR_1 = FUNC_2(VAR_0);


 FUNC_1(&VAR_1->node);

 if (VAR_1->irq_sw >= 0)
  FUNC_0(VAR_1->irq_sw, VAR_1);
 if (VAR_1->irq_hw >= 0)
  FUNC_0(VAR_1->irq_hw, VAR_1);

 FUNC_4(VAR_1->dev);
 FUNC_3(VAR_1->dev);

 FUNC_7(VAR_1->regu);

 FUNC_6(VAR_1->dev);

 FUNC_5(VAR_1->dev);

 return 0;
}
