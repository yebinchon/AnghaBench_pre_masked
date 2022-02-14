
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eeepc_laptop {int cpufv_disabled; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct eeepc_laptop* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
     struct device_attribute *VAR_1,
     char *VAR_2)
{
 struct eeepc_laptop *VAR_3 = FUNC_0(VAR_0);

 return FUNC_1(VAR_2, "%d\n", VAR_3->cpufv_disabled);
}
