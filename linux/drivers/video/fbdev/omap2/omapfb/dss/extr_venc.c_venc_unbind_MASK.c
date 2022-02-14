
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *) ;
 struct platform_device* FUNC_1 (struct device*) ;
 int FUNC_2 (struct platform_device*) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0, struct device *VAR_1, void *VAR_2)
{
 struct platform_device *VAR_3 = FUNC_1(VAR_0);

 FUNC_2(VAR_3);

 FUNC_0(&VAR_3->dev);
}
