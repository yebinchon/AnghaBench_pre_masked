
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_rpm {int ramclk; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int ) ;
 struct qcom_rpm* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct qcom_rpm *VAR_1 = FUNC_1(&VAR_0->dev);

 FUNC_2(&VAR_0->dev);
 FUNC_0(VAR_1->ramclk);

 return 0;
}
