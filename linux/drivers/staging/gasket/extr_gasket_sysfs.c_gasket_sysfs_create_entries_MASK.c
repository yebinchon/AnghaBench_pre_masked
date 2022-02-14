
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gasket_sysfs_mapping {size_t attribute_count; int mutex; struct gasket_sysfs_attribute* attributes; } ;
struct TYPE_3__ {int name; } ;
struct TYPE_4__ {TYPE_1__ attr; } ;
struct gasket_sysfs_attribute {TYPE_2__ attr; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,TYPE_2__*) ;
 struct gasket_sysfs_mapping* FUNC_3 (struct device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct gasket_sysfs_mapping*) ;
 scalar_t__ FUNC_7 (int ,int ) ;

int FUNC_8(struct device *VAR_4,
    const struct gasket_sysfs_attribute *VAR_5)
{
 int VAR_6;
 int VAR_7;
 struct gasket_sysfs_mapping *VAR_8 = FUNC_3(VAR_4);

 if (!VAR_8) {
  FUNC_0(VAR_4,
   "Creating entries for device without first initializing mapping\n");
  return -VAR_0;
 }

 FUNC_4(&VAR_8->mutex);
 for (VAR_6 = 0; FUNC_7(VAR_5[VAR_6].attr.attr.name, VAR_2);
  VAR_6++) {
  if (VAR_8->attribute_count == VAR_3) {
   FUNC_1(VAR_4,
    "Maximum number of sysfs nodes reached for device\n");
   FUNC_5(&VAR_8->mutex);
   FUNC_6(VAR_8);
   return -VAR_1;
  }

  VAR_7 = FUNC_2(VAR_4, &VAR_5[VAR_6].attr);
  if (VAR_7) {
   FUNC_0(VAR_4, "Unable to create device entries\n");
   FUNC_5(&VAR_8->mutex);
   FUNC_6(VAR_8);
   return VAR_7;
  }

  VAR_8->attributes[VAR_8->attribute_count] = VAR_5[VAR_6];
  ++VAR_8->attribute_count;
 }

 FUNC_5(&VAR_8->mutex);
 FUNC_6(VAR_8);
 return 0;
}
