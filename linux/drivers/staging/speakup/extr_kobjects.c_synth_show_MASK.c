
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {char* name; } ;


 int FUNC_0 (char*,char*,char*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static ssize_t FUNC_1(struct kobject *VAR_1, struct kobj_attribute *VAR_2,
     char *VAR_3)
{
 int VAR_4;

 if (!VAR_0)
  VAR_4 = FUNC_0(VAR_3, "%s\n", "none");
 else
  VAR_4 = FUNC_0(VAR_3, "%s\n", VAR_0->name);
 return VAR_4;
}
