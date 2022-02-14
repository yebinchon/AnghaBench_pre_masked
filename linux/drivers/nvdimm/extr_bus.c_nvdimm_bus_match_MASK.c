
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_device_driver {int type; } ;
struct device_driver {int dummy; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (struct device*) ;
 struct nd_device_driver VAR_0 ;
 int FUNC_1 (int ,int *) ;
 struct nd_device_driver* FUNC_2 (struct device_driver*) ;
 int FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1, struct device_driver *VAR_2)
{
 struct nd_device_driver *VAR_3 = FUNC_2(VAR_2);

 if (FUNC_0(VAR_1) && VAR_3 == &VAR_0)
  return 1;

 return !!FUNC_1(FUNC_3(VAR_1), &VAR_3->type);
}
