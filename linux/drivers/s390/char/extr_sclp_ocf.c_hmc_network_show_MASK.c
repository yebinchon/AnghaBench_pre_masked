
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,char*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static ssize_t FUNC_3(struct kobject *VAR_3,
    struct kobj_attribute *VAR_4, char *VAR_5)
{
 int VAR_6;

 FUNC_1(&VAR_2);
 VAR_6 = FUNC_0(VAR_5, VAR_0, "%s\n", VAR_1);
 FUNC_2(&VAR_2);
 return VAR_6;
}
