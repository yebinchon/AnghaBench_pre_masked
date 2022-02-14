
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct kobject {int dummy; } ;
struct device {int dummy; } ;
struct attribute {int mode; } ;


 int FUNC_0 (struct device*) ;
 struct device* FUNC_1 (struct kobject*) ;

__attribute__((used)) static umode_t FUNC_2(struct kobject *VAR_0,
           struct attribute *VAR_1, int VAR_2)
{
 struct device *VAR_3 = FUNC_1(VAR_0);

 if (!FUNC_0(VAR_3))
  return 0;

 return VAR_1->mode;
}
