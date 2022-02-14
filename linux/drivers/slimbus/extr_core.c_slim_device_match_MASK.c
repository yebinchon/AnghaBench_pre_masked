
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slim_driver {int id_table; } ;
struct slim_device {int dummy; } ;
struct device_driver {int dummy; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (struct device*,struct device_driver*) ;
 int FUNC_1 (int ,struct slim_device*) ;
 struct slim_device* FUNC_2 (struct device*) ;
 struct slim_driver* FUNC_3 (struct device_driver*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0, struct device_driver *VAR_1)
{
 struct slim_device *VAR_2 = FUNC_2(VAR_0);
 struct slim_driver *VAR_3 = FUNC_3(VAR_1);


 if (FUNC_0(VAR_0, VAR_1))
  return 1;

 return !!FUNC_1(VAR_3->id_table, VAR_2);
}
