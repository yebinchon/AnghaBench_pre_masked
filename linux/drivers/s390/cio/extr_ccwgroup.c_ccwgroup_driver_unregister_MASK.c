
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct ccwgroup_driver {int driver; } ;
struct ccwgroup_device {int dummy; } ;


 int FUNC_0 (struct ccwgroup_device*) ;
 struct device* FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct device*) ;
 struct ccwgroup_device* FUNC_4 (struct device*) ;

void FUNC_5(struct ccwgroup_driver *VAR_0)
{
 struct device *VAR_1;


 while ((VAR_1 = FUNC_1(&VAR_0->driver, ((void*)0)))) {
  struct ccwgroup_device *VAR_2 = FUNC_4(VAR_1);

  FUNC_0(VAR_2);
  FUNC_3(VAR_1);
 }
 FUNC_2(&VAR_0->driver);
}
