
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct ab8500_fg {int fg_psy; int fg_wq; int dev; int node; } ;


 int FUNC_0 (struct ab8500_fg*,int) ;
 int FUNC_1 (struct ab8500_fg*) ;
 int FUNC_2 (struct ab8500_fg*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 struct ab8500_fg* FUNC_7 (struct platform_device*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_0)
{
 int VAR_1 = 0;
 struct ab8500_fg *VAR_2 = FUNC_7(VAR_0);

 FUNC_6(&VAR_2->node);


 VAR_1 = FUNC_0(VAR_2, 0);
 if (VAR_1)
  FUNC_4(VAR_2->dev, "failed to disable coulomb counter\n");

 FUNC_3(VAR_2->fg_wq);
 FUNC_1(VAR_2);

 FUNC_5();
 FUNC_2(VAR_2);
 FUNC_8(VAR_2->fg_psy);
 return VAR_1;
}
