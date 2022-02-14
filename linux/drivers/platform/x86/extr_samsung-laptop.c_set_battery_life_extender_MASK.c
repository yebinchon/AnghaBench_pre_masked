
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct samsung_laptop {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct samsung_laptop* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (char const*,int ,int*) ;
 int FUNC_2 (struct samsung_laptop*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
     struct device_attribute *VAR_2,
     const char *VAR_3, size_t VAR_4)
{
 struct samsung_laptop *VAR_5 = FUNC_0(VAR_1);
 int VAR_6, VAR_7;

 if (!VAR_4 || FUNC_1(VAR_3, 0, &VAR_7) != 0)
  return -VAR_0;

 VAR_6 = FUNC_2(VAR_5, !!VAR_7);
 if (VAR_6 < 0)
  return VAR_6;

 return VAR_4;
}
