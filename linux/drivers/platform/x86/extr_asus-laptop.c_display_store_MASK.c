
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct asus_laptop {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct asus_laptop*,int) ;
 struct asus_laptop* FUNC_1 (struct device*) ;
 int FUNC_2 (char const*,int ,int*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0, struct device_attribute *VAR_1,
        const char *VAR_2, size_t VAR_3)
{
 struct asus_laptop *VAR_4 = FUNC_1(VAR_0);
 int VAR_5, VAR_6;

 VAR_5 = FUNC_2(VAR_2, 0, &VAR_6);
 if (VAR_5 < 0)
  return VAR_5;

 FUNC_0(VAR_4, VAR_6);
 return VAR_3;
}
