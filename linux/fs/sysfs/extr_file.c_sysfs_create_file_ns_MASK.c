
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int sd; } ;
struct attribute {int mode; } ;
typedef int kuid_t ;
typedef int kgid_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct kobject*,int *,int *) ;
 int FUNC_2 (int ,struct attribute const*,int,int ,int ,int ,void const*) ;

int FUNC_3(struct kobject *VAR_1, const struct attribute *VAR_2,
    const void *VAR_3)
{
 kuid_t VAR_4;
 kgid_t VAR_5;

 if (FUNC_0(!VAR_1 || !VAR_1->sd || !VAR_2))
  return -VAR_0;

 FUNC_1(VAR_1, &VAR_4, &VAR_5);
 return FUNC_2(VAR_1->sd, VAR_2, 0, VAR_2->mode,
          VAR_4, VAR_5, VAR_3);

}
