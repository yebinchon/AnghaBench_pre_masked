
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eeepc_laptop {scalar_t__ cpufv_disabled; } ;
struct eeepc_cpufv {int num; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct eeepc_laptop* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct eeepc_laptop*,struct eeepc_cpufv*) ;
 int FUNC_2 (char const*,int*) ;
 int FUNC_3 (struct eeepc_laptop*,int ,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_4,
      struct device_attribute *VAR_5,
      const char *VAR_6, size_t VAR_7)
{
 struct eeepc_laptop *VAR_8 = FUNC_0(VAR_4);
 struct eeepc_cpufv VAR_9;
 int VAR_10, VAR_11;

 if (VAR_8->cpufv_disabled)
  return -VAR_3;
 if (FUNC_1(VAR_8, &VAR_9))
  return -VAR_2;
 VAR_10 = FUNC_2(VAR_6, &VAR_11);
 if (VAR_10 < 0)
  return VAR_10;
 if (VAR_11 < 0 || VAR_11 >= VAR_9.num)
  return -VAR_1;
 VAR_10 = FUNC_3(VAR_8, VAR_0, VAR_11);
 if (VAR_10)
  return VAR_10;
 return VAR_7;
}
