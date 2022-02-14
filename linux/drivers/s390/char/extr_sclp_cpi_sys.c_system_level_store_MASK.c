
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 unsigned long long FUNC_2 (char const*,char**,int) ;
 unsigned long long VAR_2 ;

__attribute__((used)) static ssize_t FUNC_3(struct kobject *VAR_3,
      struct kobj_attribute *VAR_4,
      const char *VAR_5,
 size_t VAR_6)
{
 unsigned long long VAR_7;
 char *VAR_8;

 VAR_7 = FUNC_2(VAR_5, &VAR_8, 16);

 if (VAR_8 == VAR_5)
  return -VAR_0;
 if (*VAR_8 == '\n')
  VAR_8++;
 if (*VAR_8)
  return -VAR_0;

 FUNC_0(&VAR_1);
 VAR_2 = VAR_7;
 FUNC_1(&VAR_1);
 return VAR_6;
}
