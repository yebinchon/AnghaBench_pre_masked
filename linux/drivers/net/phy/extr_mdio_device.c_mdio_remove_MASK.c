
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mdio_driver {int (* remove ) (struct mdio_device*) ;} ;
struct TYPE_2__ {struct device_driver* driver; } ;
struct mdio_device {TYPE_1__ dev; } ;
struct device_driver {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct mdio_device*,int) ;
 int FUNC_1 (struct mdio_device*) ;
 struct mdio_device* FUNC_2 (struct device*) ;
 struct mdio_driver* FUNC_3 (struct device_driver*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0)
{
 struct mdio_device *VAR_1 = FUNC_2(VAR_0);
 struct device_driver *VAR_2 = VAR_1->dev.driver;
 struct mdio_driver *VAR_3 = FUNC_3(VAR_2);

 if (VAR_3->remove) {
  VAR_3->remove(VAR_1);


  FUNC_0(VAR_1, 1);
 }

 return 0;
}
