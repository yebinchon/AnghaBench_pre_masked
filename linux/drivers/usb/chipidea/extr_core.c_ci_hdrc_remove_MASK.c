
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct ci_hdrc {scalar_t__ supports_runtime_pm; scalar_t__ role_switch; } ;


 int FUNC_0 (struct ci_hdrc*,int) ;
 int FUNC_1 (struct ci_hdrc*) ;
 int FUNC_2 (struct ci_hdrc*) ;
 int FUNC_3 (struct ci_hdrc*) ;
 int FUNC_4 (struct ci_hdrc*) ;
 struct ci_hdrc* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_0)
{
 struct ci_hdrc *VAR_1 = FUNC_5(VAR_0);

 if (VAR_1->role_switch)
  FUNC_9(VAR_1->role_switch);

 if (VAR_1->supports_runtime_pm) {
  FUNC_7(&VAR_0->dev);
  FUNC_6(&VAR_0->dev);
  FUNC_8(&VAR_0->dev);
 }

 FUNC_4(VAR_1);
 FUNC_1(VAR_1);
 FUNC_0(VAR_1, 1);
 FUNC_3(VAR_1);
 FUNC_2(VAR_1);

 return 0;
}
