
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {struct device_driver* driver; } ;
struct TYPE_2__ {struct device dev; } ;
struct phy_device {int drv; TYPE_1__ mdio; } ;
struct device_driver {int dummy; } ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;

__attribute__((used)) static bool FUNC_2(struct phy_device *VAR_0,
          struct device_driver *VAR_1)
{
 struct device *VAR_2 = &VAR_0->mdio.dev;
 bool VAR_3 = 0;

 if (!VAR_0->drv)
  return VAR_3;

 FUNC_0(VAR_2);
 VAR_3 = VAR_2->driver == VAR_1;
 FUNC_1(VAR_2);

 return VAR_3;
}
