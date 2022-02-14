
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct backlight_device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct backlight_device*,unsigned long) ;
 int FUNC_1 (char const*,int ,unsigned long*) ;
 struct backlight_device* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
  struct device_attribute *VAR_1, const char *VAR_2, size_t VAR_3)
{
 int VAR_4;
 struct backlight_device *VAR_5 = FUNC_2(VAR_0);
 unsigned long VAR_6;

 VAR_4 = FUNC_1(VAR_2, 0, &VAR_6);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_5, VAR_6);

 return VAR_4 ? VAR_4 : VAR_3;
}
