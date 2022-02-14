
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eeepc_laptop {int cpufv_disabled; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct eeepc_laptop* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,int*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
      struct device_attribute *VAR_3,
      const char *VAR_4, size_t VAR_5)
{
 struct eeepc_laptop *VAR_6 = FUNC_0(VAR_2);
 int VAR_7, VAR_8;

 VAR_7 = FUNC_1(VAR_4, &VAR_8);
 if (VAR_7 < 0)
  return VAR_7;

 switch (VAR_8) {
 case 0:
  if (VAR_6->cpufv_disabled)
   FUNC_2("cpufv enabled (not officially supported on this model)\n");
  VAR_6->cpufv_disabled = 0;
  return VAR_5;
 case 1:
  return -VAR_1;
 default:
  return -VAR_0;
 }
}
