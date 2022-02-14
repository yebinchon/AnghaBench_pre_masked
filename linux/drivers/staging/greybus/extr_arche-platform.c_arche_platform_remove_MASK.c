
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct arche_platform_drvdata {int dev; int pm_notifier; } ;


 int FUNC_0 (struct arche_platform_drvdata*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int *) ;
 struct arche_platform_drvdata* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_2)
{
 struct arche_platform_drvdata *VAR_3 = FUNC_4(VAR_2);

 FUNC_5(&VAR_3->pm_notifier);
 FUNC_3(&VAR_2->dev, &VAR_1);
 FUNC_2(&VAR_2->dev, ((void*)0), VAR_0);
 FUNC_0(VAR_3);

 if (FUNC_6(0))
  FUNC_1(VAR_3->dev, "failed to control hub device\n");

 return 0;
}
