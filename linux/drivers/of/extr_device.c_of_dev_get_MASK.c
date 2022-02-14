
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct device {int dummy; } ;


 struct device* FUNC_0 (int *) ;
 struct platform_device* FUNC_1 (struct device*) ;

struct platform_device *FUNC_2(struct platform_device *VAR_0)
{
 struct device *VAR_1;

 if (!VAR_0)
  return ((void*)0);
 VAR_1 = FUNC_0(&VAR_0->dev);
 if (VAR_1)
  return FUNC_1(VAR_1);
 else
  return ((void*)0);
}
