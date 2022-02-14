
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {size_t type; } ;
struct backlight_device {TYPE_1__ props; } ;
typedef int ssize_t ;


 char** VAR_0 ;
 int FUNC_0 (char*,char*,char*) ;
 struct backlight_device* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1, struct device_attribute *VAR_2,
  char *VAR_3)
{
 struct backlight_device *VAR_4 = FUNC_1(VAR_1);

 return FUNC_0(VAR_3, "%s\n", VAR_0[VAR_4->props.type]);
}
