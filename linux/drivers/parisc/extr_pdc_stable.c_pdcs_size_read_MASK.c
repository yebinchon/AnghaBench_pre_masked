
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_1(struct kobject *VAR_2,
         struct kobj_attribute *VAR_3,
         char *VAR_4)
{
 char *VAR_5 = VAR_4;

 if (!VAR_4)
  return -VAR_0;


 VAR_5 += FUNC_0(VAR_5, "%ld\n", VAR_1);

 return VAR_5 - VAR_4;
}
