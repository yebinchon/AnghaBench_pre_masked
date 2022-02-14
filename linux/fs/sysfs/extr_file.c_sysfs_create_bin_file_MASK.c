
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobject {int sd; } ;
struct TYPE_2__ {int mode; } ;
struct bin_attribute {TYPE_1__ attr; } ;
typedef int kuid_t ;
typedef int kgid_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct kobject*,int *,int *) ;
 int FUNC_2 (int ,TYPE_1__*,int,int ,int ,int ,int *) ;

int FUNC_3(struct kobject *VAR_1,
     const struct bin_attribute *VAR_2)
{
 kuid_t VAR_3;
 kgid_t VAR_4;

 if (FUNC_0(!VAR_1 || !VAR_1->sd || !VAR_2))
  return -VAR_0;

 FUNC_1(VAR_1, &VAR_3, &VAR_4);
 return FUNC_2(VAR_1->sd, &VAR_2->attr, 1,
          VAR_2->attr.mode, VAR_3, VAR_4, ((void*)0));
}
