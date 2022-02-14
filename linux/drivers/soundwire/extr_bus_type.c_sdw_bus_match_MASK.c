
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdw_slave {int dummy; } ;
struct sdw_driver {int dummy; } ;
struct device_driver {int dummy; } ;
struct device {int dummy; } ;


 struct sdw_slave* FUNC_0 (struct device*) ;
 struct sdw_driver* FUNC_1 (struct device_driver*) ;
 int FUNC_2 (struct sdw_slave*,struct sdw_driver*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, struct device_driver *VAR_1)
{
 struct sdw_slave *VAR_2 = FUNC_0(VAR_0);
 struct sdw_driver *VAR_3 = FUNC_1(VAR_1);

 return !!FUNC_2(VAR_2, VAR_3);
}
