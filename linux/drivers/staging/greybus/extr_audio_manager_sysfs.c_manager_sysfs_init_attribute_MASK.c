
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct TYPE_2__ {int name; } ;
struct kobj_attribute {TYPE_1__ attr; } ;


 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (struct kobject*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct kobject *VAR_0,
      struct kobj_attribute *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0, &VAR_1->attr);
 if (VAR_2) {
  FUNC_0("creating the sysfs entry for %s failed: %d\n",
   VAR_1->attr.name, VAR_2);
 }
}
