
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_2__ {int f_w; } ;
struct fimc_is {TYPE_1__ fw; int pmu_regs; int irq; } ;


 struct fimc_is* FUNC_0 (struct device*) ;
 int FUNC_1 (struct fimc_is*) ;
 int FUNC_2 (struct fimc_is*) ;
 int FUNC_3 (struct fimc_is*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct fimc_is*) ;
 int FUNC_6 (int ,struct fimc_is*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (struct device*) ;
 int FUNC_10 (struct device*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct device*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_0)
{
 struct device *VAR_1 = &VAR_0->dev;
 struct fimc_is *VAR_2 = FUNC_0(VAR_1);

 FUNC_8(VAR_1);
 FUNC_9(VAR_1);
 if (!FUNC_10(VAR_1))
  FUNC_4(VAR_1);
 FUNC_6(VAR_2->irq, VAR_2);
 FUNC_5(VAR_2);
 FUNC_12(VAR_1);
 FUNC_3(VAR_2);
 FUNC_7(VAR_2->pmu_regs);
 FUNC_1(VAR_2);
 FUNC_11(VAR_2->fw.f_w);
 FUNC_2(VAR_2);

 return 0;
}
