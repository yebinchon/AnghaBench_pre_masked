
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_timers {int dummy; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int *) ;
 struct stm32_timers* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *,struct stm32_timers*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct stm32_timers *VAR_1 = FUNC_1(VAR_0);





 FUNC_0(&VAR_0->dev);
 FUNC_2(&VAR_0->dev, VAR_1);

 return 0;
}
