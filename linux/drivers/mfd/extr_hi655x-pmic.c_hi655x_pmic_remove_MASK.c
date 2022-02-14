
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct hi655x_pmic {int irq_data; int gpio; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct hi655x_pmic* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct hi655x_pmic *VAR_1 = FUNC_2(VAR_0);

 FUNC_3(FUNC_0(VAR_1->gpio), VAR_1->irq_data);
 FUNC_1(&VAR_0->dev);
 return 0;
}
