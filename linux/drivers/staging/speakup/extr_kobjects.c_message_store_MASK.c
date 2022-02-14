
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msg_group_t {int dummy; } ;
struct kobject {int dummy; } ;
struct TYPE_2__ {int name; } ;
struct kobj_attribute {TYPE_1__ attr; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char const*,size_t,struct msg_group_t*) ;
 struct msg_group_t* FUNC_2 (int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct kobject *VAR_1, struct kobj_attribute *VAR_2,
        const char *VAR_3, size_t VAR_4)
{
 struct msg_group_t *VAR_5 = FUNC_2(VAR_2->attr.name);

 if (FUNC_0(!VAR_5))
  return -VAR_0;

 return FUNC_1(VAR_3, VAR_4, VAR_5);
}
