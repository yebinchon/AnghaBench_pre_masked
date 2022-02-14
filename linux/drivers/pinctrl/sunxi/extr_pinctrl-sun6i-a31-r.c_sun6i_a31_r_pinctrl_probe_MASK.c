
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reset_control {int dummy; } ;
struct platform_device {int dev; } ;


 scalar_t__ FUNC_0 (struct reset_control*) ;
 int FUNC_1 (struct reset_control*) ;
 int FUNC_2 (int *,char*) ;
 struct reset_control* FUNC_3 (int *,int *) ;
 int FUNC_4 (struct reset_control*) ;
 int FUNC_5 (struct reset_control*) ;
 int VAR_0 ;
 int FUNC_6 (struct platform_device*,int *) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_1)
{
 struct reset_control *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_3(&VAR_1->dev, ((void*)0));
 if (FUNC_0(VAR_2)) {
  FUNC_2(&VAR_1->dev, "Reset controller missing\n");
  return FUNC_1(VAR_2);
 }

 VAR_3 = FUNC_5(VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_6(VAR_1,
     &VAR_0);

 if (VAR_3)
  FUNC_4(VAR_2);

 return VAR_3;
}
