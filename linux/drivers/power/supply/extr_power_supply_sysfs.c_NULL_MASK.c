
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct power_supply {TYPE_1__* desc; } ;
struct kobj_uevent_env {int dummy; } ;
struct TYPE_4__ {int name; } ;
struct device_attribute {TYPE_2__ attr; } ;
struct device {int dummy; } ;
struct TYPE_3__ {int num_properties; size_t* properties; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct kobj_uevent_env*,char*,char*,...) ;
 int FUNC_1 (struct device*,char*) ;
 struct power_supply* FUNC_2 (struct device*) ;
 int FUNC_3 (unsigned long) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int ,int ) ;
 struct device_attribute* VAR_4 ;
 int FUNC_7 (struct device*,struct device_attribute*,char*) ;
 char* FUNC_8 (char*,char) ;

int FUNC_9(struct device *VAR_5, struct kobj_uevent_env *VAR_6)
{
 struct power_supply *VAR_7 = FUNC_2(VAR_5);
 int VAR_8 = 0, VAR_9;
 char *VAR_10;
 char *VAR_11;

 if (!VAR_7 || !VAR_7->desc) {
  FUNC_1(VAR_5, "No power supply yet\n");
  return VAR_8;
 }

 VAR_8 = FUNC_0(VAR_6, "POWER_SUPPLY_NAME=%s", VAR_7->desc->name);
 if (VAR_8)
  return VAR_8;

 VAR_10 = (char *)FUNC_4(VAR_3);
 if (!VAR_10)
  return -VAR_2;

 for (VAR_9 = 0; VAR_9 < VAR_7->desc->num_properties; VAR_9++) {
  struct device_attribute *VAR_12;
  char *VAR_13;

  VAR_12 = &VAR_4[VAR_7->desc->properties[VAR_9]];

  VAR_8 = FUNC_7(VAR_5, VAR_12, VAR_10);
  if (VAR_8 == -VAR_1 || VAR_8 == -VAR_0) {


   VAR_8 = 0;
   continue;
  }

  if (VAR_8 < 0)
   goto out;

  VAR_13 = FUNC_8(VAR_10, '\n');
  if (VAR_13)
   *VAR_13 = 0;

  VAR_11 = FUNC_6(VAR_12->attr.name, VAR_3);
  if (!VAR_11) {
   VAR_8 = -VAR_2;
   goto out;
  }

  VAR_8 = FUNC_0(VAR_6, "POWER_SUPPLY_%s=%s", VAR_11, VAR_10);
  FUNC_5(VAR_11);
  if (VAR_8)
   goto out;
 }

out:
 FUNC_3((unsigned long)VAR_10);

 return VAR_8;
}
