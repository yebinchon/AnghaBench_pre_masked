
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gasket_sysfs_mapping {struct gasket_dev* gasket_dev; } ;
struct gasket_dev {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*) ;
 struct gasket_sysfs_mapping* FUNC_1 (struct device*) ;

struct gasket_dev *FUNC_2(struct device *VAR_0)
{
 struct gasket_sysfs_mapping *VAR_1 = FUNC_1(VAR_0);

 if (!VAR_1) {
  FUNC_0(VAR_0, "device not registered\n");
  return ((void*)0);
 }

 return VAR_1->gasket_dev;
}
