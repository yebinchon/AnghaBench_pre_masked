
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct kobject {int dummy; } ;
struct device {scalar_t__ id; } ;
struct attribute {int mode; } ;


 struct device* FUNC_0 (struct kobject*) ;

__attribute__((used)) static umode_t FUNC_1(struct kobject *VAR_0,
       struct attribute *VAR_1, int VAR_2)
{
 struct device *VAR_3 = FUNC_0(VAR_0);





 return VAR_3->id ? VAR_1->mode : 0;
}
