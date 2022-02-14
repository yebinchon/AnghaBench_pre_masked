
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int driver; } ;
struct ccwgroup_driver {int (* remove ) (struct ccwgroup_device*) ;} ;
struct ccwgroup_device {int dummy; } ;


 int FUNC_0 (struct ccwgroup_device*) ;
 struct ccwgroup_device* FUNC_1 (struct device*) ;
 struct ccwgroup_driver* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0)
{
 struct ccwgroup_device *VAR_1 = FUNC_1(VAR_0);
 struct ccwgroup_driver *VAR_2 = FUNC_2(VAR_0->driver);

 if (!VAR_0->driver)
  return 0;
 if (VAR_2->remove)
  VAR_2->remove(VAR_1);

 return 0;
}
