
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sclp_sd_file {int dummy; } ;
struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (struct sclp_sd_file*) ;
 struct sclp_sd_file* FUNC_1 (struct kobject*) ;

__attribute__((used)) static ssize_t FUNC_2(struct kobject *VAR_0, struct kobj_attribute *VAR_1,
       const char *VAR_2, size_t VAR_3)
{
 struct sclp_sd_file *VAR_4 = FUNC_1(VAR_0);

 FUNC_0(VAR_4);

 return VAR_3;
}
