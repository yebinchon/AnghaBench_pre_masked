
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct ccwgroup_driver {int (* prepare ) (struct ccwgroup_device*) ;} ;
struct TYPE_2__ {int driver; } ;
struct ccwgroup_device {scalar_t__ state; TYPE_1__ dev; int onoff; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct ccwgroup_device*) ;
 struct ccwgroup_device* FUNC_2 (struct device*) ;
 struct ccwgroup_driver* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_2)
{
 struct ccwgroup_device *VAR_3 = FUNC_2(VAR_2);
 struct ccwgroup_driver *VAR_4 = FUNC_3(VAR_3->dev.driver);


 if (FUNC_0(&VAR_3->onoff))
  return -VAR_1;

 if (!VAR_3->dev.driver || VAR_3->state != VAR_0)
  return 0;

 return VAR_4->prepare ? VAR_4->prepare(VAR_3) : 0;
}
