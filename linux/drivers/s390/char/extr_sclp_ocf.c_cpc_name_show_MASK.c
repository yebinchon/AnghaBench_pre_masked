
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_3(struct kobject *VAR_2,
        struct kobj_attribute *VAR_3, char *VAR_4)
{
 char VAR_5[VAR_0 + 1];

 FUNC_1(VAR_5);
 VAR_5[VAR_0] = 0;
 FUNC_0(VAR_5, VAR_0);
 return FUNC_2(VAR_4, VAR_1, "%s\n", VAR_5);
}
