
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gasket_sysfs_mapping {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*) ;
 struct gasket_sysfs_mapping* FUNC_1 (struct device*) ;
 int FUNC_2 (struct gasket_sysfs_mapping*,int) ;

void FUNC_3(struct device *VAR_0)
{
 struct gasket_sysfs_mapping *VAR_1 = FUNC_1(VAR_0);

 if (!VAR_1) {
  FUNC_0(VAR_0,
   "Attempted to remove non-existent sysfs mapping to device\n");
  return;
 }

 FUNC_2(VAR_1, 2);
}
