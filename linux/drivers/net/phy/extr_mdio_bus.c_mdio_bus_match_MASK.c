
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdio_device {int (* bus_match ) (struct device*,struct device_driver*) ;} ;
struct device_driver {int dummy; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (struct device*,struct device_driver*) ;
 int FUNC_1 (struct device*,struct device_driver*) ;
 struct mdio_device* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, struct device_driver *VAR_1)
{
 struct mdio_device *VAR_2 = FUNC_2(VAR_0);

 if (FUNC_0(VAR_0, VAR_1))
  return 1;

 if (VAR_2->bus_match)
  return VAR_2->bus_match(VAR_0, VAR_1);

 return 0;
}
