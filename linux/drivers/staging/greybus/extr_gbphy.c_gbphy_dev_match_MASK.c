
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gbphy_driver {int dummy; } ;
struct gbphy_device_id {int dummy; } ;
struct gbphy_device {int dummy; } ;
struct device_driver {int dummy; } ;
struct device {int dummy; } ;


 struct gbphy_device_id* FUNC_0 (struct gbphy_device*,struct gbphy_driver*) ;
 struct gbphy_device* FUNC_1 (struct device*) ;
 struct gbphy_driver* FUNC_2 (struct device_driver*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, struct device_driver *VAR_1)
{
 struct gbphy_driver *VAR_2 = FUNC_2(VAR_1);
 struct gbphy_device *VAR_3 = FUNC_1(VAR_0);
 const struct gbphy_device_id *VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_2);
 if (VAR_4)
  return 1;

 return 0;
}
