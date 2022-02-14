
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venus_core {int v4l2_dev; struct device* dev; } ;
struct platform_device {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct venus_core*,int) ;
 int FUNC_2 (struct venus_core*) ;
 int FUNC_3 (struct device*) ;
 struct venus_core* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct venus_core*) ;
 int FUNC_10 (struct venus_core*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_0)
{
 struct venus_core *VAR_1 = FUNC_4(VAR_0);
 struct device *VAR_2 = VAR_1->dev;
 int VAR_3;

 VAR_3 = FUNC_6(VAR_2);
 FUNC_0(VAR_3 < 0);

 VAR_3 = FUNC_1(VAR_1, 1);
 FUNC_0(VAR_3);

 FUNC_2(VAR_1);
 FUNC_10(VAR_1);
 FUNC_3(VAR_2);

 FUNC_9(VAR_1);

 FUNC_7(VAR_2);
 FUNC_5(VAR_2);

 FUNC_8(&VAR_1->v4l2_dev);

 return VAR_3;
}
