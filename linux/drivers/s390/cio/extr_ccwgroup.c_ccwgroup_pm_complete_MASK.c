
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int driver; } ;
struct ccwgroup_driver {int (* complete ) (struct ccwgroup_device*) ;} ;
struct TYPE_2__ {int driver; } ;
struct ccwgroup_device {scalar_t__ state; TYPE_1__ dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ccwgroup_device*) ;
 struct ccwgroup_device* FUNC_1 (struct device*) ;
 struct ccwgroup_driver* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_1)
{
 struct ccwgroup_device *VAR_2 = FUNC_1(VAR_1);
 struct ccwgroup_driver *VAR_3 = FUNC_2(VAR_1->driver);

 if (!VAR_2->dev.driver || VAR_2->state != VAR_0)
  return;

 if (VAR_3->complete)
  VAR_3->complete(VAR_2);
}
