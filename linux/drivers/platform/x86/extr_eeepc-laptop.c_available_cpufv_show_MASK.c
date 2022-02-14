
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eeepc_laptop {int dummy; } ;
struct eeepc_cpufv {int num; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct eeepc_laptop* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct eeepc_laptop*,struct eeepc_cpufv*) ;
 int FUNC_2 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
        struct device_attribute *VAR_2,
        char *VAR_3)
{
 struct eeepc_laptop *VAR_4 = FUNC_0(VAR_1);
 struct eeepc_cpufv VAR_5;
 int VAR_6;
 ssize_t VAR_7 = 0;

 if (FUNC_1(VAR_4, &VAR_5))
  return -VAR_0;
 for (VAR_6 = 0; VAR_6 < VAR_5.num; VAR_6++)
  VAR_7 += FUNC_2(VAR_3 + VAR_7, "%d ", VAR_6);
 VAR_7 += FUNC_2(VAR_3 + VAR_7, "\n");
 return VAR_7;
}
