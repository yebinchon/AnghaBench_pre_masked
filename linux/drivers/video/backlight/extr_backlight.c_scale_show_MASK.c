
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {size_t scale; } ;
struct backlight_device {TYPE_1__ props; } ;
typedef int ssize_t ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 char** VAR_1 ;
 int FUNC_1 (char*,char*,...) ;
 struct backlight_device* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
  struct device_attribute *VAR_3, char *VAR_4)
{
 struct backlight_device *VAR_5 = FUNC_2(VAR_2);

 if (FUNC_0(VAR_5->props.scale > VAR_0))
  return FUNC_1(VAR_4, "unknown\n");

 return FUNC_1(VAR_4, "%s\n", VAR_1[VAR_5->props.scale]);
}
