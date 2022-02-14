
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct fimc_lite {int dummy; } ;


 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct fimc_lite*) ;
 int FUNC_2 (struct fimc_lite*) ;
 struct fimc_lite* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_0)
{
 struct fimc_lite *VAR_1 = FUNC_3(VAR_0);
 struct device *VAR_2 = &VAR_0->dev;

 FUNC_4(VAR_2);
 FUNC_5(VAR_2);
 FUNC_2(VAR_1);
 FUNC_6(VAR_2);
 FUNC_1(VAR_1);

 FUNC_0(VAR_2, "Driver unloaded\n");
 return 0;
}
