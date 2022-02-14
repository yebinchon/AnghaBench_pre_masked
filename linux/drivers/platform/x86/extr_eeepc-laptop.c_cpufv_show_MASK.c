
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eeepc_laptop {int dummy; } ;
struct eeepc_cpufv {int num; int cur; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct eeepc_laptop* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct eeepc_laptop*,struct eeepc_cpufv*) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
     struct device_attribute *VAR_2,
     char *VAR_3)
{
 struct eeepc_laptop *VAR_4 = FUNC_0(VAR_1);
 struct eeepc_cpufv VAR_5;

 if (FUNC_1(VAR_4, &VAR_5))
  return -VAR_0;
 return FUNC_2(VAR_3, "%#x\n", (VAR_5.num << 8) | VAR_5.cur);
}
