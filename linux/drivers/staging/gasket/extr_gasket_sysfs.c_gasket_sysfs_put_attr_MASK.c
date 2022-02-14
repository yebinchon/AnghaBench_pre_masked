
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gasket_sysfs_mapping {int attribute_count; struct gasket_sysfs_attribute* attributes; } ;
struct TYPE_3__ {int name; } ;
struct TYPE_4__ {TYPE_1__ attr; } ;
struct gasket_sysfs_attribute {TYPE_2__ attr; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,int ) ;
 struct gasket_sysfs_mapping* FUNC_1 (struct device*) ;
 int FUNC_2 (struct gasket_sysfs_mapping*,int) ;

void FUNC_3(struct device *VAR_0,
      struct gasket_sysfs_attribute *VAR_1)
{
 int VAR_2;
 int VAR_3;
 struct gasket_sysfs_mapping *VAR_4 = FUNC_1(VAR_0);
 struct gasket_sysfs_attribute *VAR_5 = ((void*)0);

 if (!VAR_4)
  return;

 VAR_5 = VAR_4->attributes;
 VAR_3 = VAR_4->attribute_count;
 for (VAR_2 = 0; VAR_2 < VAR_3; ++VAR_2) {
  if (&VAR_5[VAR_2] == VAR_1) {
   FUNC_2(VAR_4, 2);
   return;
  }
 }

 FUNC_0(VAR_0, "Unable to put unknown attribute: %s\n",
  VAR_1->attr.attr.name);
}
