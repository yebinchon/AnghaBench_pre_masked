
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xenbus_driver {int (* read_otherend_details ) (struct xenbus_device*) ;} ;
struct TYPE_2__ {int driver; } ;
struct xenbus_device {TYPE_1__ dev; } ;


 int FUNC_0 (struct xenbus_device*) ;
 int FUNC_1 (struct xenbus_device*) ;
 int FUNC_2 (struct xenbus_device*) ;
 struct xenbus_driver* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct xenbus_device *VAR_0)
{
 struct xenbus_driver *VAR_1 = FUNC_3(VAR_0->dev.driver);

 FUNC_1(VAR_0);
 FUNC_0(VAR_0);

 return VAR_1->read_otherend_details(VAR_0);
}
