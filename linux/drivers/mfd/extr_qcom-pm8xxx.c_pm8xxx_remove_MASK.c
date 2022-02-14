
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm_irq_chip {int irqdomain; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int *,int *) ;
 struct pm_irq_chip* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct platform_device*,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_1)
{
 int VAR_2 = FUNC_4(VAR_1, 0);
 struct pm_irq_chip *VAR_3 = FUNC_3(VAR_1);

 FUNC_0(&VAR_1->dev, ((void*)0), VAR_0);
 FUNC_2(VAR_2, ((void*)0), ((void*)0));
 FUNC_1(VAR_3->irqdomain);

 return 0;
}
